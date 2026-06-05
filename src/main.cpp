#include "Arduino.h"                      // Core Arduino API
#include "BluetoothA2DPSink.h"            // ESP32 A2DP sink library

BluetoothA2DPSink a2dp_sink;              // Bluetooth audio receiver object

void setup() {
    Serial.begin(115200);                   // start serial output for debug messages
    Serial.println("Booting Bluetooth Speaker...");

    i2s_pin_config_t pin_config;            // specify which pins the I2S peripheral uses
    pin_config.bck_io_num = 26;             // I2S bit clock pin
    pin_config.ws_io_num = 25;              // I2S word select / LR clock pin
    pin_config.data_out_num = 22;           // I2S data output pin to the amp/speaker
    pin_config.data_in_num = I2S_PIN_NO_CHANGE; // no I2S input used for playback-only
    a2dp_sink.set_pin_config(pin_config);   // hand pin setup to the A2DP sink

    i2s_config_t i2s_config;              // configure the I2S audio bus
    i2s_config.mode = (i2s_mode_t)(I2S_MODE_MASTER | I2S_MODE_TX); // ESP32 drives I2S and transmits data only
    i2s_config.sample_rate = 44100;        // typical audio sample rate
    i2s_config.bits_per_sample = I2S_BITS_PER_SAMPLE_16BIT; // standard 16-bit audio
    i2s_config.channel_format = I2S_CHANNEL_FMT_RIGHT_LEFT; // stereo bus format for I2S
    i2s_config.communication_format = I2S_COMM_FORMAT_I2S_MSB; // standard I2S data format
    i2s_config.intr_alloc_flags = 0;       // default interrupt priority
    i2s_config.dma_buf_count = 8;          // number of DMA buffers for smooth playback
    i2s_config.dma_buf_len = 64;           // size of each DMA buffer
    i2s_config.use_apll = false;           // disable APLL
    a2dp_sink.set_i2s_config(i2s_config);  // hand I2S config to the A2DP sink

    a2dp_sink.set_channels(I2S_CHANNEL_MONO); // convert stereo stream into mono
    a2dp_sink.start("ESP32_Speaker");          // start Bluetooth A2DP sink with this name

    Serial.println("Ready. Pair with: ESP32_Speaker");
}

void loop() {
    // no code needed here; Bluetooth audio runs in background
}
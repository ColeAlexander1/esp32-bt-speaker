#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "oled_utility.h"
#include "Arduino.h"
#include "BluetoothA2DPSink.h"
#include "bluetooth_manger.h"

BluetoothManger BT; //Object for BluetoothManger

void setup() {
    Serial.begin(115200);
    BT.begin();
}

void loop() {

}
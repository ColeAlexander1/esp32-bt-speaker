#include <Arduino.h>
#include "BluetoothA2DPSink.h" 
#include "bluetooth_manger.h"

BluetoothA2DPSink sink;


void BluetoothManger::begin() {
    Serial.print("Searching For Device...");
    sink.start("ESP32");
}




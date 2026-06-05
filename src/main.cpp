#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Fake UI data (you will replace later with Bluetooth data)
int volume = 50;
String songName = "YOOOOO";
String timeRemaining = "02:35";

void setup() {
  Serial.begin(115200);

  Wire.begin(21, 22);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED init failed");
    while (true);
  }

  display.clearDisplay();
}

void loop() {
  display.clearDisplay();

  // ===== Volume (top bar) =====
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);

  display.print("Vol: ");
  display.print(volume);
  display.print("%");

  // ===== Song name (middle) =====
  display.setCursor(0, 20);
  display.setTextSize(2);
  display.print(songName);

  // ===== Time remaining (bottom) =====
  display.setTextSize(1);
  display.setCursor(0, 50);
  display.print("Left: ");
  display.print(timeRemaining);

  display.display();

  delay(100);

  volume++;

  if (volume >= 100){

    volume = 0;
  }
}
#ifndef OLED_UTILITY_H
#define OLED_UTILITY_H

#include <Adafruit_SSD1306.h>


void DrawCenteredText(Adafruit_SSD1306 &display, String text, int textsize, int y) 
{
    //Writes Text Centered On The OLED Display
    int x = (128-(text.length() * 6 * textsize)) / 2;

    display.setTextSize(textsize);
    display.setTextColor(WHITE);
    display.setCursor(x, y);
    display.println(text);
}

void DrawVolumeBar(Adafruit_SSD1306 &display, int volume) 
{
    // Draws a volume bar on the OLED display based on the volume level (0-100)
    int barWidth = (volume * 128) / 100; 
    
    display.fillRect(0, 50, barWidth, 5, WHITE); 
    display.drawRect(0, 50, 128, 5, WHITE); 
}

#endif // OLED_UTILITYH

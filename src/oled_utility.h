#ifndef OLED_UTILITY_H
#define OLED_UTILITY_H

#include <Adafruit_SSD1306.h>

void DrawCenteredText(Adafruit_SSD1306 &display, String text, int textsize, int y) 
{
    int x = (128-(text.length() * 6 * textsize)) / 2;

    display.setTextSize(textsize);
    display.setTextColor(WHITE);
    display.setCursor(x, y);
    display.println(text);
}

#endif // OLED_UTILITYH
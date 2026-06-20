#include <LiquidCrystal.h>
#include "config.h"

// Initialize LCD: RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(LCD_RS_PIN, LCD_EN_PIN,
                  LCD_D4_PIN, LCD_D5_PIN, LCD_D6_PIN, LCD_D7_PIN);

void setup() {
    Serial.begin(115200);
    lcd.begin(LCD_COLS, LCD_ROWS);

    

    // Row 1 — bottom line
    lcd.setCursor(0, 1);
    lcd.print(F("YOUR NAME"));

    Serial.println(F("LCD initialised."));
}

void loop() {
    // Blink cursor every 500 ms to show the screen is alive
    lcd.cursor();
    delay(500);
    lcd.noCursor();
    delay(500);
}

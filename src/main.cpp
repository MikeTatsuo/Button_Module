#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

#define BUTTON 2

void setup() {
  pinMode(BUTTON, INPUT);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("** Button  Module **");
}

void loop() {
  lcd.setCursor(0, 2);

  if (digitalRead(BUTTON)) {
    lcd.print("PRESSED");
  } else {
    lcd.print("       ");
  }
}
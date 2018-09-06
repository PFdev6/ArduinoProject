#include <LiquidCrystal_I2C.h>

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup() {
  // put your setup code here, to run once:
  lcd.begin();
  lcd.backlight();
  lcd.print("D");
  lcd.print("R");
  lcd.print("O");
  lcd.print("C");
  lcd.print("H");
  lcd.print("I");
  lcd.print("L");
  lcd.print("?");
  lcd.print(")");
}

void loop() {
  // put your main code here, to run repeatedly:

}


#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27,16,2);
void setup() {
  lcd.init();
  lcd.backlight();
  // put your setup code here, to run once:

}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("HAVE A NICE DAY");
  delay(400);
  lcd.clear();// put your main code here, to run repeatedly:
  lcd.setCursor(4,1);
  lcd.print("SOUVIK");
  delay(400);
  lcd.clear();
}


#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

String readSerial;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {
  readSerial = Serial.readString();

  if (readSerial.length() > 0) {
    lcd.clear();
    lcd.print("btc: "+ readSerial +"$");
  }
}

#include <LiquidCrystal.h>

// Initialize LCD (rs, en, d4, d5, d6, d7)
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int seedCount = 0;
const int targetQuantity = 50;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Seed Counter Virt");
  delay(2000);
  lcd.clear();
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Count: ");
  lcd.print(seedCount);
  
  lcd.setCursor(0, 1);
  lcd.print("Target: ");
  lcd.print(targetQuantity);
  
  if (seedCount < targetQuantity) {
    seedCount++;
    delay(500);
  }
}

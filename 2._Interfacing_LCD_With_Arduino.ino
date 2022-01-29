#include <LiquidCrystal.h>

//Initialize the pis of LCD << rs, en, d4, d5, d6, d7 >>

LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

  // Print a message to the LCD.
  lcd.print(" Pi-Tech India");

  // set the cursor to column 0, line 1
  lcd.setCursor(0, 1);

  lcd.print(" Er. Eddie Yadav ");
}

void loop() {

}

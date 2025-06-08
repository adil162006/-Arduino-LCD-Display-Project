#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);             // set up the LCD's number of columns and rows
  lcd.print("Hello, Adil Bhai !"); // print a message to the LCD
}

void loop() {
  // Nothing needed here for now
}

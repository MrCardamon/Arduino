/*
 * modification of the code from lastminuteengineering.com to control the lcd
 * https://lastminuteengineers.com/arduino-1602-character-lcd-tutorial/
 */

// include the library code:
#include <LiquidCrystal.h>

// Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte Heart[8] = {
0b00000,
0b01010,
0b11111,
0b11111,
0b01110,
0b00100,
0b00000,
0b00000
};

void setup() 
{
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

  // create a new character
  lcd.createChar(0, Heart);

  // Clears the LCD screen
  lcd.clear();

  
}

void loop() 
{  
  
  lcd.clear();

  // Print a message to the LCD.
  lcd.print("Hello Cardamon!");

  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // Print a message to the LCD.
  lcd.print(" Love Github!");


  lcd.setCursor(13, 1);
  lcd.write(byte(0));  
  lcd.setCursor(14, 1);
  lcd.write(byte(0));  


  lcd.setCursor(14, 0);
  lcd.write(byte(0));  
  lcd.setCursor(15, 0);
  lcd.write(byte(0));  
  
  delay(5000);
}

/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.
 		使用16*2的LCD，使用库与所有LCD兼容 

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008                          制作者 与 修改者 以及 日期 
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:    调用库 
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins           接口引脚数字库 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:                    LCD 行数 与 列数 
  lcd.begin(16, 2);
  // Print a message to the LCD.                          LCD显示信息 
  lcd.print("hello, world!");
}

void loop() {
  // set the cursor to column 0, line 1                     第0列，第1行开始 
  // (note: line 1 is the second row, since counting begins with 0):           注释： 从 0 计数，故 行1 为第2行 
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:                            显示当前秒数 
  lcd.print(millis() / 1000);
}
 

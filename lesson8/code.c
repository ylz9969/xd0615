/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.
 		ʹ��16*2��LCD��ʹ�ÿ�������LCD���� 

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

 Library originally added 18 Apr 2008                          ������ �� �޸��� �Լ� ���� 
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

// include the library code:    ���ÿ� 
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins           �ӿ��������ֿ� 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:                    LCD ���� �� ���� 
  lcd.begin(16, 2);
  // Print a message to the LCD.                          LCD��ʾ��Ϣ 
  lcd.print("hello, world!");
}

void loop() {
  // set the cursor to column 0, line 1                     ��0�У���1�п�ʼ 
  // (note: line 1 is the second row, since counting begins with 0):           ע�ͣ� �� 0 �������� ��1 Ϊ��2�� 
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:                            ��ʾ��ǰ���� 
  lcd.print(millis() / 1000);
}
 
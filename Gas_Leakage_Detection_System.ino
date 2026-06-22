#include <LiquidCrystal.h>
#define MQ2 A0
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int buzzer = 9;
const int led = 8;
const int threshold = 300;
int gasValue;


void setup()
{Serial.begin(9600);
pinMode(buzzer, OUTPUT);
pinMode(led, OUTPUT);
lcd.begin(16, 2);}

void loop()
{ gasValue = analogRead(MQ2);
Serial.println(gasValue);
lcd.setCursor(0, 0);
lcd.print("Gas Value: ");
lcd.print(gasValue);
lcd.print("   ");

 if (gasValue > threshold)
{lcd.setCursor(0, 1);
lcd.print("Gas Detected! ");
digitalWrite(led, HIGH);
digitalWrite(buzzer, HIGH);}
  
else
{lcd.setCursor(0, 1);
lcd.print("Safe          ");
digitalWrite(led, LOW);
digitalWrite(buzzer, LOW);}
delay(500);}

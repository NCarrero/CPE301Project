#include <LiquidCrystal.h>

int ThermistorPin = 0;
int Vo;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
Serial.begin(9600);
}

void loop() {

  Vo = analogRead(ThermistorPin);
  T = Vo - 854;
  //R2 = R1 * (1023.0 / (float)Vo - 1.0);
  //logR2 = log(R2);
  //T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));
  //T = T - 273.15;
  //T = (T * 9.0)/ 5.0 + 32.0; 

  lcd.print("Temp = ");
  lcd.print(T);   
  lcd.print(" F");
  
  delay(500);            
  lcd.clear();
}
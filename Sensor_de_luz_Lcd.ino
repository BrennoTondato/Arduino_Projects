#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int LMS = 0;
int valorlido = 0;



void setup()
{
  lcd.begin(16,2);
}



void loop()
{
  
  valorlido = analogRead (LMS);
  
  //lcd.setCursor(0, 0);
  //lcd.print("Valor lido pelo sensor: ");
 
  //lcd.setCursor(0, 1);
  //  lcd.print(valorlido);
  
  if (valorlido < 100 )
  {
    lcd.setCursor(0, 0);
    lcd.print("Esta Escuro !");
    
    lcd.setCursor(0, 1);
    lcd.print(valorlido);
  }
  else
  {
    lcd.setCursor(0, 0);
    lcd.print("Esta Claro  !");
    
    lcd.setCursor(0, 1);
    lcd.print(valorlido);
  }
  
  if (valorlido> 900)
  {
    lcd.setCursor(0, 0);
    lcd.print("Esta muito claro");
  }
  
  delay (1000);
}

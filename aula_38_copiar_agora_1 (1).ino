#include <LiquidCrystal_I2C.h>

#define botao1 0
#define botao2 145
#define botao3 332
#define botao4 505
#define botao5 741

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
 
}

void loop()
{
  int botao = analogRead(A0);
 
 
  if(botao >= botao1 * 0.9 && botao <= botao1 *1.1){
  lcd.setCursor(0, 0);
  lcd.print("Botao 1 Ligado      ");
  }
  if(botao >= botao2 * 0.9 && botao <= botao2 *1.1){
  lcd.setCursor(0, 0);
  lcd.print("Botao 2 Ligado      ");
   
  }if(botao >= botao3 * 0.9 && botao <= botao3 * 1.1){
   lcd.setCursor(0, 0);
   lcd.print("Botao 3 Ligado     ");
   
  }if(botao >= botao4 * 0.9 && botao <= botao4 *1.1){
   lcd.setCursor(0, 0);
   lcd.print("Botao 4 Ligado     ");  
   
  }if(botao >= botao5 * 0.9 && botao <= botao5 *1.1){
   lcd.setCursor(0, 0);
   lcd.print("Botao 5 Ligado     ");
   
  }if(botao == 1023){
   lcd.setCursor(0, 0);
   lcd.print("Botao Desligado");
  }
 
 
 
}
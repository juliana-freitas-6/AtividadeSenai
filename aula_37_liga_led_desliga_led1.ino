/*
Autora: Juliana d' Freitas
Data: 14/03/2025
decrição: display com led
*/
#define Botao 11
#define led 13

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27, 16, 2);

int estadoAnterior = 0;
int estadoAtual = 0;
int estadoLed = 0;


void setup()
{
 lcd.init();
  lcd.backlight();
  pinMode(11, INPUT);
  pinMode(13, OUTPUT);
  
}

void loop()
{
  int estadoAtual = digitalRead(Botao);
  if(estadoAtual == 1 && estadoAnterior == 0){
    estadoLed = !estadoLed;
    digitalWrite(led, estadoLed);
    if (estadoLed == 1){
      lcd.setCursor(0, 0);
      lcd.print("LED LIGADO   ");
      
      
    }else{
      lcd.setCursor(0, 0);
      lcd.print("LED DESLIGADO");
    }
  }
  estadoAnterior = estadoAtual;
}
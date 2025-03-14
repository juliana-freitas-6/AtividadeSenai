/*
Autora: Juliana d' Freitas
Data:13/03/2025
Descrição: Display com contagem variavel
*/

#include <LiquidCrystal_I2C.h>

#define Botao 12

LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup()
{
 lcd.init();
  lcd.backlight();
  pinMode(12, INPUT);
}

void loop()
{
  bool leituraBotao = digitalRead(12);
  static bool leituraAnterior = 0;
  static int contagem = 0;
  static bool SomaSubtracao = 0;
  
  
  if(leituraBotao == 1 && leituraAnterior == 0){
    if(SomaSubtracao == 0){
      contagem++;
      if(contagem == 5) SomaSubtracao = 1;
    }
    else{
      contagem--;
      if(contagem == 1) SomaSubtracao = 0;
    }
    lcd.print(contagem);
  }
  leituraAnterior = leituraBotao;
}
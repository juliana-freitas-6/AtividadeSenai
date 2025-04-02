#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

#define pinLed 2
#define pinBotao 5

bool estadoAnterior = 0;
bool estadoAtual = 0;
bool estadoLed = 0;

/* byte coracao[] =
{ B01010,
B10101,
B10001,
B01010,
B00100,
B00000,
B00000,
B00000 }; */

void setup()
{
  lcd.init();
  lcd.backlight();
  pinMode(pinLed, OUTPUT);
  pinMode(pinBotao, INPUT_PULLUP);
}

void loop()
{
  int estadoAtual = digitalRead(pinBotao);
  if (estadoAtual == 1 && estadoAnterior == 0)
  {
    estadoLed = !estadoLed;
    digitalWrite(pinLed, estadoLed);
    if (estadoLed == 0)
    {
      lcd.setCursor(0, 2);
      lcd.print("PALMEIRAS 0");
    }
    else
    {
      lcd.setCursor(0, 2);
      lcd.print("PALMEIRAS 1");
      lcd.setCursor(0, 0);
      lcd.print("CORINTHIANS 1");
      lcd.setCursor(0, 1);
      lcd.print("X ");
      lcd.setCursor(0, 2);
      lcd.print("PALMEIRAS 1");
    
    }
    
  }
  estadoAnterior = estadoAtual;
}

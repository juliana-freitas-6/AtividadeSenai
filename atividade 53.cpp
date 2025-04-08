#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include <Bounce2.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

const int botaoA = 19;
const int botaoB = 23;
const int botaoC = 2;

 

bool modoSelecao = true; 
int selecionar = 0; 


int intensidade[4] = {0, 0, 0, 0}; 


Bounce debouncerCima = Bounce(); 
Bounce debouncerBaixo = Bounce(); 
Bounce debouncerEnter = Bounce(); 

void setup()
{
  
  Serial.begin(9600);
  pinMode(botaoA, INPUT_PULLUP);
  pinMode(botaoB, INPUT_PULLUP);
  pinMode(botaoC, INPUT_PULLUP);

  
  debouncerCima.attach(botaoA);
  debouncerBaixo.attach(botaoB);
  debouncerEnter.attach(botaoC);

  
  lcd.init();
  lcd.backlight();
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print(" LED A OFF");
  lcd.setCursor(0, 1);
  lcd.print(" LED B OFF");
  lcd.setCursor(0, 2);
  lcd.print(" LED C OFF");
  lcd.setCursor(0, 3);
  lcd.print(" LED D OFF");
}

void loop()
{
  
  debouncerCima.update();
  debouncerBaixo.update();
  debouncerEnter.update();

  
  if (debouncerEnter.fell())
  { 
    modoSelecao = !modoSelecao;

    
    if (modoSelecao)
    {
      lcd.setCursor(0, 0);
      lcd.print("Modo alterado: SELECAO DE LED");
      lcd.setCursor(0, 1);
      lcd.print("                              ");
      lcd.setCursor(0, 2);
      lcd.print("                              ");
      lcd.setCursor(0, 3);
      lcd.print("                              ");
    }
    else
    {
      lcd.setCursor(0, 0);
      lcd.print("Modo alterado: AJUSTE DE INTENSIDADE");
      lcd.setCursor(0, 1);
      lcd.print("                                     ");
      lcd.setCursor(0, 2);
      lcd.print("                                     ");
      lcd.setCursor(0, 3);
      lcd.print("                                     ");
    } 
  }
 if (debouncerCima.fell()) {
    if (modoSelecao) { 
      selecionar = selecionar +1;
      if (selecionar > 3 )
      {
       selecionar = 0;
      }
      Serial.println(selecionar);
    } else {
    }
  } 
  if (debouncerBaixo.fell()) {
    if (modoSelecao) {
      selecionar = selecionar -1;
      if (selecionar < 0 )
      {
       selecionar = 3;
      }
      Serial.println(selecionar);
    } else {  
    }
  }
}

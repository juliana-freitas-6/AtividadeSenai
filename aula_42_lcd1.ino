#include <LiquidCrystal_I2C.h>
/*
nome:Juliana d' Freitas 
data: 20/03/20025
descrição: mostrar no lcd Led ON / Led OFF.
*/

//****DEFINE****
#define valorBotao1 0
#define valorBotao2 145
#define valorBotao3 329
#define valorBotao4 505
#define valorBotao5 741
#define valorSolto 1023
#define pinLedA 10
#define pinLedB 11

//****INSTANCIAS DE OBJETOS****
LiquidCrystal_I2C lcd(0x27, 16, 2);
  
int intensidadeLedA = 0;
int intensidadeLedB = 0;

void setup()
{
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print(">LED A OFF");
    lcd.setCursor(0, 1);
    lcd.print(" LED B OFF");
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
}

void loop()
{
    int valorLeituraAnalogica = analogRead(A0);
    static int valorAnterior = 1023;
    static bool posicao = 0;
    static int estadoLedA = 0;
    static int estadoLedB = 0;
    static bool atualizacao = 0;
     int resultado = 0;
  
    //***** TRATAMENTO DOS BOTOES *******
    // NENHUM BOTAO
    if (valorLeituraAnalogica == valorSolto)
    {
      
    }

    // BOTAO 1 PRESSIONADO
    else if (valorLeituraAnalogica == valorBotao1 &&
             valorAnterior == 1023)
    {
      
        posicao = 0;
        atualizacao = 1;
    }

    // BOTAO 2 PRESSIONADO
    else if (valorLeituraAnalogica >= valorBotao2 * 0.9 &&
             valorLeituraAnalogica <= valorBotao2 * 1.1 &&
             valorAnterior == 1023)
    {
        posicao = 1;
        atualizacao = 1;
    }

    // BOTAO 3 PRESSIONADO
    else if (valorLeituraAnalogica >= valorBotao3 * 0.9 &&
             valorLeituraAnalogica <= valorBotao3 * 1.1 &&
             valorAnterior == 1023)
    {
      if(posicao == 0){
        if(intensidadeLedA > 0){
          intensidadeLedA -= 10;
          Serial.println(intensidadeLedA);
        }
      }else{
        if(intensidadeLedB > 0){
          intensidadeLedB -= 10;
          Serial.println(intensidadeLedB);
        }
      }
      atualizacao = 1;
      
    }

    // BOTAO 4 PRESSIONADO
    else if (valorLeituraAnalogica >= valorBotao4 * 0.9 &&
             valorLeituraAnalogica <= valorBotao4 * 1.1 &&
             valorAnterior == 1023)
    {
       
      if(posicao == 0){
        if(intensidadeLedA < 100){
          intensidadeLedA += 10;
          Serial.println(intensidadeLedA);
        }
      }else{
        if(intensidadeLedB < 100){
          intensidadeLedB += 10;
          Serial.println(intensidadeLedB);
        }
      }
      atualizacao = 1;
      
    }

    // BOTAO 5 PRESSIONADO
    else if (valorLeituraAnalogica >= valorBotao5 * 0.9 &&
             valorLeituraAnalogica <= valorBotao5 * 1.1 &&
             valorAnterior == 1023)
    {
      atualizacao = 1;
      if(posicao == 0){
        estadoLedA = !estadoLedA;
      }else{
        estadoLedB = !estadoLedB;
      }  
   }
      
    valorAnterior = valorLeituraAnalogica;

    //****** FIM DO TRATAMENTO DOS BOTOES ******

      if(atualizacao == 1){
      
    // ***** ATUALIZA DISPLAY ******
    if (posicao == 0) {
      
        lcd.setCursor(0, 0);
        lcd.print(">");
        lcd.setCursor(0, 1);
        lcd.print(" ");

        lcd.setCursor(7, 0);
        if (estadoLedA) {
           lcd.print(intensidadeLedA);
           lcd.print("  ");
        }else{
          lcd.print("OFF");
        }
      
        } else {
        lcd.setCursor(0, 1);
        lcd.print(">");
        lcd.setCursor(0, 0);
        lcd.print(" ");

        lcd.setCursor(7, 1);
        if (estadoLedB){
        lcd.print(intensidadeLedB);
        lcd.print("  ");   
        }else{
        lcd.print("OFF");
        }
    }

    //***** ATUALIZACAO DOS LED ******

      if(estadoLedA == 1) 
      analogWrite(pinLedA, intensidadeLedA * 2.55);
        
      else
          digitalWrite(pinLedA, LOW);
        
        
        if(estadoLedB == 1)
      analogWrite(pinLedB, intensidadeLedB * 2.55);
        
      else
        digitalWrite(pinLedB, LOW);
        
      atualizacao = 0;
      }
}
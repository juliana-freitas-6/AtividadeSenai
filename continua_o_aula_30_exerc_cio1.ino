/*
Nome do arquivo: switch case 
Autora: Juliana d' Freitas 
Data: 07/03/2025
descrição: ligar leds sem usar o delay
*/
#define pinLedBranco 12
#define pinLedVerde 13

unsigned long tempoAtual;

long tempoDecorrido1 = 0;
long tempoDecorrido2 = 0; 

long tempoLedBranco = 1500;
long tempoLedVerde = 1000;

void setup()
{
 pinMode(pinLedBranco, OUTPUT);
 pinMode(pinLedVerde, OUTPUT);
}
void loop()
{
  tempoAtual = millis();
  
  if(tempoAtual - tempoDecorrido1 > tempoLedBranco){
    tempoDecorrido1 = tempoAtual;
    digitalWrite(pinLedBranco, !digitalRead(pinLedBranco));
}
  
   if(tempoAtual - tempoDecorrido2 > tempoLedVerde){
    tempoDecorrido2 = tempoAtual;
    digitalWrite(pinLedVerde, !digitalRead(pinLedVerde));
   }
}
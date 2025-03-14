/*
Autora: Juliana d´ Freitas
Nome do Programa: botão
Data:11/03/2025
descrição: ligar e desligar o led no botão
*/

#define pinLedAzul 13
#define pinBotao 10

int estadoAnterior = 0;
int estadoLed = 0;
int estadoBotao = 0;



void setup()
{
  Serial.begin(9600);
  pinMode(pinBotao, INPUT);
  pinMode(pinLedAzul, OUTPUT);
  
}

void loop()
{
 int estadoAtual = digitalRead(pinBotao);
  
  if (estadoAtual == 1 && estadoAnterior == 0){
    estadoBotao++;
    estadoLed = !estadoLed;
    digitalWrite(pinLedAzul, estadoLed);
  }
  estadoAnterior = estadoAtual;
}
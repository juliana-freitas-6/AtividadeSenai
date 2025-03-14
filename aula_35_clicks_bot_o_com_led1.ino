/* 
Autora: Juliana d' Freitas 
Data: 12/03/2025
Descrição: Aula 35 - botão
*/

#define Botao 8
#define led 10

int estadoAnterior = 0;
int estadoBotao = 0;
int estadoLed = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(Botao, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  int estadoAtual = digitalRead(Botao);
  if (estadoAtual == 1 && estadoAnterior == 0){
    estadoBotao++;
    estadoLed = !estadoLed;
    digitalWrite(led, estadoLed);
    Serial.print("Clique numero: ");
    Serial.println(estadoBotao);
}
  estadoAnterior = estadoAtual;
}
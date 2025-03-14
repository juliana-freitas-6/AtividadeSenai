/*
Autora: Juliana d´ Freitas
Nome do Programa: 
Data:11/03/2025
descrição: Aparecer quantas vezes eu dei click no botão.
*/

#define pinBotao 13


int estadoAnterior = 1;
int estadoBotao = 0;

void setup()
{
Serial.begin(9600);
  
  pinMode(pinBotao, INPUT);
}

void loop()
{
  int estadoAtual = digitalRead(pinBotao);
  if(estadoAtual == 1 && estadoAnterior == 0){
    estadoBotao ++;
    
    
      
      Serial.print("click botao: ");
    Serial.println(estadoBotao);
}
  estadoAnterior = estadoAtual;
}
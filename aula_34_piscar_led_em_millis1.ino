/*
Autora: juliana d´freitas
Data: 11/03/2025
descrição: Aula - 34 botão em millis
*/

#define LedAzul 10
#define Botao 8

bool estadoLed = 0;
unsigned long tempoInicial = 0;

void setup()
{
  pinMode(Botao, INPUT);
  pinMode(LedAzul, OUTPUT);
}

void loop()
{
  bool estadoBotao = digitalRead(Botao);
  
  unsigned long tempoAtual = millis();
    
  if(estadoBotao){
    
    if(tempoAtual - tempoInicial >= 300){
    estadoLed = !estadoLed;
      digitalWrite(LedAzul, estadoLed);
      tempoInicial = tempoAtual;
}
  }else{
    digitalWrite(LedAzul, LOW);
  }
}
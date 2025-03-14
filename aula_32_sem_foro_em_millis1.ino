/*
Autora: juliana d´ freitas
data: 10/03/2025
descrição: aula 32 - semaforo em millis
*/

#define pinLedVerde 11
#define pinLedAmarelo 12
#define pinLedVermelho 13

unsigned long tempoAnterior = 0;
int estadoSemaforo = 0;

void setup()
{
  pinMode(pinLedVermelho, OUTPUT);
  pinMode(pinLedVerde, OUTPUT);
  pinMode(pinLedAmarelo, OUTPUT);
}

void loop()
{
  unsigned long tempoAtual = millis(); //obtem o tempo atual
  
  //troca de estado com base no tempo
  switch (estadoSemaforo){
    case 0: //vermelho
    if (tempoAtual - tempoAnterior >= 1500) {
      digitalWrite(pinLedVermelho, LOW);
      digitalWrite(pinLedVerde, HIGH);
      estadoSemaforo = 1;
      tempoAnterior = tempoAtual;
    } else {
      digitalWrite(pinLedVermelho, HIGH);
      digitalWrite(pinLedVerde, LOW);
      digitalWrite(pinLedAmarelo, LOW);
    }
    break;
    
    case 1: //verde
    if (tempoAtual - tempoAnterior >= 1500){
      digitalWrite(pinLedVerde, LOW);
      digitalWrite(pinLedAmarelo, HIGH);
      estadoSemaforo = 2;
      tempoAnterior = tempoAtual;
    }
        break;
      
      case 2: //amarelo
      if (tempoAtual - tempoAnterior >= 500) {
        digitalWrite(pinLedAmarelo, LOW);
        digitalWrite(pinLedVermelho, HIGH);
        estadoSemaforo = 0;
        tempoAnterior = tempoAtual;
      }
      break;
  }
}
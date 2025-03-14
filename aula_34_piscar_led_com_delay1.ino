/*
Autora: juliana d´freitas
Data: 11/03/2025
descrição: Aula - 34 botão
*/

#define LedAzul 11
#define Botao 9
#define tempoLigado 200
#define tempoDesligado 500

void setup()
{
 pinMode(Botao, INPUT);
  pinMode(LedAzul, OUTPUT);
}

void loop()
{
 bool estadoBotao = digitalRead(Botao);
  Serial.println(estadoBotao);
  
  if(estadoBotao == 1){
    digitalWrite(LedAzul, HIGH);
    delay(tempoLigado);
    digitalWrite(LedAzul, LOW);
    delay(tempoDesligado); 
    
  }else{
    digitalWrite(LedAzul, LOW);
  }
}

#include <Arduino.h>

#define pinLed 2
#define pinButton 5

int estadoAnterior = 1;
int estadoButton = 0;

void setup()
{
  Serial.begin(9600);
 pinMode(pinLed, OUTPUT);
  pinMode(pinButton, INPUT_PULLUP);
}
 
void loop()
{
  bool estadoAtualButton = digitalRead(pinButton);
  static bool estadoAnteriorButton = 1;
  static bool contagem  = 1;

  static unsigned long tempoUltimaMudanca = 0;
  unsigned long tempoAtual = millis();
  static bool ultimaAcao = 1;

  
  //! INICIA O TRATAMENTO DE RUIDO DO BOTAO

  //* Detecta mudanca no estado do botao
  if(estadoAtualButton != estadoAnteriorButton)
{
  tempoUltimaMudanca = tempoAtual; //* Atualiza o tempo da ultima mudanca
}

//* verifica se o novo estado se  estavel por tempmanteveo suficiente
if((tempoAtual - tempoUltimaMudanca) > 50)
{
  //* Se o botao foi pressionado (nivel logico LOW)
  if(!estadoAtualButton)
{
  contagem++;
  Serial.println(contagem);
}
//* Se o botao foi solto (nivel logico HIGH), nenhuma acao por enquanto
else
{
}
}
   estadoAnteriorButton = estadoAtualButton;
}
//* Atualiza o estado anterior para a proxima iteracao
//! FINAL DO TRATAMENTO DO BOTAO
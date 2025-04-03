#include <Arduino.h>

const int pinBotao = 3;

// PROTOTIPOS DAS FUNÇÕES
void ligaLed(int pin);                                // definimos os prototipos das funcoes para informar ao codigo
void desligaLed(int pin);                            // permitindo que elas sejam nomeadas antes do codigo mostrar a definicao completa delas.
void piscaLed(int pin, unsigned long tempo);
int somaDeDoisNumeros(int numeroA, int numeroB);

void setup()
{
    pinMode(2, OUTPUT);
    Serial.print(9600);
}

void loop()
{
    // funcoes
    piscaLed(2, 100);                              // adicionamos nossa funcao de piscar o led, adicionando nosso pino e nosso tempo
    int resultadoDaSoma = somaDeDoisNumeros(4, 8); // pedimos que mostre no serial nossa funcao.
    Serial.println(resultadoDaSoma);
}





void ligaLed(int pin)                            //funcao vazia que nos retorna uma variavel inteira e faz com q um led acenda 
{
    digitalWrite(pin, HIGH);
}

void desligaLed(int pin)                        //funcao vazia que nos retorna uma variavel inteira e faz com q um led desligue 
{
    digitalWrite(pin, LOW);
}

void piscaLed(int pin, unsigned long tempo){        //funcao vazia que nos retorna uma variavel inteira de um pino e de tempo 
    ligaLed(pin);                                   //e faz com q um led pisque 
    delay(tempo);
    desligaLed(pin);
    delay(tempo);
}
int somaDeDoisNumeros(int numeroA, int numeroB)     //funcao inteira que nos retorna duas variaveis inteiras de dois numeros aleatorios
{                                                   //que irao somar e nos retornar um resultado inteiro. 
    int resultado = numeroA + numeroB;
    return resultado;
}
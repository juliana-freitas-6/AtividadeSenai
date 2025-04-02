#include <Arduino.h>

void setup()
{
  Serial.begin(9600);

  for (int tabuada = 0; tabuada <= 10; tabuada++)
  {
    for (int numero = 0; numero <= 10; numero++)
    {
Serial.printf("%d x %d = %d \n", tabuada, numero, numero*tabuada);

     // Serial.print(tabuada);
     // Serial.print(" x ");
     // Serial.print(numero);
     // Serial.println(" = ");
      //Serial.print(numero * tabuada);
    }
  }
}
void loop()
{
}

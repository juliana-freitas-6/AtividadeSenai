/*
Autora: Juliana d' Freitas 
Data:14/03/2025
descrição: volume de radio
*/
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int valor = analogRead(A0);
  //Serial.println(valor);
  
  int resultado = map(valor, 0, 1023, 0, 100);
  Serial.println(resultado);
}
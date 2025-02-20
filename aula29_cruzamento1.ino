/* Autora: Juliana d' Freitas
Nome do programa: Cruzamento
Data: 20/02/2025
*/

#define ledVermelhoA1 13
#define ledVerdeA2 11
#define ledAmareloA3 12
#define ledVermelhoB1 4
#define ledVerdeB2 2
#define ledAmareloB3 3


void setup(){
  pinMode(ledVermelhoA1,OUTPUT);
  pinMode(ledVerdeA2,OUTPUT);
  pinMode(ledAmareloA3,OUTPUT);
  pinMode(ledVermelhoB1,OUTPUT);
  pinMode(ledVerdeB2,OUTPUT);
  pinMode(ledAmareloB3,OUTPUT);
}


void loop(){
  digitalWrite(ledVermelhoB1, HIGH);
  digitalWrite(ledVerdeA2, HIGH);
  delay(3000);
  digitalWrite(ledVerdeA2, LOW);
  
  digitalWrite(ledAmareloA3, HIGH);
  delay(2000);
  digitalWrite(ledAmareloA3, LOW);
  digitalWrite(ledVermelhoB1,LOW);
  
  digitalWrite(ledVermelhoA1, HIGH);
  digitalWrite(ledVerdeB2, HIGH);
  delay(3000);
  digitalWrite(ledVerdeB2, LOW);
  
  digitalWrite(ledAmareloB3, HIGH);
  delay(2000);
  digitalWrite(ledAmareloB3, LOW);
  digitalWrite(ledVermelhoA1, LOW);
 
}
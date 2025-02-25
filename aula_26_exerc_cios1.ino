/*Nome do arquivo: Matemática (Exercícios)
Autora: Juliana d' Freitas 
Data: 24/02/2025
descrição: Esse codigo serve para converter um valor em um certo intervalo,serve para aumentar e diminuir o contador de 0 a 10 e serve tambem para  definir duas variáveis inteiras, para calcular a media aritmética assim podendo exibir o resultado com uma casa decimal
*/
void setup(){ 
  //Exercício 1
  Serial.begin(9600);
    
  int numeroA = 1000;
  int numeroB = 0;
  float numeroC = 25;
  float numeroD = 16;
  float resultado = 0;
  float resultadoReal = 0;
    
    
  resultado = map(numeroA, 0, 1023, 0, 100);
  Serial.println(resultado);
  
  resultado = constrain(resultado, 20, 80);
  Serial.println(resultado);
  
  
  //Exercício 2
  numeroB+= 1;
  Serial.println(numeroB);
   numeroB+= 1;
  Serial.println(numeroB);
   numeroB+= 1;
  Serial.println(numeroB);
   numeroB+= 1;
  Serial.println(numeroB);
   numeroB+= 1;
  Serial.println(numeroB);
   numeroB+= 1;
  Serial.println(numeroB);
   numeroB+= 1;
  Serial.println(numeroB);
   numeroB+= 1;
  Serial.println(numeroB);
   numeroB+= 1;
  Serial.println(numeroB);
   numeroB+= 1;
  Serial.println(numeroB);
  
  numeroB -= 1;
  Serial.println(numeroB);
  numeroB -= 1;
  Serial.println(numeroB);
  numeroB -= 1;
  Serial.println(numeroB);
  numeroB -= 1;
  Serial.println(numeroB);
  numeroB -= 1;
  Serial.println(numeroB);
  numeroB -= 1;
  Serial.println(numeroB);
  numeroB -= 1;
  Serial.println(numeroB);
  numeroB -= 1;
  Serial.println(numeroB);
  numeroB -= 1;
  Serial.println(numeroB);
  numeroB -= 1;
  Serial.println(numeroB);
  
  
  // Exercício 3
 resultado = numeroC + numeroD;
  Serial.print("A soma do numeroC com o numeroD eh: ");
  Serial.println(resultado);
  
  resultado /= 2.0;
  Serial.print("A divisao de C por B: ");
  Serial.println(resultado);
  
  resultadoReal = (float)resultado;
  Serial.print("resultado da divisao em numeros decimais ");
  Serial.println(resultadoReal, 1);
  
                  
  
  
}

void loop()
{
 
}
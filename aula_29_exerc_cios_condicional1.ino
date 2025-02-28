
#define pinLedAzul 13
#define pinLedVermelho 12
#define pinLedVerde 10 

void setup()
{
  
 Serial.begin(9600); 
  
  // EXERCÍCIO 1
  int temperatura = 31;
  
  pinMode(pinLedAzul, OUTPUT);
  if(temperatura > 30)
  {digitalWrite(pinLedAzul, HIGH);
  }else if(temperatura < 30)
  {digitalWrite(pinLedAzul, LOW);
  }
  
  
//EXERCÍCIO 2
  int bateria = 19;
  
  pinMode(pinLedVermelho, OUTPUT);
  if(bateria < 20){
  }else if(bateria > 20)
  {digitalWrite(pinLedVermelho, HIGH);
  digitalWrite(pinLedVermelho, LOW);
  }
  
//EXERCICIO 3
  int numero = 8;
  int resultado = 0;
  
  resultado = numero % 2;
  pinMode(pinLedVerde,OUTPUT); 
  if (resultado== 0);
  {digitalWrite(pinLedVerde,HIGH);
  }
  
  //EXERCICIO 4
  
  int numero1 = 40;
  
  if(numero1 > 0){
  Serial.println("o numero eh positivo");
  }else if(numero1 < 0){
  Serial.println("o numero eh negativo");
  }
    
  //EXERCICIO 5
  
  int salario = 960 ;
  if(salario < 1000){
  Serial.print("Nome: Juliana - Auxiliar em TI, com o salario igual a: ");
  Serial.println(((salario * 10) /100 )+ salario);
  }
 
  //Exercício 6
    
  int salario2 = 490 ;
  float almento = 1.3;
 
  
  if(salario2 <= 500){
  Serial.println("nao tera reajuste");
  resultado = salario2;
  Serial.println(resultado);
  }
  
  if(salario2 < 500){
  resultado = salario2 * almento;
  Serial.println("o seu salario foi reajustado para ");
  Serial.println(resultado);
  }
  
  //Exercicio 7 
  
  int numeroA = 300;
  int numeroB = 250;
  
  if(numeroA > numeroB){
   Serial.println(" numeroA maior");
  }
  
  if(numeroB < numeroA){ 
  Serial.print(" numeroB menor");
  }
    
    
//Exercício 8 
  
  int nota1 = 8;
  int nota2 = 6;
  int nota3 = 7;
  int nota4 = 5;
  float media = 0;
  
  
  media = (nota1 + nota2 + nota3 + nota4) / 4;
  Serial.println("Resultado");
  
  if(media >= 7){
    Serial.println("Aprovado");
  }
  
  if(media < 7 && media >= 5){
    Serial.println("Recuperacao");
  }
  
  if(media <= 5){
    Serial.println("Reprovado");
  }

}
  

void loop(){
  
}
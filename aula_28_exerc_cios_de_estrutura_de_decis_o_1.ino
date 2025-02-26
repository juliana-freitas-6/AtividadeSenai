
void setup()
  
{
  Serial.begin(9600);
  
  int MeuPeso = 70;
  float MinhaAltura = 1.58;
  
  float IMC = 0;
  
  IMC = MeuPeso / sq(MinhaAltura);
  Serial.println(IMC);
   
  if(IMC < 17){
    Serial.println("Muito baixo do ideal");

  }else if(IMC >= 17 && IMC < 18.49){
    Serial.println("Abaixo do peso");
    
  }else if(IMC >= 18.5 && IMC < 24.99){
    Serial.println("Peso normal");
    
    }else if(IMC >= 25 && IMC < 29.99){
     Serial.println("Obesidade grau 1");
    
  }else if(IMC >= 30 && IMC < 34.99){
     Serial.println("Obesidade grau 1");
    
  }else if(IMC >= 35 && IMC < 36.99){
    Serial.println("Obesidade grau 2");
    
  }else if(IMC > 40){
    Serial.println("Obesidade grau 3");
  }
}
 
void loop()
{
  
}
  
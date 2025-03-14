// C++ code
//
void setup()
{
   Serial.begin(9600);
  
}

void loop()
{
  int temperatura = analogRead(A0); 
  
  if(temperatura < 200){
  Serial.println("Muito frio");
    
  }else if(temperatura >= 200 && temperatura < 400){
    Serial.println("Ta frio");
    
  }else if(temperatura >= 400 && temperatura <= 600){
    Serial.println("Ta agradavel");
    
  }else if(temperatura >= 600 && temperatura <= 800){
    Serial.println("Ta calorzinho");
  }else{ 
    Serial.println("Ta Muito quente");
  }
}
#define pinLedVermelho 13
#define pinLedAmarelo 12
#define pinLedVerde 11
#define pinLedAzul 10
#define pinLedBranco 9



void setup()
{
  Serial.begin(9600);
  
  pinMode(pinLedVermelho, OUTPUT);
  pinMode(pinLedAmarelo, OUTPUT);
  pinMode(pinLedVerde, OUTPUT);
  pinMode(pinLedAzul, OUTPUT);
  pinMode(pinLedBranco, OUTPUT);
  
   int AR = 0;
    
   switch(AR)
   {
   
     case 0:
     Serial.println("qualidade do ar pessima");
     digitalWrite(pinLedVermelho, HIGH);
     break;
     
     case 1:
     Serial.println("qualidade do ar ruim");
     digitalWrite(pinLedAmarelo, HIGH);
     break;
     
     case 2:
     Serial.println("qualidade do ar normal");
     digitalWrite(pinLedVerde, HIGH);
     break;
     
     case 3:
     Serial.println("qualidade do ar boa");
     digitalWrite(pinLedAzul, HIGH);
     break;
     
     case 4:
     Serial.println("qualidade do ar excelente");
     digitalWrite(pinLedBranco, HIGH);
     break;
     
     
     default:
     Serial.println("ERRO");
     break;
  }
  
  
}

void loop()
{
}
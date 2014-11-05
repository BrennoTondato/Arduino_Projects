const int LM35 = 0;
float temperatura = 0;
int ADClido = 0;
const int LED[]={2,3,4,5,6,7,8,9,10,11};

void setup()
{
 analogReference(INTERNAL);
 
 for (int i=0; i<10; i++)
 {
   pinMode(LED[i], OUTPUT);
 }
 
}

void loop()
{
  ADClido = analogRead(LM35);
  temperatura = ADClido* 0.1075268817204301;
  
  if (temperatura > 10)
    digitalWrite(LED[0], HIGH);
  
  else
    digitalWrite(LED[0], LOW);  
    
 
  if (temperatura > 11.5)
    digitalWrite(LED[1], HIGH);
  
  else
    digitalWrite(LED[1], LOW);  
    
  if (temperatura > 12.5)
    digitalWrite(LED[2], HIGH);
  
  else
    digitalWrite(LED[2], LOW);  
    
  if (temperatura > 13.5)
    digitalWrite(LED[3], HIGH);
  
  else
    digitalWrite(LED[3], LOW);  
    
  if (temperatura > 20)
    digitalWrite(LED[4], HIGH);
  
  else
    digitalWrite(LED[4], LOW);  
    
  if (temperatura > 23)
    digitalWrite(LED[5], HIGH);
  
  else
    digitalWrite(LED[5], LOW);  
    
  
  if (temperatura > 25)
    digitalWrite(LED[6], HIGH);
  
  else
    digitalWrite(LED[6], LOW);  
    
  
  if (temperatura > 30)
    digitalWrite(LED[7], HIGH);
  
  else
    digitalWrite(LED[7], LOW);  
    
 
  if (temperatura > 35)
    digitalWrite(LED[8], HIGH);
  
  else
    digitalWrite(LED[8], LOW);  
    
  
  if (temperatura > 35.5)
    digitalWrite(LED[9], HIGH);
  
  else
    digitalWrite(LED[9], LOW);  
    
 
  if (temperatura > 40)
    digitalWrite(LED[10], HIGH);
  
  else
    digitalWrite(LED[10], LOW); 
    
 
 
    
  delay(1000);
}

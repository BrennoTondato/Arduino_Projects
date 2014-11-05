
const int led1= 13;
const int led2= 12;
const int led3= 11;

const int botao1 = 2;
const int botao2 = 3;
const int botao3 = 4;

const int buzzer = 10;

int estadobotao1 =0;
int estadobotao2 =0;
int estadobotao3 =0;

int Tom = 0;

void setup ()
{
  pinMode(buzzer, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(botao1, INPUT);
  pinMode(led2, OUTPUT);
  pinMode(botao2, INPUT);
  pinMode(led3, OUTPUT);
  pinMode(botao3, INPUT);
}

void loop()
{
  estadobotao1 = digitalRead(botao1);
  estadobotao2 = digitalRead(botao2);
  estadobotao3 = digitalRead(botao3);
  
  if(estadobotao1 && !estadobotao2 && !estadobotao3)
  {
    Tom = 100;
    digitalWrite(led1, HIGH);
  }
  
  if (estadobotao2 && !estadobotao1 && !estadobotao3)
  {
    Tom = 200;
    digitalWrite(led2,HIGH);
  }
  
  if (estadobotao3 && !estadobotao2 && !estadobotao1)
  {
    Tom=300;
    digitalWrite(led3, HIGH);
  }
  
  if(Tom > 0) 
  { 
    delayMicroseconds(Tom);
    digitalWrite(buzzer, LOW);
    delayMicroseconds(Tom);
    Tom = 0;
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  
  
  
  
}

























const int Piezo = 9;
int Tempo = 1135;
void setup() {
  pinMode(Piezo, OUTPUT);
}
void loop(){
  //digitalWrite(Piezo, HIGH);
  //delayMicroseconds(Tempo);
  //digitalWrite(Piezo, LOW);
  //delayMicroseconds(Tempo);
  
  
  // essa e uma opsao para o que foi feito acima funciona da mesma forma
  tone(Piezo, 440);
}



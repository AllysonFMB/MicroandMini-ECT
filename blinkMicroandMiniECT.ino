int tempo;
void setup() {
pinMode(13, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
tempo = 0;
}
void loop() {
Intensity('c',10,255);
Intensity('d',9,255);
}
 void LigarLed(int pin, int tempo){
  digitalWrite(pin,HIGH);
  delay(tempo);
 }
 void ApagarLed( int pin, int tempo){
  digitalWrite(pin,LOW);
  delay(tempo);
 }
 void Intensity (char sentido, int pin, int v){
  if(sentido == 'c'){
    
  if(v > 127){
    v = 127;
  }
  
  for(int i = 0; i< v; i ++ ){
  analogWrite(pin, i);
  delay(100);
  }
 }
 if(sentido == 'd'){
 
  if(v > 127){
    v = 127;
  }
  
  for(int vv = v; vv > 0; vv -- ){
  analogWrite(pin, vv);
  delay(100);
  }
 }
 }
 /*
 //LENTAMENTE COM AO PASSAR DO TEMPO
 digitalWrite(13, HIGH);
 delay(tempo);
 digitalWrite(13, LOW); 
 delay(tempo);
 tempo +=1;
 
  //BATIDA DO CORAÇÃO
  digitalWrite(13, HIGH);
  delay(800);
  digitalWrite(13, LOW);
  delay(200);
  
  //LIGAR SIMUTANEMENTE 
  digitalWrite(9, HIGH);
  analogWrite(10, 0);
  delay(120);
  digitalWrite(9, LOW);
  analogWrite(10, 120);
  delay(120);
  
  // LIGAR ALTERNADAMENTE 
  digitalWrite(9, HIGH);
  analogWrite(10, 0);
  delay(120);
  digitalWrite(9, LOW);
  analogWrite(10, 120);
  delay(120);
  */


int trig = 8;
int echo = 10;

void setup(){
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop(){
  digitalWrite(trig, LOW);
  delay(100);
  digitalWrite(trig, HIGH);
  delay(100);
  digitalWrite(trig, LOW);
  
  int tempo = pulseIn(echo, HIGH);
  int dist = tempo / 58;
  Serial.println(dist);

  if(dist <= 20 || dist >= 290){
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    
    digitalWrite(6, HIGH);
    delay(200);
    digitalWrite(6, LOW);
    delay(200);
  } else if(dist < 290 && dist >= 260 || dist > 20 && dist < 40){
  	digitalWrite(2, LOW);
    digitalWrite(6, LOW);
    
    digitalWrite(4, HIGH);
    delay(400);
    digitalWrite(4, LOW);
    delay(400);
  } else if(dist < 260){
    digitalWrite(4, LOW);
    digitalWrite(6, LOW);
  	digitalWrite(2, HIGH);
  }
}
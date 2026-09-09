void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int potRead = analogRead(A5);
  int pot = map(potRead, 0, 1023, 0, 360);

  if(pot >= 60){
    digitalWrite(5, HIGH);
  }else if(pot < 60){
    digitalWrite(5, LOW);
  }

  if(Serial.available()) {
    char key = Serial.read();
    if(key == 'l'){
      digitalWrite(6, HIGH);
    }else if(key == 'f'){
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
    }
  }
}

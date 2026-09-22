void setup() {
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  int sensor = analogRead(A3);
  int cem = 100;
  
  if(sensor < cem){
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
  }else if(sensor >= cem && sensor < (cem * 3)){
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
  }else if(sensor >= (cem * 3) && sensor < (cem * 4)){
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
  }else if(sensor >= (cem * 4) && sensor < (cem * 5)){
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
  }else if(sensor >= (cem * 5) && sensor < (cem * 6)){
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, LOW);
  }else if(sensor > (cem * 6)){
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
  }
    Serial.println(sensor);
  	delay(2000);

  // digitalWrite(10, HIGH);
  // digitalWrite(9, HIGH);
  // digitalWrite(8, HIGH);
  // digitalWrite(7, HIGH);
  // digitalWrite(6, HIGH);
}

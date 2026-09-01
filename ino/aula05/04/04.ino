void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
    char senha[3];
    
    Serial.readBytes(senha, 3);
	
    if(senha[0] == 'K'){
      digitalWrite(8, HIGH);
      delay(1000);
    }
    if(senha[1] == 'E'){
      digitalWrite(9, HIGH);
      delay(1000);
    }
      if(senha[2] == 'Y'){
      digitalWrite(10, HIGH);
      delay(1000);
  	}
  }
}

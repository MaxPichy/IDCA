void setup(){
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(8, HIGH);
  delay(1000);
  
  if(Serial.available()){
    char valor = Serial.read();
    
    if(valor == 'k'){
      digitalWrite(9, HIGH);
      delay(1000); 
      digitalWrite(10, HIGH);
      delay(1000); 
    }
	Serial.write(valor);
  }
}

void setup(){
  // pinMode(2, OUTPUT);
  // digitalWrite(2, HIGH);
  	Serial.begin(9600);
  	pinMode(2, OUTPUT);
}

void loop(){
	// delay(1000);
  	// digitalWrite(2, LOW);
  	// delay(1000);
  	
  	if (Serial.available()){
  		char valor = Serial.read();
      
      	if(valor == '1'){
      		digitalWrite(2, HIGH);
        } else if(valor == '0'){
        	digitalWrite(2, LOW);
        }
      
  		Serial.write(valor);
  	}
}
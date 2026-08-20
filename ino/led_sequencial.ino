void setup(){
  	pinMode(2, OUTPUT);
  	pinMode(4, OUTPUT);
  	pinMode(6, OUTPUT);
  	pinMode(8, OUTPUT);
  
  	digitalWrite(2, HIGH);
  	digitalWrite(4, LOW);
  	digitalWrite(6, LOW);
  	digitalWrite(8, LOW);
}

void loop(){
	delay(2000);
  	digitalWrite(2, LOW);
  
  	if(digitalRead(2) == LOW){
  		digitalWrite(4, HIGH);
      	delay(3000);
      	digitalWrite(4, LOW);
          
        if(digitalRead(4) == LOW){
        	digitalWrite(6, HIGH);
          	delay(1000);
          	digitalWrite(6, LOW);
          	
          	if(digitalRead(6) == LOW){
          		digitalWrite(8, HIGH);
              	delay(2000);
              	digitalWrite(8, LOW);
              
              	if(digitalRead(8) == LOW){
              		digitalWrite(2, HIGH);
                  	exit;
                }
            }
        }  
    }
 }
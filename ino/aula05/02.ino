void setup(){
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop(){  
  if(Serial.available()){
    char valor1 = Serial.read();
    if(valor1 == 'l'){
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);

      digitalWrite(8, HIGH);
      delay(1000);
      digitalWrite(9, HIGH);
      delay(1000); 
      digitalWrite(10, HIGH);
      delay(1000); 

    }else if(valor1 == 'd'){
      digitalWrite(8, HIGH);
      delay(1000);
      digitalWrite(9, HIGH);
      delay(1000);
      digitalWrite(10, HIGH);
      delay(3000);

      digitalWrite(10, LOW);
      delay(1000);
      digitalWrite(9, LOW);
      delay(1000); 
      digitalWrite(8, LOW);
      delay(1000);
        
    }
  }
}
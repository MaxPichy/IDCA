void setup(){
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop(){  
  if(Serial.available()){
    char valor1 = Serial.read();
    if(valor1 == 'k'){
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);

    }else if(valor1 == 'p'){
      int tempo = 100;
      for(int i = 0; i < tempo; i++){
        digitalWrite(8, HIGH);
        digitalWrite(9, HIGH);
        digitalWrite(10, HIGH);
        delay(50);

        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        delay(50);
      } 
    }
  }
}
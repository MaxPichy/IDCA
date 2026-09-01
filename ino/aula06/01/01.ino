int led = 8;
int botao = 7;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
}

void loop(){
  if(digitalRead(botao) == HIGH){
    if(digitalRead(led) == LOW){
    	digitalWrite(led, HIGH);
    }else{
    	digitalWrite(led, LOW);
    }
  } 
  //  digitalWrite(led, HIGH);
}
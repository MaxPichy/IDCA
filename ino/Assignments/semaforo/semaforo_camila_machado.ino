// Atribuindo portas aos leds e tempo do sinal verde
int red = 2;
int yel = 3;
int gre = 4;
int tempo = 0;

// Setup inicial de componentes
void setup(){
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(yel, OUTPUT);
  pinMode(gre, OUTPUT);
}

void loop(){
  // Leitura do potenciômetro
  int pot = map(analogRead(A5), 0, 1023, 0, 100);
  
  // Lógica de tempo do sinal verde e console logs
  if(pot >= 0 && pot < 50){
    tempo = 3000;
    Serial.println("Nivel baixo de trafego: < 50%");
    Serial.println("Tempo de sinal verde: 3s");
      
  } else if(pot >= 50 && pot < 70){
    tempo = 3500;
    Serial.println("Nivel medio de trafego: >= 50 e < 70%");
    Serial.println("Tempo de sinal verde: 3.5s");

  } else if(pot >= 70){
    tempo = 4000;
    Serial.println("Nivel alto de trafego: >= 70%");
    Serial.println("Tempo de sinal verde: 4s");
  }
  	// Looping principal
    digitalWrite(yel, LOW);
    digitalWrite(red, HIGH);
    delay(3000);
    digitalWrite(red, LOW);
    digitalWrite(gre, HIGH);
    delay(tempo);
    digitalWrite(gre, LOW);
    digitalWrite(yel, HIGH);
    delay(1500);
}
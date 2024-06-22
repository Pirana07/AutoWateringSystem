int digitalSensor = 2; //A0
int pumpPin = 8; //relay 

void setup() {
  pinMode(digitalSensor, INPUT);
  pinMode(pumpPin, OUTPUT);
}

void loop() {
  if(digitalRead(digitalSensor) == HIGH){
    digitalWrite(pumpPin, HIGH);
    delay(1500); // Pumpus mushaobis dro (1.5 wami)
    digitalWrite(pumpPin, LOW);
  }
  delay(3600000); // 1hour (pumpis gacherebis dro)
}
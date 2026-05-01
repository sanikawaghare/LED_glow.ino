void setup() {
  pinMode(5, OUTPUT);
  Serial.begin(9600);   
}

void loop() {
  digitalWrite(5, HIGH);
  Serial.println("LED ON");  
  delay(1000);

  digitalWrite(5, LOW);
  Serial.println("LED OFF");  
  delay(1000);
}
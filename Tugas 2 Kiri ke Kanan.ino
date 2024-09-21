void setup() {
  for(int LED = 2; LED<=4; LED++){
    pinMode(LED, OUTPUT);
  }
}
void loop() {
for(int LED = 2; LED<=4; LED++){
  digitalWrite(LED, HIGH);
  delay(250);
  digitalWrite(LED, LOW);
}


}

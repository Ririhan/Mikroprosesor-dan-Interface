void setup() {
  for(int LED = 2; LED<=10; LED++){
    pinMode(LED, OUTPUT);
  }
}
void loop() {
for(int LED = 2; LED<=10; LED++){
  digitalWrite(LED, HIGH);
  delay(300);
  digitalWrite(LED, LOW);
}

for(int LED = 5; LED<=10; LED++){
  digitalWrite(LED,LOW);
  delay(300);
}

for(int LED =8; LED>=10; LED--){
  digitalWrite(LED,HIGH);
  delay(300);
  digitalWrite(LED,LOW);
}

}

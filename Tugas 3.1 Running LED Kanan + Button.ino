const int buttonPin = 5; 
int buttonState = 0; // 

void setup() {
  for(int LED = 2; LED <= 4; LED++) {
    pinMode(LED, OUTPUT);
  }

  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
    for(int LED = 4; LED >= 2; LED--) {
      digitalWrite(LED, LOW);
      delay(250);
    }

    for(int LED = 4; LED >= 2; LED--) {
      digitalWrite(LED, HIGH);
      delay(250);
      digitalWrite(LED, LOW);
    }

    for(int LED = 2; LED <= 4; LED++) {
      digitalWrite(LED, LOW);
      delay(250);
    }
  }
}

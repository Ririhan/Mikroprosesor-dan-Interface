const int buttonPin1 = 5;  
const int buttonPin2 = 6;  
const int buttonPin3 = 7;  
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;

void setup() {
  for (int LED = 2; LED <= 4; LED++) {
    pinMode(LED, OUTPUT);
  }

  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
}

void resetLEDs() {
  // Reset semua LED ke LOW
  for (int LED = 2; LED <= 4; LED++) {
    digitalWrite(LED, LOW);
  }
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);


  if (buttonState1 == HIGH) {
    resetLEDs(); 

    for (int LED = 4; LED >= 2; LED--) {
      digitalWrite(LED, HIGH);
      delay(250);
      digitalWrite(LED, LOW);
    }
  }

  if (buttonState2 == HIGH) {
    resetLEDs();

    for (int LED = 2; LED <= 4; LED++) {
      digitalWrite(LED, HIGH);
      delay(250);
      digitalWrite(LED, LOW);
    }
  }

  if (buttonState3 == HIGH) {

    for (int LED = 2; LED <= 4; LED++) {
      digitalWrite(LED, HIGH);
      delay(250);
      digitalWrite(LED, LOW);
    }

    for (int LED = 4; LED >= 2; LED--) {
      digitalWrite(LED, HIGH);
      delay(250);
      digitalWrite(LED, LOW);
    }
  }
}
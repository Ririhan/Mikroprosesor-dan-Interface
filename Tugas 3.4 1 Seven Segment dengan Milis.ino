const int segA = 2;
const int segB = 3;
const int segC = 4;
const int segD = 5;
const int segE = 6;
const int segF = 7;
const int segG = 8;

int counter = 0;

unsigned long previousMillis = 0; 
const long interval = 1000; // interval 1 detik

const byte digitPatterns[10][7] = {
  {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW},   // 0
  {LOW, HIGH, HIGH, LOW, LOW, LOW, LOW},       // 1
  {HIGH, HIGH, LOW, HIGH, HIGH, LOW, HIGH},    // 2
  {HIGH, HIGH, HIGH, HIGH, LOW, LOW, HIGH},    // 3
  {LOW, HIGH, HIGH, LOW, LOW, HIGH, HIGH},     // 4
  {HIGH, LOW, HIGH, HIGH, LOW, HIGH, HIGH},    // 5
  {HIGH, LOW, HIGH, HIGH, HIGH, HIGH, HIGH},   // 6
  {HIGH, HIGH, HIGH, LOW, LOW, LOW, LOW},      // 7
  {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH},  // 8
  {HIGH, HIGH, HIGH, HIGH, LOW, HIGH, HIGH}    // 9
};

void setup() {
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  
  displayDigit(counter);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;  // Reset timer

    counter++;

    if (counter > 9) {
      counter = 0;
    }

    displayDigit(counter);
  }
}

void displayDigit(int number) {
  digitalWrite(segA, digitPatterns[number][0]);
  digitalWrite(segB, digitPatterns[number][1]);
  digitalWrite(segC, digitPatterns[number][2]);
  digitalWrite(segD, digitPatterns[number][3]);
  digitalWrite(segE, digitPatterns[number][4]);
  digitalWrite(segF, digitPatterns[number][5]);
  digitalWrite(segG, digitPatterns[number][6]);
}

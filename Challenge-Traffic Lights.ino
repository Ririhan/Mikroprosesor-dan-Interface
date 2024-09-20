const int red1 = 2;
const int yellow1 = 3;
const int green1 = 4;

const int red2 = 5;
const int yellow2 = 6;
const int green2 = 7;

const int red3 = 8;
const int yellow3 = 9;
const int green3 = 10;

void setup() {
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);

  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);

  pinMode(red3, OUTPUT);
  pinMode(yellow3, OUTPUT);
  pinMode(green3, OUTPUT);
}

void loop() {
  
  digitalWrite(red1, LOW);    
  digitalWrite(green1, HIGH); 
  digitalWrite(red2, HIGH);   
  digitalWrite(red3, HIGH);   
  delay(2000); 
  
  
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, HIGH);
  delay(1000); 

  
  digitalWrite(yellow1, LOW);
  digitalWrite(red1, HIGH);


  digitalWrite(red2, LOW);    
  digitalWrite(yellow2, HIGH); 
  delay(1000); 

  digitalWrite(yellow2, LOW);
  digitalWrite(green2, HIGH); 
  digitalWrite(red1, HIGH);   
  digitalWrite(red3, HIGH);   
  delay(2000); 

  
  digitalWrite(green2, LOW);
  digitalWrite(yellow2, HIGH);
  delay(1000); 

  digitalWrite(yellow2, LOW);
  digitalWrite(red2, HIGH);

  digitalWrite(red3, LOW);    
  digitalWrite(yellow3, HIGH); 
  delay(1000); 

  digitalWrite(yellow3, LOW);
  digitalWrite(green3, HIGH); 
  digitalWrite(red1, HIGH);   
  digitalWrite(red2, HIGH);   
  delay(2000); 

  digitalWrite(green3, LOW);
  digitalWrite(yellow3, HIGH);
  delay(1000); 

  digitalWrite(yellow3, LOW);
  digitalWrite(red3, HIGH);

  digitalWrite(red1, LOW);   
  digitalWrite(yellow1, HIGH); 
  delay(1000); 

  digitalWrite(yellow1, LOW);
  digitalWrite(green1, HIGH); 
}

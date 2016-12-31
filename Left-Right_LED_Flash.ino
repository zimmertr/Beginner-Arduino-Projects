int red = 12;
int yellow = 7;
int yellow2 = 6;
int green = 2;
int green2 = 3;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(green2, OUTPUT);
}

void loop(){
  Left();
  Right();
}

void Left() {
  digitalWrite(red, HIGH);
  delay(100);
  digitalWrite(yellow, HIGH);
  delay(100);
  digitalWrite(green, HIGH);
  delay(100);
  digitalWrite(red, LOW);
  delay(100);
  digitalWrite(yellow, LOW);
  delay(100);
  digitalWrite(green, LOW);
  delay(100);
}

void Right(){
  digitalWrite(green, HIGH);
  delay(100);
  digitalWrite(yellow, HIGH);
  delay(100);
  digitalWrite(red, HIGH);
  delay(100);
  digitalWrite(green, LOW);
  delay(100);
  digitalWrite(yellow, LOW);
  delay(100);
  digitalWrite(red, LOW);
  delay(100);
}


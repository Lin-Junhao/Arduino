int redLED = 4;
int greenLED = 6;
int blueLED = 8;
int dot = 100;
int dash = 500;
int real_dash = 1000;
int shortWait = 500;
int longWait = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(blueLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 5; i++) {
    digitalWrite(redLED,HIGH);
    delay(dot);
    digitalWrite(redLED,LOW);
    delay(shortWait);
  }
  for (int i = 0; i < 10; i++) {
    digitalWrite(greenLED,HIGH);
    delay(dash);
    digitalWrite(greenLED,LOW);
    delay(shortWait);
  }
  for (int i = 0; i < 15; i++) {
    digitalWrite(blueLED,HIGH);
    delay(real_dash);
    digitalWrite(blueLED,LOW);
    delay(shortWait);
  }
  delay(longWait);
}

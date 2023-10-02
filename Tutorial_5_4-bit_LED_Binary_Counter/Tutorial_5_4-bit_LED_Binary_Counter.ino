int yellowLED = 2;
int redLED = 4;
int greenLED = 6;
int blueLED = 8;
int wait = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(yellowLED,OUTPUT);
  pinMode(redLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(blueLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 16; i++) {
    if (i % 2 == 1) digitalWrite(yellowLED,HIGH);
    if ((i / 2) % 2 == 1) digitalWrite(redLED,HIGH);
    if ((i / (2 * 2)) % 2 == 1) digitalWrite(greenLED,HIGH);
    if ((i / (2 * 2 * 2)) % 2 == 1) digitalWrite(blueLED,HIGH);
    delay(wait);
    if (i % 2 == 1) digitalWrite(yellowLED,LOW);
    if ((i / 2) % 2 == 1) digitalWrite(redLED,LOW);
    if ((i / (2 * 2)) % 2 == 1) digitalWrite(greenLED,LOW);
    if ((i / (2 * 2 * 2)) % 2 == 1) digitalWrite(blueLED,LOW);
    delay(wait);
  }
}

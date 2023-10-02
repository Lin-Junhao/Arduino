int firstLED = 2;
int secondLED = 4;
int thirdLED = 6;
int fourthLED = 8;
int fifthLED = 10;
int upperLimit = 32;
int wait = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(firstLED,OUTPUT);
  pinMode(secondLED,OUTPUT);
  pinMode(thirdLED,OUTPUT);
  pinMode(fourthLED,OUTPUT);
  pinMode(fifthLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < upperLimit; i++) {
    if (i % 2 == 1) digitalWrite(firstLED,HIGH);
    if ((i / 2) % 2 == 1) digitalWrite(secondLED,HIGH);
    if ((i / (2 * 2)) % 2 == 1) digitalWrite(thirdLED,HIGH);
    if ((i / (2 * 2 * 2)) % 2 == 1) digitalWrite(fourthLED,HIGH);
    if ((i / (2 * 2 * 2 * 2)) % 2 == 1) digitalWrite(fifthLED,HIGH);
    delay(wait);
    if (i % 2 == 1) digitalWrite(firstLED,LOW);
    if ((i / 2) % 2 == 1) digitalWrite(secondLED,LOW);
    if ((i / (2 * 2)) % 2 == 1) digitalWrite(thirdLED,LOW);
    if ((i / (2 * 2 * 2)) % 2 == 1) digitalWrite(fourthLED,LOW);
    if ((i / (2 * 2 * 2 * 2)) % 2 == 1) digitalWrite(fifthLED,LOW);
    delay(wait);
  }
}

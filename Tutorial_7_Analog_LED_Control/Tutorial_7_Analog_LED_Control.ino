int redLED = 9;
int off = 0;
int dim = 63;
int mid = 127;
int bright = 191;
int on = 255;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redLED, off);
  delay(1000);
  analogWrite(redLED, dim);
  delay(1000);
  analogWrite(redLED, mid);
  delay(1000);
  analogWrite(redLED, bright);
  delay(1000);
  analogWrite(redLED, on);
  delay(1000);
}
 
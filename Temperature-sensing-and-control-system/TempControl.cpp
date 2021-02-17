//Temperature Sensing And Control System Codes
//ARDUINO codes
int tempC = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  tempC = -40 + 0.488155 * (analogRead(A0) - 20);
  digitalWrite(7, HIGH);
  if (tempC >= 40) {
    digitalWrite(8, HIGH);
    analogWrite(3, 255);
    delay(4000); // Wait for 4000 millisecond(s)
    digitalWrite(8, LOW);
    delay(4000); // Wait for 4000 millisecond(s)
  }
  if (tempC < 40 && tempC > 30) {
    digitalWrite(11, HIGH);
    analogWrite(3, 128);
    delay(4000); // Wait for 4000 millisecond(s)
    digitalWrite(11, LOW);
    delay(4000); // Wait for 4000 millisecond(s)
  }
  if (tempC < 30) {
    digitalWrite(9, HIGH);
    analogWrite(3, 0);
    delay(4000); // Wait for 4000 millisecond(s)
    digitalWrite(9, LOW);
    delay(4000); // Wait for 4000 millisecond(s)
  }
}


//ARDUINO Signal Light Control Project Code
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, OUTPUT);
}
void loop()
{
  digitalWrite(13, HIGH);//RED LED
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(13, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  
  digitalWrite(8, HIGH);//YELLOW LED
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(8, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  
  digitalWrite(4, HIGH);//GREEN LED
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(4, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
}

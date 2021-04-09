const int echoPin = 6; // Echo Pin of Ultrasonic Sensor
const int trigPin = 7; // Trigger Pin of Ultrasonic Sensor
const int LED = 4; // LED at Pin 4
void setup()
{
 Serial.begin(9600); // Starting Serial Communication
 pinMode(trigPin, OUTPUT); // initialising pin 7 as output
 pinMode(echoPin, INPUT); // initialising pin 6 as input
 pinMode(LED, OUTPUT); // initialising pin 4 as output
}
void loop()
{
 long duration, inches, cm;

 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
  
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);

 digitalWrite(trigPin, LOW);

 duration = pulseIn(echoPin, HIGH); // using pulsin function to determine total time
 inches = microsecondsToInches(duration); // calling method
 cm = microsecondsToCentimeters(duration); // calling method
 if(cm<10)
 { Serial.print(inches);
 Serial.print("in, ");
 Serial.print(cm);
 Serial.print("cm");
 Serial.println();
 digitalWrite(LED, HIGH);
 }
 else
 { digitalWrite(LED, LOW);
 }
 delay(100);
}
long microsecondsToInches(long microseconds) // method to covert microsec to inches
{
return microseconds / 74 / 2;
}
long microsecondsToCentimeters(long microseconds) // method to covert microsec to cm
{
 return microseconds / 29 / 2;
}

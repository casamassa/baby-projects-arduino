int triggerPin=6;
int echoPin=5;

float distance;
float duration;

void setup()
{
  Serial.begin(9600);
  pinMode(triggerPin,OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop()
{
 
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2); // Wait for 2 microseconds
  
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10); // Wait for 10 microseconds
  
  digitalWrite(triggerPin, LOW);
  
  
  duration=pulseIn(echoPin, HIGH);
  distance=(duration*0.034)/2;
  
  Serial.print("\n Distance: ");
  Serial.print(distance);
  Serial.print(" cm");
  
  if (distance < 10) {
    tone(9, 1331);
    delay(100);
    noTone(9);
  } else if (distance < 20) {
    tone(9, 1331);
    delay(440);
    noTone(9);
  } else if (distance < 30) {
    tone(9, 290);
    delay(1000);
    noTone(9);
  } else {
    noTone(9);
  }
  
  delay(100);
}
              
#include <Servo.h>
#include <SoftwareSerial.h>

SoftwareSerial hc06(2,3);
Servo myMicroServo;
char receivedChar;

void setup()
{
  hc06.begin(9600);
  myMicroServo.attach(6);
}

void loop()
{
  if(hc06.available()>0)
  {
    receivedChar=hc06.read();
  	delay(100);
  
  	if (receivedChar=='o') {
      myMicroServo.write(90);
      hc06.write("open");
  	} else if (receivedChar=='c') {
      myMicroServo.write(0);
      hc06.write("close");
  	}
  	delay(1000);
  }
}
#include<Servo.h>
Servo srv;
#define maxdistance 100
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
  srv.attach(7);

}

void loop()
{
 
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  int d=pulseIn(12,HIGH);
  d=d/29/2;
  Serial.println(d);
  if(d<=maxdistance)
  {
    srv.write(90);
    delay(1000);
  }
  else
  {
    delay(1000);
    srv.write(0);
  }
    
}
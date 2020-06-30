#include <Servo.h>


Servo servo1;
Servo servo2;

int potpin1 = A0;
int potpin2 = A1;

int valpotpin1;
int valpotpin2;


void setup()
{
  servo1.attach(9);
  servo2.attach(10);
}

void loop()
{
  valpotpin1 = analogRead (potpin1);
  valpotpin1 = map (valpotpin1, 0, 1023, 0, 180);
  servo1.write(valpotpin1);
  delay(15);
  
  valpotpin2 = analogRead (potpin2);
  valpotpin2 = map (valpotpin2, 0, 1023, 0, 180);
  servo1.write(valpotpin2);
  delay(15);
}
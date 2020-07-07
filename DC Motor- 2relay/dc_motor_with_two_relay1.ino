

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(4, LOW); //Relay 2 OFF
  digitalWrite(2, HIGH); //Relay 1 ON
  delay(3000); // Wait for 3 second(s)
  digitalWrite(2, LOW); //Relay 1 OFF
  digitalWrite(4, HIGH); //Relay 2 ON
  delay(2000); // Wait for 2 second(s)
 
  
}
void setup()
{
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(400); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  delay(400); // Wait for 1000 millisecond(s)
}

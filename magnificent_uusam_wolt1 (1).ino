// C++ code
//
int pinNUMBER = 8;
void setup()
{
  pinMode(pinNUMBER, OUTPUT);
}

void loop()
{
  digitalWrite(pinNUMBER, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pinNUMBER, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
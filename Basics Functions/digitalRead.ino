// C++ code
//
int LED_PIN = 2;
void setup()
{
  Serial.begin(9600);
  pinMode(LED_PIN, INPUT);//
  
}

void loop()
{
  int Rog= digitalRead(LED_PIN);
  Serial.print("Value is = ");
  Serial.println(Rog);
  delay(1000); // Wait for 1000
}

//Pin 10 has a LED connected 
//give it name:

int ledPin = 10;
void setup() {
  //initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);     //turn on led on(high is the voltage level)
  delay(500);                     //
  digitalWrite(ledPin, LOW);
  delay(500);
}

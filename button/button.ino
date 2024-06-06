int button = 11;
int ledPin = 5;
void setup() 
{
  pinMode(button, INPUT);  
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  int buttonStatus = digitalRead(button);   
  if (buttonStatus == HIGH) 
  { 
    digitalWrite(ledPin,HIGH); 
  } 
  else 
  { 
    digitalWrite(ledPin,LOW);
  }
}

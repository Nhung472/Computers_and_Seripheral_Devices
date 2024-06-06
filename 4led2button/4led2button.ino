int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int but1 = 9;
int but2 = 8;

void setup() {
  pinMode(but1, INPUT_PULLUP);
  pinMode(but2, INPUT_PULLUP);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}


void loop() {
  int func1 = digitalRead(but1);
  int func2 = digitalRead(but2);

  if (func1 == HIGH && func2 == HIGH) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  } else if (func1 == HIGH && func2 == LOW) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
  } else if (func1 == LOW && func2 == HIGH) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
  } else if (func1 == LOW && func2 == LOW) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
  }
}

// Chân ST_CP của 74HC595
int latchPin = 8;
// Chân SH_CP của 74HC595
int clockPin = 12;
// Chân DS của 74HC595
int dataPin = 11;
// Trạng thái của LED là byte mà sẽ gửi qua shiftOut
byte ledStatus;

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
  // Set only LEDs at positions 1, 3, 5, and 7
  ledStatus = B01010101; // Binary value for LEDs at positions 1, 3, 5, and 7
  digitalWrite(latchPin, LOW);
  // Shift out the data to the 74HC595
  shiftOut(dataPin, clockPin, MSBFIRST, ledStatus);
  digitalWrite(latchPin, HIGH);
  delay(500); // Delay to observe the LED pattern
}

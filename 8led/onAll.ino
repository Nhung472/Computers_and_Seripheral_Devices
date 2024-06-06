//chân ST_CP của 74HC595
int latchPin = 8;
//chân SH_CP của 74HC595
int clockPin = 12;
//Chân DS của 74HC595
int dataPin = 11;
//Trạng thái của LED là byte mà sẽ gửi qua shiftOut
byte ledStatus;
void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}
void loop() {
  //Sáng tuần tự
  ledStatus = 0;//mặc định không đèn nào sáng (0 = 0b00000000)
  for (int i = 0; i < 8; i++) {
    ledStatus = (ledStatus << 1) | 1;
    digitalWrite(latchPin, LOW);//các đèn LED không sáng khi digital LOW
    //ShiftOut ra IC
    shiftOut(dataPin, clockPin, MSBFIRST, ledStatus);
    digitalWrite(latchPin, HIGH);//các đèn LED sẽ sáng với trạng thái vừa được cập nhập
    delay(500);//Dừng khoảng 500 mili giây để thấy các hiệu ứng của đèn LED
  }
  //Tắt tuần tự
  for (int i = 0;i<8;i++) {
    ledStatus <<= 1;
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, ledStatus);
    digitalWrite(latchPin, HIGH);
    delay(500);
  }
}

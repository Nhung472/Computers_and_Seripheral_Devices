// Gradually control the brightness of an LED
int ledpin = 11;  // Digital pin connected to the LED
int potpin = A0;  // Analog pin connected to the potentiometer
int val = 0;      // Variable to store the analog value

void setup() 
{
  Serial.begin(9600);  // Initialize serial communication with a baud rate of 9600
}

void loop() 
{
  val = analogRead(potpin);          // Read the analog value from the potentiometer (0-1023)
  Serial.println(val);               // Print the value to the serial monitor
  analogWrite(ledpin, val / 4);      // Adjust LED brightness (0-255) based on the potentiometer value
  delay(10);                         // Small delay to prevent rapid changes
}

const int chanAnalog = A0;
const int chanLed = 9;
int GiatriIn, Giatriout;

void setup()
{
  pinMode(chanLed, OUTPUT);
  pinMode(chanAnalog, INPUT);
  GiatriIn = 0;
  Giatriout = 0;
}

void loop()
{
  GiatriIn = analogRead(chanAnalog);
  Giatriout = map(GiatriIn, 0, 1023, 0 255);
  analogWrite(chanLed, Giatri);
  delay(2);
}


----
//LOONG

//điều khiển đèn sáng dần, tắt dần

int potpin = A0;
int ledpin = 11;
int output;
int val;

void setup() 
{
  Serial.begin(9600);
    pinMode(ledpin, OUTPUT);
}

void loop() 
{
  output = analogRead(potpin);
  val = map(output, 0, 1023, 0, 255);
  Serial.println(val);
  analogWrite(ledpin, val);
  delay(10);
}

/*int sensorValue = 0;
void setup() {

  pinMode(A0, INPUT);

  pinMode(13, OUTPUT);

}
void loop()

{

  // read the value from the sensor

  sensorValue = analogRead(A0);
  // turn the LED on

  digitalWrite(13, HIGH);

  // pause the program for <sensorValue> millseconds

  delay(sensorValue); // Wait for sensorValue millisecond(s)

  // turn the LED off

  digitalWrite(13, LOW);

  // pause the program for <sensorValue> millseconds

  delay(sensorValue); // Wait for sensorValue millisecond(s)

}*/

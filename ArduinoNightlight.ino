

const int sensorDark = 100;

int photocellPin = A0;

int LEDPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int analogValue;
 
  analogValue = analogRead(photocellPin);

  if (analogValue < sensorDark) {
    digitalWrite(LEDPin, HIGH);
  } else {
    digitalWrite(LEDPin, LOW);
  }

  delay(1);

}

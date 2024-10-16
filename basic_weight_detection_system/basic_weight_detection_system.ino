const int ledPinRed = 5;
const int ledPinYellow = 3;
const int ledPinGreen = 2;
const int fsrPin = A0;
const int buzzerPin = 8;

void setup() {
  pinMode(ledPinRed, OUTPUT);    // setting ledPinRed as output
  pinMode(ledPinYellow, OUTPUT); // setting ledPinYellow as output
  pinMode(ledPinGreen, OUTPUT);  // setting ledPinGreen as output
  pinMode(buzzerPin, OUTPUT);    // setting buzzerPin as output
  Serial.begin(9600);
}

void loop() {
  int fsrReading = analogRead(fsrPin);
  Serial.print("FSR Reading: ");
  Serial.println(fsrReading);
  delay(500);

  // Turn off all LEDs initially
  digitalWrite(ledPinRed, LOW);
  digitalWrite(ledPinYellow, LOW);
  digitalWrite(ledPinGreen, LOW);
  digitalWrite(buzzerPin, LOW);

  // LED and buzzer logic based on FSR reading
  if (fsrReading > 1000) {
    digitalWrite(ledPinRed, HIGH);  // Turn Red LED on
    digitalWrite(buzzerPin, HIGH);  // Turn on buzzer when FSR is pressed with high pressure
  } else if (fsrReading > 250 && fsrReading <= 1000) {
    digitalWrite(ledPinYellow, HIGH);  // Turn Yellow LED on
    digitalWrite(buzzerPin, HIGH);  // Turn on buzzer when FSR is pressed with medium pressure
  } else if (fsrReading <= 250 && fsrReading >= 100) {
    digitalWrite(ledPinGreen, HIGH);  // Turn Green LED on
    digitalWrite(buzzerPin, HIGH);  // Turn on buzzer when FSR is pressed with low pressure
  } else {
    // No action, buzzer and LEDs remain off
  }
}

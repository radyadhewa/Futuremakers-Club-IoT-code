// --------------
// HOW TO TURN ON LIGHT
// --------------
const int ledPin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); // setting ledPin as our output

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH); // Turn Led on
  delay(1000); // 1 second delay
  digitalWrite(ledPin, LOW); // Turn Led off
  delay(1000); // 1 second delay
}
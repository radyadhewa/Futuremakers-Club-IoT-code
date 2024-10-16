// --------------
// TURN ON BUZZER
// --------------
const int buzzerPin = 3; //the pin we gonna use

void setup(){
  pinMode(buzzerPin, OUTPUT); // set the output
}

void loop(){
  digitalWrite(buzzerPin, HIGH); // turn on the buzzer
  delay(500);
  digitalWrite(buzzerPin, LOW); // turn off the buzzer
  delay(500);
}
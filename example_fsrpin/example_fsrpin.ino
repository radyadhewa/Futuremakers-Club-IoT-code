// --------------
// TURN ON FSR SENSORS
// --------------
const int fsrPin = A0; // set the input

void setup(){
  Serial.begin(9600); // begin the sensor
}

void loop(){
  int fsrReading = analogRead(fsrPin); // what variable you want to read
  Serial.print("FSR Reading: "); 
  Serial.println(fsrReading); // print the output of data measured
  delay(500);
}
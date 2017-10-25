void setup() {
  // set pin 12 as an output
  pinMode(12, OUTPUT);
}

void loop() {
  // turn pin 12 on, wait 10 seconds, turn pin 12 off, wait 1 second
  digitalWrite(12, HIGH);
  delay(10000);
  digitalWrite(12, LOW);
  delay(1000);
}

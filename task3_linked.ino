void setup() {
  // set pins 11 and 12 as outputs
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // turn pins 11 and 12 on, wait 10 seconds, turn them off, wait 1 second
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(10000);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(1000);
}

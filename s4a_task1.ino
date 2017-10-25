void setup() {
  // set pin 2 as an input and pin 13 as an output
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // read pin 2, store status in variable "switchState"
  boolean switchState = digitalRead(2);
  if(switchState == 0)  //if button is pressed, turn on LED
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }
  delay(50);  //slows down the loop a little bit
}

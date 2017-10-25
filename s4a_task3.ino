/* PWM control of LED with a Dial
 *  
 *  Hardware:  Potentiometer sweep connected to analog 0
 *  LED connected to digital pin 5
 *  
 *  How it Works:  
 *  We read the potentiometer voltage which is returned as
 *  an 10 bit number (between 0 and 1023).  We "map" that
 *  to a 8 bit number using a linear transformation (basically
 *  ledValue = dialValue * 255 / 1023 ).  Then we write
 *  pin 5 with the ledValue.  255 corresponds to pin 5 always 
 *  on.  0 corresponds to pin 5 always off.  128 corresponds
 *  to PWM half on and half off.
 */

void setup() {
  // set pin 5 as an output
  pinMode(5, OUTPUT);
}

void loop() {
  // read the potentiometer on pin A0
  int dialValue = analogRead(A0);
  //  change the dialValue from a number between 0 and 1023 to a number between 0 and 255
  int ledValue = map(dialValue, 0, 1023, 0, 255);
  //  turn on the LED using PWM
  analogWrite(5, ledValue);
  // slow down the loop a bit
  delay(50);
}

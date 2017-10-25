/* Controls 2 LEDs with individual cycle times
 * Hardware:  LEDs in pins 11 and 12  
 * 
 * Setup:  set period_pin12 to be the time (milliseconds) for a cycle of the LED on pin 12 turning on and off
 *         set period_pin11 to be the time (milliseconds) for a cycle of the LED on pin 11 turning on and off
 *  
 * How it works:  In the loop, the program reads the current program time (millis() ) and compares that to the last
 * time that the LED state was changed (stored in variables called timeStamp_pin12 and timeStamp_pin11).  If the 
 * difference is greater than half the period, then we set the LED to be in the opposite state of what it currently is in.
 */

long period_pin12 = 10000;
long period_pin11 = 3000;
long timeStamp_pin12 = 0;
long timeStamp_pin11 = 0;

void setup() {
  // set pins 11 and 12 as outputs
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  // turn off both LEDs to start
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
}

void loop() {
  if(millis() - timeStamp_pin12 > period_pin12 / 2)  // has half the period passed?
  {
    digitalWrite(12, !digitalRead(12)); // flip the state of pin 12
    timeStamp_pin12 = millis();         // record the time
  }

  if(millis() - timeStamp_pin11 > period_pin11 / 2)
  {
    digitalWrite(11, !digitalRead(11));
    timeStamp_pin11 = millis();
  }
}

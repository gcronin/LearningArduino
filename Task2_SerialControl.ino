/* LED Control by Serial Connection
 * Hardware:  LED in pin 12
 * This program reads a serial connection to the Arduino.  If the letter
 * "a" is typed, pin 12 is turned off.  If the letter "s" is typed, 
 * pin 12 is turned off.
 * 
 * Change the controls by looking up letter "values" on an ascii table such 
 * as 
 */

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(12, OUTPUT);
  digitalWrite(12, LOW);
  // Setup a connection to the computer at 9600 bits per second
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0)   // something sent from the computer?
  {
    byte letter = Serial.read();  //  read what's on the serial line
    Serial.println(letter);  //echo back what was received
    if(letter == 97)   // received an ascii "a"
    {
      digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
    }
    else if(letter == 115) // received an ascii "s"
    {
      digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
    }
  }
}

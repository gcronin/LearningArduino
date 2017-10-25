/* Nightlight Program
 *  Hardware:  light dependent resistor voltage divider in analog pin 0
 *  LED in pin 13
 *  
 *  Reads light value and turns on or off the LED.  
 *  You will need to calibrate... run the sketch and view the analog input 
 *  values in the light and dark.  Change the setpoint to be halfway between
 *  those two values.
 */

int setpoint = 200;

void setup() {
  // set pin 13 as an output
  pinMode(13, OUTPUT);
  // Setup a connection to the computer
  Serial.begin(9600);
}

void loop() {
  // read pin A0, store status in variable "lightValue"
  int lightValue = analogRead(A0);
  // Send the light value to the computer
  Serial.println(lightValue);
  if(lightValue > setpoint)  // if LDR is in dark, turn on LED
  {
    digitalWrite(13, HIGH);
  }
  else //otherwise turn on LED
  {
    digitalWrite(13, LOW);
  }
}

/*******************************************************
 * 
 * Simple program to read the sensor value from a 
 * MyoWare muscle sensor
 * This connects to the "Sig" pin on the muscle sensor
 * and prints the value to the serial monitor
 * 
*******************************************************/
  // declare variables:

int SensorValue = 0;  // used to read the sensor value
int SensorPin = 0;    // The analog pin we are reading the input from - connect this to the "Sig" pin on the myo sensor

void setup() 
{
    // open a serial port to print data to screen:
  Serial.begin (9600);

} // end setup

void loop() 
{
    // read the sensor value from the myo sensor:
    
  SensorValue = analogRead (SensorPin);

    // print the value to the serial monitor:
    
  Serial.print (SensorValue);
  Serial.println ("x");

} // end loop

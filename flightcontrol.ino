/**
 * Entry Arduino file for 00benallen's FlightControl program for a Homemade Drone
 */

#include <Servo.h>
Servo ESC1;   // create servo object to control the ESC
Servo ESC2;   // create servo object to control the ESC
Servo ESC3;   // create servo object to control the ESC
Servo ESC4;   // create servo object to control the ESC
int potValue; // value from the analog pin
void setup()
{
  ESC1.attach(47, 1000, 2000); // (pin, min pulse width, max pulse width in microseconds)
  ESC2.attach(49, 1000, 2000); // (pin, min pulse width, max pulse width in microseconds)
  ESC3.attach(51, 1000, 2000); // (pin, min pulse width, max pulse width in microseconds)
  ESC4.attach(53, 1000, 2000); // (pin, min pulse width, max pulse width in microseconds)
  ESC1.write(180);             // Send the signal to the ESC
  ESC2.write(180);             // Send the signal to the ESC
  ESC3.write(180);             // Send the signal to the ESC
  ESC4.write(180);             // Send the signal to the ESC
  delay(10000);
  ESC1.write(0); // Send the signal to the ESC
  ESC2.write(0); // Send the signal to the ESC
  ESC3.write(0); // Send the signal to the ESC
  ESC4.write(0); // Send the signal to the ESC
  delay(10000);
}
void loop()
{
  ESC1.write(20);
  ESC2.write(20);
  ESC3.write(20);
  ESC4.write(20);
}
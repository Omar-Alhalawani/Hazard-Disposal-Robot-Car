/*Omar Alhalawani and Yousef Alharbi
TEJ4M Summative
Code to control robot arm.
The code consists of controls for 4 servo motors.
*/

#include <Servo.h>
Servo base; // create servo object to control the base servo
Servo left; // create servo object to control the left servo
Servo right; // create servo object to control the right servo
Servo claw; // create servo object to control the claw servo
int basepot = A1; // analog pin used to connect the base potentiometer
int leftpot = A2; // analog pin used to connect the left potentiometer
int rightpot = A4; // analog pin used to connect the right potentiometer
int clawpot = A5; // analog pin used to connect the claw potentiometer
int baseval; // variable to read the value from the basepot pin
int leftval; // variable to read the value from the leftpot pin
int rightval; // variable to read the value from the rightpot pin
int clawval; // variable to read the value from the clawpot pin

void setup() {
base.attach(6); // attaches the servo on pin 6 to the base servo
left.attach(3); // attaches the servo on pin 3 to the left servo
right.attach(5); // attaches the servo on pin 5 to the right servo
claw.attach(9); // attaches the servo on pin 9 to the claw servo
}

void loop() {
baseval = analogRead(basepot); // reads the value of the
potentiometer (value between 0 and 1023)
baseval = map(baseval, 0, 1023, 0, 180); // scale it for use with the
servo (value between 0 and 180)
base.write(baseval); // sets the servo position according to
the scaled value
delay(15); // waits for the servo to get there
leftval = analogRead(leftpot); // reads the value of the

potentiometer (value between 0 and 1023)
leftval = map(leftval, 0, 1023, 0, 180); // scale it for use with the
servo (value between 0 and 180)
left.write(leftval); // sets the servo position according to
the scaled value
delay(15); // waits for the servo to get there
rightval = analogRead(rightpot); // reads the value of the

potentiometer (value between 0 and 1023)
rightval = map(rightval, 0, 1023, 0, 180); // scale it for use with the
servo (value between 0 and 180)
right.write(rightval); // sets the servo position according
to the scaled value
delay(15); // waits for the servo to get there
clawval = analogRead(clawpot); // reads the value of the

potentiometer (value between 0 and 1023)
clawval = map(clawval, 0, 1023, 0, 180); // scale it for use with the
servo (value between 0 and 180)
claw.write(clawval); // sets the servo position according to
the scaled value
delay(15); // waits for the servo to get there
}

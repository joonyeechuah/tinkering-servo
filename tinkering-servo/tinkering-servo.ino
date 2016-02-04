#include "TinkeringServo.h"

// attach the yellow servo connection
// to a PWM pin!
#define SERVO_PIN 9

Servo myServo;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(SERVO_PIN);
  myServo.write(0);
}

void loop() {
  // This is a for loop. It sweeps through
  // the values from 0 to 90, at increments
  // of 15. The "current" value is 
  // represented by i
  for (int i = 0; i <= 90; i = i + 15) {
    // Write the current value to the servo
    myServo.write(i);
    delay(500);
  }

  // This is a loop that starts at 90
  // and goes down to 0 at increments
  // of 15
  for (int i = 90; i >= 0; i = i - 15) {
    myServo.write(i);
    delay(500);
  }
}

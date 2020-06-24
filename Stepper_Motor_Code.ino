#include <Stepper.h>

const int StepsPerRevolution = 200;

Stepper myStepper (StepsPerRevolution, 8, 9, 10, 11);

int stepCount =0;

void setup()
{
}
  
void loop()
{
int sensorReading = analogRead (A0);

int motorSpeed = map(sensorReading, 0, 1023, 0, 100);
  
  if (motorSpeed > 0) {
    
   myStepper.setSpeed(motorSpeed);
   
   myStepper.step(StepsPerRevolution / 100);
  }
}

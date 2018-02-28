// This is working for the NeveRest motors
// The Portescap motor was just twitching, plan to swap motors and see if 
// it's a motor problem or a code problem
#include <Servo.h>
const byte ledPin = 4;
const byte interruptPin1 = 2;
const byte interruptPin2 = 3;
volatile int myCount = 0;
int motorSpeed = 100;
Servo myServo;
void setup() 
{
  pinMode (interruptPin1, INPUT_PULLUP);
  pinMode (interruptPin2, INPUT_PULLUP);
  attachInterrupt (digitalPinToInterrupt(interruptPin1), count1, RISING); 
  attachInterrupt (digitalPinToInterrupt(interruptPin2), count2, RISING); 
  myServo.attach (5);
  myServo.write (80);
  Serial.begin (9600);
}
void loop() 
{
  //Serial.println(myCount);
}
void count1()
{
  if (digitalRead(interruptPin2) == LOW )
  {
    myCount++;
    if (myCount > 250)
  {
    myServo.write (80);
  }
  } // end if forward
} // end count1
void count2()
{
  if (digitalRead(interruptPin1) == LOW )
  {
    myCount--;
    if (myCount < -250)
  {
    myServo.write (100);
  }
  } // end if reverse
} // end count2

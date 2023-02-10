// For arduino micro
#include "Keyboard.h"

const int buttonPin = 4; // input pin for pushbutton

void setup()
{
  // make the pushButton pin an input:
  pinMode(buttonPin, INPUT);
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop()
{

  // type out a message
  if (buttonPin == HIGH)
  {
    Keyboard.print("You pressed the button ");
  }
}

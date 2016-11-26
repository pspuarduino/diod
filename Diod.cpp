/*
  Morse.cpp - Library for using diod
*/

#include <Arduino.h> 
#include "Diod.h"
 
Diod::Diod(int pin, int mode, int state)
{
  pinMode(pin, mode);
  _pin = pin;
  _mode = mode;
  _state = state;
}
 
void Diod::on()
{
  digitalWrite(_pin, HIGH);
}
 
void Diod::off()
{
  digitalWrite(_pin, LOW);
}


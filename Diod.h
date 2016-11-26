/*
  Diod.h - Library for diod control
*/
#ifndef Diod_h
#define Diod_h

class Diod
{
  public:
    Diod(int pin, int mode, int state);
    void on();
    void off();
  private:
  	int _pin;
  	int _state;
  	int _mode;  
};

#endif


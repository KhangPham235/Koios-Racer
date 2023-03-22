#include "Racer.h"
#include "mbed.h"

Racer racer;
int main()
{
  while (1)
  {
    racer.buzzer.beep_on();
    ThisThread::sleep_for(1000ms);
    racer.buzzer.beep_off();
    ThisThread::sleep_for(1000ms);
  }
}
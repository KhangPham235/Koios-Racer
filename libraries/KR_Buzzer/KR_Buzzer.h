#ifndef KR_BUZZER_H
#define KR_BUZZER_H
#include "mbed.h"
#include "hwdef.h"
#define ON 1
#define OFF 0
class KR_Buzzer{
public:
    // constructor
    KR_Buzzer(){
        _buzzer = new DigitalOut(BUZZER_PIN);
    };

    void init();
    void beep_on();
    void beep_off();
    void beep_one_second();
    void toggle_beep();
    void set_duration(int duration);
private:
    int _duration;
    DigitalOut *_buzzer;
};

#endif
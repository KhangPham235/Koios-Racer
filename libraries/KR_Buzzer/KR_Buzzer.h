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
    void set_status(uint8_t value);
    void set_mode(uint8_t value);
    void beep_one_second();
    void toggle_beep();
    void set_duration(int duration);
    void enable();
    void disable();
    bool is_enable();
private:
    int _duration;
    DigitalOut *_buzzer;
    bool _is_enable = true;
};

#endif
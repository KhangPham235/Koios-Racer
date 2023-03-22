#include "KR_Buzzer.h"
#include "mbed.h"

void KR_Buzzer::beep_on(){
    _buzzer->write(ON);
}

void KR_Buzzer::beep_off(){
    _buzzer->write(OFF);
}

void KR_Buzzer::beep_one_second(){
    beep_on();
    ThisThread::sleep_for(1s);
    beep_off();
    ThisThread::sleep_for(1s);
}

void KR_Buzzer::toggle_beep(){
    *_buzzer = !*_buzzer;
}

void KR_Buzzer::set_duration(int duration){
    _duration = duration;
}
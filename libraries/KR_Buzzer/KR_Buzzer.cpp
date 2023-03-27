#include "KR_Buzzer.h"
#include "mbed.h"

void KR_Buzzer::beep_on(){
    if (!is_enable()){
        return;
    }
    _buzzer->write(ON);
}

void KR_Buzzer::beep_off(){
    if (!is_enable()){
        return;
    }
    _buzzer->write(OFF);
}

void KR_Buzzer::set_status(uint8_t value){
    if (value > 0){
        beep_on();
    }
    else{
        beep_off();
    }
}

void KR_Buzzer::set_mode(uint8_t value){
    if (value > 0){
        enable();
    }
    else{
        disable();
    }
}

void KR_Buzzer::beep_one_second(){
    if (!is_enable()){
        return;
    }
    beep_on();
    ThisThread::sleep_for(1s);
    beep_off();
    ThisThread::sleep_for(1s);
}

void KR_Buzzer::toggle_beep(){
    if (!is_enable()){
        return;
    }
    *_buzzer = !*_buzzer;
}

void KR_Buzzer::set_duration(int duration){
    _duration = duration;
}

void KR_Buzzer::enable(){
    _is_enable = true;
}

void KR_Buzzer::disable(){
    _is_enable = false;
}

bool KR_Buzzer::is_enable(){
    return _is_enable;
}
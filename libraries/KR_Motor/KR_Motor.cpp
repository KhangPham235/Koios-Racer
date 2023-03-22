#include "KR_Motor.h"
#include <mbed.h>

void KR_Motor::motor_init(){
    // motor stop at the beginning
    _motor_dir->write(BACKWARD_DIR);
    _motor_pwm->period_ms(10);
    _motor_pwm->write(0.0f);    // motor stop
};

void KR_Motor::set_speed(float percentage_speed){
    _motor_pwm->write(float(percentage_speed / 100.0f));
}

void KR_Motor::move_forward(){
    _motor_dir->write(FORWARD_DIR);
};

void KR_Motor::move_backward(){
    _motor_dir->write(BACKWARD_DIR);
};

void KR_Motor::stop(){
    _motor_pwm->write(0.0f);
}
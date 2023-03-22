#include "KR_Servo.h"
#include <mbed.h>
#include <stdint.h>

void KR_Servo::init(){
    _servo->period_ms(5);
    _servo->pulsewidth_us(0);
    _current_deg = 0;
}

void KR_Servo::write_pwm(uint16_t inputPwm){
    _servo->pulsewidth_us(inputPwm);
}

void KR_Servo::write_deg(float inputAngle){
    _current_deg = inputAngle;
    write_pwm(output_map(inputAngle));
}   

void KR_Servo::set_limit_pwm(uint16_t min_pwm, uint16_t max_pwm){
    _min_pwm = min_pwm;
    _max_pwm = max_pwm;
}

void KR_Servo::set_max_angle_deg(float max_angle){
    _max_angle = max_angle;
}

uint16_t KR_Servo::output_map(float inputAngle){
    float output = ((inputAngle - MIN_ANGLE)*(MAX_PWN - MIN_PWN))/(MAX_ANGLE - MIN_ANGLE) + MIN_PWN;
    return output;
}

void KR_Servo::sweep(uint16_t from, uint16_t to){
    for(uint16_t i = from; i<=to; i+=10){
        _servo->pulsewidth_us(i);
        ThisThread::sleep_for(50ms);
    }
}

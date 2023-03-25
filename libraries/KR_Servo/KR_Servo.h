#ifndef KR_SERVO_H
#define KR_SERVO_H
#include <mbed.h>
#include <stdint.h>
#include "hwdef.h"

#define MIN_PWN 500
#define MAX_PWN 2500
#define MIN_ANGLE 0     // degrees
#define MAX_ANGLE 135   // degrees

class KR_Servo{
public:
    // constructor
    KR_Servo(){
        _servo = new PwmOut(SERVO_PIN);
        init();
    }
    void init();

    // set max pwn and min pwm to servo
    void set_limit_pwm(uint16_t min_pwm , uint16_t max_pwm);
    void set_max_angle_deg(float max_angle);
    void write_pwm(uint16_t inputPwm);
    void write_deg(float inputAngle);
    int read();
    void sweep(uint16_t from, uint16_t to);
private:
    uint16_t _min_pwm = MIN_PWN;
    uint16_t _max_pwm = MAX_PWN;
    float _max_angle = 135.0f;
    float _current_deg;
    uint16_t output_map(float inputAngle);      // map input angle to pwm
    PwmOut *_servo;
};
#endif      // KR_SERVO_H_
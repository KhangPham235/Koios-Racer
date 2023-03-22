#ifndef KR_MOTOR_H
#define KR_MOTOR_H
#include "mbed.h"
#include <stdint.h>
#include "hwdef.h"

#define FORWARD_DIR true
#define BACKWARD_DIR false
class KR_Motor{
public:
    // contructor
    KR_Motor(){
        _motor_dir = new DigitalOut(M1_DIR);
        _motor_pwm = new PwmOut(M1_SPEED);
    }
    void motor_init();
    void set_speed(float percentage_speed);
    void move_forward();
    void move_backward();
    void stop();
private:
    DigitalOut *_motor_dir;
    PwmOut *_motor_pwm;
};

#endif  // _KR_MOTOR_H_
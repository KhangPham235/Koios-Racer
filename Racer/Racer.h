#ifndef RACER_H
#define RACER_H
#include "KR_Servo/KR_Servo.h"
#include "KR_Buzzer/KR_Buzzer.h"
#include "KR_Motor/KR_Motor.h"
#include "KR_Uart/KR_Uart.h"
#include "mbed.h"
class Racer{
public:
    Racer(void){
        //myout = new DigitalOut(ARDUINO_UNO_D1);
    };
    
    void forward();
    void backward();
    void steering_deg();
    void set_speed(uint8_t speed_percentage);
    void check_arming();
    // control Servo
    KR_Servo servo;

    // Control Motor
    KR_Motor motor;

    // control Buzzer
    KR_Buzzer buzzer;

    // serial port transfer data mavlinkS
    KR_Uart serial;
private:
};

#endif
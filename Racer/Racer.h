#ifndef RACER_H
#define RACER_H
#include "KR_Servo/KR_Servo.h"
#include "KR_Buzzer/KR_Buzzer.h"
#include "KR_Motor/KR_Motor.h"
#include "mbed.h"
class Racer{
public:
    Racer(void){
        //myout = new DigitalOut(ARDUINO_UNO_D1);
    };
    
    // control Servo
    KR_Servo servo;

    // Control Motor
    KR_Motor motor;

    // control Buzzer
    KR_Buzzer buzzer;
private:
};

#endif
#include "mbed.h"
#include "KR_Mavlink/protocol/mavlink.h"
#include "KR_Mavlink/mavlink_helpers.h"
#include "Racer.h"
#include "stdint.h"

void Racer::backward(){
    motor.move_backward();
}

void Racer::forward(){
    motor.move_forward();
}

void Racer::set_speed(uint8_t speed_percentage){
    motor.set_speed(speed_percentage);
}

void Racer::steering_deg(){

}

void Racer::check_arming(){

}

Racer racer;
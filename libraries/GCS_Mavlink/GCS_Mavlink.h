#ifndef GCS_MAVLINK_H
#define GCS_MAVLINK_H

#include "mbed.h"
#include "KR_Mavlink/protocol/mavlink.h"
#include "../../Racer/Racer.h"

extern Racer racer;

class GCS{
public:
    GCS(){
        led = new DigitalOut(LED1);
    };
    void update_recv();
    void handle_message(const mavlink_message_t *msg);
    DigitalOut *led;
private:
    mavlink_message_t msg;
    mavlink_status_t status;
};

#endif
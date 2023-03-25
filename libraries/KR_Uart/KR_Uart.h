#ifndef KR_UART_H
#define KR_UART_H

#include "mbed.h"
#include "hwdef.h"
#include "KR_Mavlink/protocol/mavlink.h"

#define MAX_LENGTH 255
#define BAUD_DEFAULT  9600
class KR_Uart{
public:
    KR_Uart(){
        _serial = new BufferedSerial(USBTX_PIN, USBRX_PIN);
        init();
    };

    void init();
    void send_debug(const uint8_t* msg);
    void send_mavlink(const mavlink_message_t* msg);
    void recv();
    void set_baud(uint16_t value);
    void call_back(void (*func)(void));
    BufferedSerial *_serial;    
private:
    uint8_t _data[MAX_LENGTH];
    uint16_t _baudrate = BAUD_DEFAULT;
};

#endif
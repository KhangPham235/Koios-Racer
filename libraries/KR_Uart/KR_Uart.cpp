#include "KR_Uart.h"

void KR_Uart::init(){
    _serial->set_baud(9600);
    _serial->set_format(8, BufferedSerial::None, 1);
}

void KR_Uart::send_debug(const uint8_t* msg){
    _serial->write(msg, sizeof(msg));

}

void KR_Uart::send_mavlink(const mavlink_message_t* msg){
    uint8_t len = mavlink_msg_to_send_buffer(_data, msg);
    _serial->write(_data, len);
}

void KR_Uart::recv(){
}

void KR_Uart::set_baud(uint16_t value){
    _serial->set_baud(value);
}
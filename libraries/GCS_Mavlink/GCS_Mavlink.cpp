#include "GCS_Mavlink.h"

void GCS::update_recv(){
    uint8_t one_byte_data_recv;
    while(1){
        if(racer.serial.recv_one_byte(&one_byte_data_recv)){
            if(mavlink_parse_char(0, one_byte_data_recv, &msg, &status)){
                handle_message(&msg);
            }
        }
    }
}

void GCS::handle_message(const mavlink_message_t *msg){
    switch(msg->msgid){
        case MAVLINK_MSG_ID_KR_LED_CONTROL:
        {
            mavlink_kr_led_control_t data;
            mavlink_msg_kr_led_control_decode(msg, &data);
            if (data.mode == KR_ENABLE){
                *led =  (data.status) > 0 ? 1 : 0;
            }
            break;
        }

        case MAVLINK_MSG_ID_KR_BUZZER_CONTROL:
        {
            mavlink_kr_buzzer_control_t data;
            mavlink_msg_kr_buzzer_control_decode(msg, &data);
            racer.buzzer.set_mode(data.mode);
            racer.buzzer.set_status(data.status);
        }
        default:
            break;
    }
}
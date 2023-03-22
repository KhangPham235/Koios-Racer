#ifndef HWDEF_H
#define HWDEF_H

#include "mbed.h"

#define BOARD_L298P_SHIELD
// Macros define pin

#ifdef BOARD_L298P_SHIELD
    // Board L298P Shield
    // SERVO PIN
    #define SERVO_PIN ARDUINO_UNO_D9

    // Buzzer
    #define BUZZER_PIN ARDUINO_UNO_D4

    // Motor
    #define M1_DIR ARDUINO_UNO_D12
    #define M2_DIR ARDUINO_UNO_D13
    #define M1_SPEED ARDUINO_UNO_D10
    #define M2_SPEED ARDUINO_UNO_D11

#endif  // BOARD_L298P_SHIELD
#endif  // HWDEF_H
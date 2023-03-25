/** @file
 *  @brief MAVLink comm protocol generated from protocol.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_PROTOCOL_H
#define MAVLINK_PROTOCOL_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_PROTOCOL.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_PROTOCOL_XML_HASH -7729218744433737249

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{23000, 111, 2, 2, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_PROTOCOL

// ENUM DEFINITIONS


/** @brief Led status. */
#ifndef HAVE_ENUM_LED_MODE
#define HAVE_ENUM_LED_MODE
typedef enum LED_MODE
{
   ENABLE_LED=0, /*  | */
   DISABLE_LED=1, /*  | */
   LED_MODE_ENUM_END=2, /*  | */
} LED_MODE;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_kr_led_control.h"

// base include



#if MAVLINK_PROTOCOL_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_KR_LED_CONTROL}
# define MAVLINK_MESSAGE_NAMES {{ "KR_LED_CONTROL", 23000 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_PROTOCOL_H

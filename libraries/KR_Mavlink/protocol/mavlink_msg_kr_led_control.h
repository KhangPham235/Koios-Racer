#pragma once
// MESSAGE KR_LED_CONTROL PACKING

#define MAVLINK_MSG_ID_KR_LED_CONTROL 23000


typedef struct __mavlink_kr_led_control_t {
 uint8_t mode; /*<  Enable or disable.*/
 uint8_t status; /*<  On or off.*/
} mavlink_kr_led_control_t;

#define MAVLINK_MSG_ID_KR_LED_CONTROL_LEN 2
#define MAVLINK_MSG_ID_KR_LED_CONTROL_MIN_LEN 2
#define MAVLINK_MSG_ID_23000_LEN 2
#define MAVLINK_MSG_ID_23000_MIN_LEN 2

#define MAVLINK_MSG_ID_KR_LED_CONTROL_CRC 111
#define MAVLINK_MSG_ID_23000_CRC 111



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_KR_LED_CONTROL { \
    23000, \
    "KR_LED_CONTROL", \
    2, \
    {  { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_kr_led_control_t, mode) }, \
         { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_kr_led_control_t, status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_KR_LED_CONTROL { \
    "KR_LED_CONTROL", \
    2, \
    {  { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_kr_led_control_t, mode) }, \
         { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_kr_led_control_t, status) }, \
         } \
}
#endif

/**
 * @brief Pack a kr_led_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mode  Enable or disable.
 * @param status  On or off.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_kr_led_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t mode, uint8_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KR_LED_CONTROL_LEN];
    _mav_put_uint8_t(buf, 0, mode);
    _mav_put_uint8_t(buf, 1, status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_KR_LED_CONTROL_LEN);
#else
    mavlink_kr_led_control_t packet;
    packet.mode = mode;
    packet.status = status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_KR_LED_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_KR_LED_CONTROL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_KR_LED_CONTROL_MIN_LEN, MAVLINK_MSG_ID_KR_LED_CONTROL_LEN, MAVLINK_MSG_ID_KR_LED_CONTROL_CRC);
}

/**
 * @brief Pack a kr_led_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mode  Enable or disable.
 * @param status  On or off.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_kr_led_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t mode,uint8_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KR_LED_CONTROL_LEN];
    _mav_put_uint8_t(buf, 0, mode);
    _mav_put_uint8_t(buf, 1, status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_KR_LED_CONTROL_LEN);
#else
    mavlink_kr_led_control_t packet;
    packet.mode = mode;
    packet.status = status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_KR_LED_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_KR_LED_CONTROL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_KR_LED_CONTROL_MIN_LEN, MAVLINK_MSG_ID_KR_LED_CONTROL_LEN, MAVLINK_MSG_ID_KR_LED_CONTROL_CRC);
}

/**
 * @brief Encode a kr_led_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param kr_led_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_kr_led_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_kr_led_control_t* kr_led_control)
{
    return mavlink_msg_kr_led_control_pack(system_id, component_id, msg, kr_led_control->mode, kr_led_control->status);
}

/**
 * @brief Encode a kr_led_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param kr_led_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_kr_led_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_kr_led_control_t* kr_led_control)
{
    return mavlink_msg_kr_led_control_pack_chan(system_id, component_id, chan, msg, kr_led_control->mode, kr_led_control->status);
}

/**
 * @brief Send a kr_led_control message
 * @param chan MAVLink channel to send the message
 *
 * @param mode  Enable or disable.
 * @param status  On or off.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_kr_led_control_send(mavlink_channel_t chan, uint8_t mode, uint8_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KR_LED_CONTROL_LEN];
    _mav_put_uint8_t(buf, 0, mode);
    _mav_put_uint8_t(buf, 1, status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KR_LED_CONTROL, buf, MAVLINK_MSG_ID_KR_LED_CONTROL_MIN_LEN, MAVLINK_MSG_ID_KR_LED_CONTROL_LEN, MAVLINK_MSG_ID_KR_LED_CONTROL_CRC);
#else
    mavlink_kr_led_control_t packet;
    packet.mode = mode;
    packet.status = status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KR_LED_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_KR_LED_CONTROL_MIN_LEN, MAVLINK_MSG_ID_KR_LED_CONTROL_LEN, MAVLINK_MSG_ID_KR_LED_CONTROL_CRC);
#endif
}

/**
 * @brief Send a kr_led_control message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_kr_led_control_send_struct(mavlink_channel_t chan, const mavlink_kr_led_control_t* kr_led_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_kr_led_control_send(chan, kr_led_control->mode, kr_led_control->status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KR_LED_CONTROL, (const char *)kr_led_control, MAVLINK_MSG_ID_KR_LED_CONTROL_MIN_LEN, MAVLINK_MSG_ID_KR_LED_CONTROL_LEN, MAVLINK_MSG_ID_KR_LED_CONTROL_CRC);
#endif
}

#if MAVLINK_MSG_ID_KR_LED_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_kr_led_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t mode, uint8_t status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, mode);
    _mav_put_uint8_t(buf, 1, status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KR_LED_CONTROL, buf, MAVLINK_MSG_ID_KR_LED_CONTROL_MIN_LEN, MAVLINK_MSG_ID_KR_LED_CONTROL_LEN, MAVLINK_MSG_ID_KR_LED_CONTROL_CRC);
#else
    mavlink_kr_led_control_t *packet = (mavlink_kr_led_control_t *)msgbuf;
    packet->mode = mode;
    packet->status = status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KR_LED_CONTROL, (const char *)packet, MAVLINK_MSG_ID_KR_LED_CONTROL_MIN_LEN, MAVLINK_MSG_ID_KR_LED_CONTROL_LEN, MAVLINK_MSG_ID_KR_LED_CONTROL_CRC);
#endif
}
#endif

#endif

// MESSAGE KR_LED_CONTROL UNPACKING


/**
 * @brief Get field mode from kr_led_control message
 *
 * @return  Enable or disable.
 */
static inline uint8_t mavlink_msg_kr_led_control_get_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field status from kr_led_control message
 *
 * @return  On or off.
 */
static inline uint8_t mavlink_msg_kr_led_control_get_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a kr_led_control message into a struct
 *
 * @param msg The message to decode
 * @param kr_led_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_kr_led_control_decode(const mavlink_message_t* msg, mavlink_kr_led_control_t* kr_led_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    kr_led_control->mode = mavlink_msg_kr_led_control_get_mode(msg);
    kr_led_control->status = mavlink_msg_kr_led_control_get_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_KR_LED_CONTROL_LEN? msg->len : MAVLINK_MSG_ID_KR_LED_CONTROL_LEN;
        memset(kr_led_control, 0, MAVLINK_MSG_ID_KR_LED_CONTROL_LEN);
    memcpy(kr_led_control, _MAV_PAYLOAD(msg), len);
#endif
}

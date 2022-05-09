#pragma once
// MESSAGE ARDU_TEMP PACKING

#define MAVLINK_MSG_ID_ARDU_TEMP 12000


typedef struct __mavlink_ardu_temp_t {
 float temp; /*<  Temperature with unit.*/
 uint8_t cnt; /*<  Counter*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
} mavlink_ardu_temp_t;

#define MAVLINK_MSG_ID_ARDU_TEMP_LEN 7
#define MAVLINK_MSG_ID_ARDU_TEMP_MIN_LEN 7
#define MAVLINK_MSG_ID_12000_LEN 7
#define MAVLINK_MSG_ID_12000_MIN_LEN 7

#define MAVLINK_MSG_ID_ARDU_TEMP_CRC 251
#define MAVLINK_MSG_ID_12000_CRC 251



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ARDU_TEMP { \
    12000, \
    "ARDU_TEMP", \
    4, \
    {  { "temp", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ardu_temp_t, temp) }, \
         { "cnt", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ardu_temp_t, cnt) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_ardu_temp_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_ardu_temp_t, target_component) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ARDU_TEMP { \
    "ARDU_TEMP", \
    4, \
    {  { "temp", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ardu_temp_t, temp) }, \
         { "cnt", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ardu_temp_t, cnt) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_ardu_temp_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_ardu_temp_t, target_component) }, \
         } \
}
#endif

/**
 * @brief Pack a ardu_temp message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param temp  Temperature with unit.
 * @param cnt  Counter
 * @param target_system  System ID
 * @param target_component  Component ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ardu_temp_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float temp, uint8_t cnt, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARDU_TEMP_LEN];
    _mav_put_float(buf, 0, temp);
    _mav_put_uint8_t(buf, 4, cnt);
    _mav_put_uint8_t(buf, 5, target_system);
    _mav_put_uint8_t(buf, 6, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ARDU_TEMP_LEN);
#else
    mavlink_ardu_temp_t packet;
    packet.temp = temp;
    packet.cnt = cnt;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ARDU_TEMP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ARDU_TEMP;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ARDU_TEMP_MIN_LEN, MAVLINK_MSG_ID_ARDU_TEMP_LEN, MAVLINK_MSG_ID_ARDU_TEMP_CRC);
}

/**
 * @brief Pack a ardu_temp message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param temp  Temperature with unit.
 * @param cnt  Counter
 * @param target_system  System ID
 * @param target_component  Component ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ardu_temp_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float temp,uint8_t cnt,uint8_t target_system,uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARDU_TEMP_LEN];
    _mav_put_float(buf, 0, temp);
    _mav_put_uint8_t(buf, 4, cnt);
    _mav_put_uint8_t(buf, 5, target_system);
    _mav_put_uint8_t(buf, 6, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ARDU_TEMP_LEN);
#else
    mavlink_ardu_temp_t packet;
    packet.temp = temp;
    packet.cnt = cnt;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ARDU_TEMP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ARDU_TEMP;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ARDU_TEMP_MIN_LEN, MAVLINK_MSG_ID_ARDU_TEMP_LEN, MAVLINK_MSG_ID_ARDU_TEMP_CRC);
}

/**
 * @brief Encode a ardu_temp struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ardu_temp C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ardu_temp_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ardu_temp_t* ardu_temp)
{
    return mavlink_msg_ardu_temp_pack(system_id, component_id, msg, ardu_temp->temp, ardu_temp->cnt, ardu_temp->target_system, ardu_temp->target_component);
}

/**
 * @brief Encode a ardu_temp struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ardu_temp C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ardu_temp_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ardu_temp_t* ardu_temp)
{
    return mavlink_msg_ardu_temp_pack_chan(system_id, component_id, chan, msg, ardu_temp->temp, ardu_temp->cnt, ardu_temp->target_system, ardu_temp->target_component);
}

/**
 * @brief Send a ardu_temp message
 * @param chan MAVLink channel to send the message
 *
 * @param temp  Temperature with unit.
 * @param cnt  Counter
 * @param target_system  System ID
 * @param target_component  Component ID
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ardu_temp_send(mavlink_channel_t chan, float temp, uint8_t cnt, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARDU_TEMP_LEN];
    _mav_put_float(buf, 0, temp);
    _mav_put_uint8_t(buf, 4, cnt);
    _mav_put_uint8_t(buf, 5, target_system);
    _mav_put_uint8_t(buf, 6, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_TEMP, buf, MAVLINK_MSG_ID_ARDU_TEMP_MIN_LEN, MAVLINK_MSG_ID_ARDU_TEMP_LEN, MAVLINK_MSG_ID_ARDU_TEMP_CRC);
#else
    mavlink_ardu_temp_t packet;
    packet.temp = temp;
    packet.cnt = cnt;
    packet.target_system = target_system;
    packet.target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_TEMP, (const char *)&packet, MAVLINK_MSG_ID_ARDU_TEMP_MIN_LEN, MAVLINK_MSG_ID_ARDU_TEMP_LEN, MAVLINK_MSG_ID_ARDU_TEMP_CRC);
#endif
}

/**
 * @brief Send a ardu_temp message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ardu_temp_send_struct(mavlink_channel_t chan, const mavlink_ardu_temp_t* ardu_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ardu_temp_send(chan, ardu_temp->temp, ardu_temp->cnt, ardu_temp->target_system, ardu_temp->target_component);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_TEMP, (const char *)ardu_temp, MAVLINK_MSG_ID_ARDU_TEMP_MIN_LEN, MAVLINK_MSG_ID_ARDU_TEMP_LEN, MAVLINK_MSG_ID_ARDU_TEMP_CRC);
#endif
}

#if MAVLINK_MSG_ID_ARDU_TEMP_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ardu_temp_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float temp, uint8_t cnt, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, temp);
    _mav_put_uint8_t(buf, 4, cnt);
    _mav_put_uint8_t(buf, 5, target_system);
    _mav_put_uint8_t(buf, 6, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_TEMP, buf, MAVLINK_MSG_ID_ARDU_TEMP_MIN_LEN, MAVLINK_MSG_ID_ARDU_TEMP_LEN, MAVLINK_MSG_ID_ARDU_TEMP_CRC);
#else
    mavlink_ardu_temp_t *packet = (mavlink_ardu_temp_t *)msgbuf;
    packet->temp = temp;
    packet->cnt = cnt;
    packet->target_system = target_system;
    packet->target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_TEMP, (const char *)packet, MAVLINK_MSG_ID_ARDU_TEMP_MIN_LEN, MAVLINK_MSG_ID_ARDU_TEMP_LEN, MAVLINK_MSG_ID_ARDU_TEMP_CRC);
#endif
}
#endif

#endif

// MESSAGE ARDU_TEMP UNPACKING


/**
 * @brief Get field temp from ardu_temp message
 *
 * @return  Temperature with unit.
 */
static inline float mavlink_msg_ardu_temp_get_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field cnt from ardu_temp message
 *
 * @return  Counter
 */
static inline uint8_t mavlink_msg_ardu_temp_get_cnt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field target_system from ardu_temp message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_ardu_temp_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field target_component from ardu_temp message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_ardu_temp_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Decode a ardu_temp message into a struct
 *
 * @param msg The message to decode
 * @param ardu_temp C-struct to decode the message contents into
 */
static inline void mavlink_msg_ardu_temp_decode(const mavlink_message_t* msg, mavlink_ardu_temp_t* ardu_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ardu_temp->temp = mavlink_msg_ardu_temp_get_temp(msg);
    ardu_temp->cnt = mavlink_msg_ardu_temp_get_cnt(msg);
    ardu_temp->target_system = mavlink_msg_ardu_temp_get_target_system(msg);
    ardu_temp->target_component = mavlink_msg_ardu_temp_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ARDU_TEMP_LEN? msg->len : MAVLINK_MSG_ID_ARDU_TEMP_LEN;
        memset(ardu_temp, 0, MAVLINK_MSG_ID_ARDU_TEMP_LEN);
    memcpy(ardu_temp, _MAV_PAYLOAD(msg), len);
#endif
}

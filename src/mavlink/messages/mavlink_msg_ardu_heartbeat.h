#pragma once
// MESSAGE ARDU_HEARTBEAT PACKING

#define MAVLINK_MSG_ID_ARDU_HEARTBEAT 12006


typedef struct __mavlink_ardu_heartbeat_t {
 uint16_t speed; /*<  Status.*/
 uint8_t status; /*<  Status.*/
 uint8_t cnt; /*<  Counter*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
} mavlink_ardu_heartbeat_t;

#define MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN 6
#define MAVLINK_MSG_ID_ARDU_HEARTBEAT_MIN_LEN 6
#define MAVLINK_MSG_ID_12006_LEN 6
#define MAVLINK_MSG_ID_12006_MIN_LEN 6

#define MAVLINK_MSG_ID_ARDU_HEARTBEAT_CRC 33
#define MAVLINK_MSG_ID_12006_CRC 33



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ARDU_HEARTBEAT { \
    12006, \
    "ARDU_HEARTBEAT", \
    5, \
    {  { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ardu_heartbeat_t, status) }, \
         { "speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_ardu_heartbeat_t, speed) }, \
         { "cnt", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_ardu_heartbeat_t, cnt) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ardu_heartbeat_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_ardu_heartbeat_t, target_component) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ARDU_HEARTBEAT { \
    "ARDU_HEARTBEAT", \
    5, \
    {  { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ardu_heartbeat_t, status) }, \
         { "speed", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_ardu_heartbeat_t, speed) }, \
         { "cnt", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_ardu_heartbeat_t, cnt) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ardu_heartbeat_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_ardu_heartbeat_t, target_component) }, \
         } \
}
#endif

/**
 * @brief Pack a ardu_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param status  Status.
 * @param speed  Status.
 * @param cnt  Counter
 * @param target_system  System ID
 * @param target_component  Component ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ardu_heartbeat_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t status, uint16_t speed, uint8_t cnt, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN];
    _mav_put_uint16_t(buf, 0, speed);
    _mav_put_uint8_t(buf, 2, status);
    _mav_put_uint8_t(buf, 3, cnt);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN);
#else
    mavlink_ardu_heartbeat_t packet;
    packet.speed = speed;
    packet.status = status;
    packet.cnt = cnt;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ARDU_HEARTBEAT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ARDU_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN, MAVLINK_MSG_ID_ARDU_HEARTBEAT_CRC);
}

/**
 * @brief Pack a ardu_heartbeat message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param status  Status.
 * @param speed  Status.
 * @param cnt  Counter
 * @param target_system  System ID
 * @param target_component  Component ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ardu_heartbeat_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t status,uint16_t speed,uint8_t cnt,uint8_t target_system,uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN];
    _mav_put_uint16_t(buf, 0, speed);
    _mav_put_uint8_t(buf, 2, status);
    _mav_put_uint8_t(buf, 3, cnt);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN);
#else
    mavlink_ardu_heartbeat_t packet;
    packet.speed = speed;
    packet.status = status;
    packet.cnt = cnt;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ARDU_HEARTBEAT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ARDU_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN, MAVLINK_MSG_ID_ARDU_HEARTBEAT_CRC);
}

/**
 * @brief Encode a ardu_heartbeat struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ardu_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ardu_heartbeat_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ardu_heartbeat_t* ardu_heartbeat)
{
    return mavlink_msg_ardu_heartbeat_pack(system_id, component_id, msg, ardu_heartbeat->status, ardu_heartbeat->speed, ardu_heartbeat->cnt, ardu_heartbeat->target_system, ardu_heartbeat->target_component);
}

/**
 * @brief Encode a ardu_heartbeat struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ardu_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ardu_heartbeat_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ardu_heartbeat_t* ardu_heartbeat)
{
    return mavlink_msg_ardu_heartbeat_pack_chan(system_id, component_id, chan, msg, ardu_heartbeat->status, ardu_heartbeat->speed, ardu_heartbeat->cnt, ardu_heartbeat->target_system, ardu_heartbeat->target_component);
}

/**
 * @brief Send a ardu_heartbeat message
 * @param chan MAVLink channel to send the message
 *
 * @param status  Status.
 * @param speed  Status.
 * @param cnt  Counter
 * @param target_system  System ID
 * @param target_component  Component ID
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ardu_heartbeat_send(mavlink_channel_t chan, uint8_t status, uint16_t speed, uint8_t cnt, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN];
    _mav_put_uint16_t(buf, 0, speed);
    _mav_put_uint8_t(buf, 2, status);
    _mav_put_uint8_t(buf, 3, cnt);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_HEARTBEAT, buf, MAVLINK_MSG_ID_ARDU_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN, MAVLINK_MSG_ID_ARDU_HEARTBEAT_CRC);
#else
    mavlink_ardu_heartbeat_t packet;
    packet.speed = speed;
    packet.status = status;
    packet.cnt = cnt;
    packet.target_system = target_system;
    packet.target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_HEARTBEAT, (const char *)&packet, MAVLINK_MSG_ID_ARDU_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN, MAVLINK_MSG_ID_ARDU_HEARTBEAT_CRC);
#endif
}

/**
 * @brief Send a ardu_heartbeat message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ardu_heartbeat_send_struct(mavlink_channel_t chan, const mavlink_ardu_heartbeat_t* ardu_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ardu_heartbeat_send(chan, ardu_heartbeat->status, ardu_heartbeat->speed, ardu_heartbeat->cnt, ardu_heartbeat->target_system, ardu_heartbeat->target_component);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_HEARTBEAT, (const char *)ardu_heartbeat, MAVLINK_MSG_ID_ARDU_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN, MAVLINK_MSG_ID_ARDU_HEARTBEAT_CRC);
#endif
}

#if MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ardu_heartbeat_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t status, uint16_t speed, uint8_t cnt, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, speed);
    _mav_put_uint8_t(buf, 2, status);
    _mav_put_uint8_t(buf, 3, cnt);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_HEARTBEAT, buf, MAVLINK_MSG_ID_ARDU_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN, MAVLINK_MSG_ID_ARDU_HEARTBEAT_CRC);
#else
    mavlink_ardu_heartbeat_t *packet = (mavlink_ardu_heartbeat_t *)msgbuf;
    packet->speed = speed;
    packet->status = status;
    packet->cnt = cnt;
    packet->target_system = target_system;
    packet->target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_HEARTBEAT, (const char *)packet, MAVLINK_MSG_ID_ARDU_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN, MAVLINK_MSG_ID_ARDU_HEARTBEAT_CRC);
#endif
}
#endif

#endif

// MESSAGE ARDU_HEARTBEAT UNPACKING


/**
 * @brief Get field status from ardu_heartbeat message
 *
 * @return  Status.
 */
static inline uint8_t mavlink_msg_ardu_heartbeat_get_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field speed from ardu_heartbeat message
 *
 * @return  Status.
 */
static inline uint16_t mavlink_msg_ardu_heartbeat_get_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field cnt from ardu_heartbeat message
 *
 * @return  Counter
 */
static inline uint8_t mavlink_msg_ardu_heartbeat_get_cnt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field target_system from ardu_heartbeat message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_ardu_heartbeat_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field target_component from ardu_heartbeat message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_ardu_heartbeat_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Decode a ardu_heartbeat message into a struct
 *
 * @param msg The message to decode
 * @param ardu_heartbeat C-struct to decode the message contents into
 */
static inline void mavlink_msg_ardu_heartbeat_decode(const mavlink_message_t* msg, mavlink_ardu_heartbeat_t* ardu_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ardu_heartbeat->speed = mavlink_msg_ardu_heartbeat_get_speed(msg);
    ardu_heartbeat->status = mavlink_msg_ardu_heartbeat_get_status(msg);
    ardu_heartbeat->cnt = mavlink_msg_ardu_heartbeat_get_cnt(msg);
    ardu_heartbeat->target_system = mavlink_msg_ardu_heartbeat_get_target_system(msg);
    ardu_heartbeat->target_component = mavlink_msg_ardu_heartbeat_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN? msg->len : MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN;
        memset(ardu_heartbeat, 0, MAVLINK_MSG_ID_ARDU_HEARTBEAT_LEN);
    memcpy(ardu_heartbeat, _MAV_PAYLOAD(msg), len);
#endif
}

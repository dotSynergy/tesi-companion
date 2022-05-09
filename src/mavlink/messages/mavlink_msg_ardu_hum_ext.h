#pragma once
// MESSAGE ARDU_HUM_EXT PACKING

#define MAVLINK_MSG_ID_ARDU_HUM_EXT 12003


typedef struct __mavlink_ardu_hum_ext_t {
 float hum; /*<  Humidity in percentage.*/
 uint8_t cnt; /*<  Counter*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
} mavlink_ardu_hum_ext_t;

#define MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN 7
#define MAVLINK_MSG_ID_ARDU_HUM_EXT_MIN_LEN 7
#define MAVLINK_MSG_ID_12003_LEN 7
#define MAVLINK_MSG_ID_12003_MIN_LEN 7

#define MAVLINK_MSG_ID_ARDU_HUM_EXT_CRC 241
#define MAVLINK_MSG_ID_12003_CRC 241



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ARDU_HUM_EXT { \
    12003, \
    "ARDU_HUM_EXT", \
    4, \
    {  { "hum", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ardu_hum_ext_t, hum) }, \
         { "cnt", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ardu_hum_ext_t, cnt) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_ardu_hum_ext_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_ardu_hum_ext_t, target_component) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ARDU_HUM_EXT { \
    "ARDU_HUM_EXT", \
    4, \
    {  { "hum", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ardu_hum_ext_t, hum) }, \
         { "cnt", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ardu_hum_ext_t, cnt) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_ardu_hum_ext_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_ardu_hum_ext_t, target_component) }, \
         } \
}
#endif

/**
 * @brief Pack a ardu_hum_ext message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param hum  Humidity in percentage.
 * @param cnt  Counter
 * @param target_system  System ID
 * @param target_component  Component ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ardu_hum_ext_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float hum, uint8_t cnt, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN];
    _mav_put_float(buf, 0, hum);
    _mav_put_uint8_t(buf, 4, cnt);
    _mav_put_uint8_t(buf, 5, target_system);
    _mav_put_uint8_t(buf, 6, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN);
#else
    mavlink_ardu_hum_ext_t packet;
    packet.hum = hum;
    packet.cnt = cnt;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ARDU_HUM_EXT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ARDU_HUM_EXT_MIN_LEN, MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN, MAVLINK_MSG_ID_ARDU_HUM_EXT_CRC);
}

/**
 * @brief Pack a ardu_hum_ext message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hum  Humidity in percentage.
 * @param cnt  Counter
 * @param target_system  System ID
 * @param target_component  Component ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ardu_hum_ext_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float hum,uint8_t cnt,uint8_t target_system,uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN];
    _mav_put_float(buf, 0, hum);
    _mav_put_uint8_t(buf, 4, cnt);
    _mav_put_uint8_t(buf, 5, target_system);
    _mav_put_uint8_t(buf, 6, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN);
#else
    mavlink_ardu_hum_ext_t packet;
    packet.hum = hum;
    packet.cnt = cnt;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ARDU_HUM_EXT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ARDU_HUM_EXT_MIN_LEN, MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN, MAVLINK_MSG_ID_ARDU_HUM_EXT_CRC);
}

/**
 * @brief Encode a ardu_hum_ext struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ardu_hum_ext C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ardu_hum_ext_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ardu_hum_ext_t* ardu_hum_ext)
{
    return mavlink_msg_ardu_hum_ext_pack(system_id, component_id, msg, ardu_hum_ext->hum, ardu_hum_ext->cnt, ardu_hum_ext->target_system, ardu_hum_ext->target_component);
}

/**
 * @brief Encode a ardu_hum_ext struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ardu_hum_ext C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ardu_hum_ext_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ardu_hum_ext_t* ardu_hum_ext)
{
    return mavlink_msg_ardu_hum_ext_pack_chan(system_id, component_id, chan, msg, ardu_hum_ext->hum, ardu_hum_ext->cnt, ardu_hum_ext->target_system, ardu_hum_ext->target_component);
}

/**
 * @brief Send a ardu_hum_ext message
 * @param chan MAVLink channel to send the message
 *
 * @param hum  Humidity in percentage.
 * @param cnt  Counter
 * @param target_system  System ID
 * @param target_component  Component ID
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ardu_hum_ext_send(mavlink_channel_t chan, float hum, uint8_t cnt, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN];
    _mav_put_float(buf, 0, hum);
    _mav_put_uint8_t(buf, 4, cnt);
    _mav_put_uint8_t(buf, 5, target_system);
    _mav_put_uint8_t(buf, 6, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_HUM_EXT, buf, MAVLINK_MSG_ID_ARDU_HUM_EXT_MIN_LEN, MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN, MAVLINK_MSG_ID_ARDU_HUM_EXT_CRC);
#else
    mavlink_ardu_hum_ext_t packet;
    packet.hum = hum;
    packet.cnt = cnt;
    packet.target_system = target_system;
    packet.target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_HUM_EXT, (const char *)&packet, MAVLINK_MSG_ID_ARDU_HUM_EXT_MIN_LEN, MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN, MAVLINK_MSG_ID_ARDU_HUM_EXT_CRC);
#endif
}

/**
 * @brief Send a ardu_hum_ext message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ardu_hum_ext_send_struct(mavlink_channel_t chan, const mavlink_ardu_hum_ext_t* ardu_hum_ext)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ardu_hum_ext_send(chan, ardu_hum_ext->hum, ardu_hum_ext->cnt, ardu_hum_ext->target_system, ardu_hum_ext->target_component);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_HUM_EXT, (const char *)ardu_hum_ext, MAVLINK_MSG_ID_ARDU_HUM_EXT_MIN_LEN, MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN, MAVLINK_MSG_ID_ARDU_HUM_EXT_CRC);
#endif
}

#if MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ardu_hum_ext_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float hum, uint8_t cnt, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, hum);
    _mav_put_uint8_t(buf, 4, cnt);
    _mav_put_uint8_t(buf, 5, target_system);
    _mav_put_uint8_t(buf, 6, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_HUM_EXT, buf, MAVLINK_MSG_ID_ARDU_HUM_EXT_MIN_LEN, MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN, MAVLINK_MSG_ID_ARDU_HUM_EXT_CRC);
#else
    mavlink_ardu_hum_ext_t *packet = (mavlink_ardu_hum_ext_t *)msgbuf;
    packet->hum = hum;
    packet->cnt = cnt;
    packet->target_system = target_system;
    packet->target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_HUM_EXT, (const char *)packet, MAVLINK_MSG_ID_ARDU_HUM_EXT_MIN_LEN, MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN, MAVLINK_MSG_ID_ARDU_HUM_EXT_CRC);
#endif
}
#endif

#endif

// MESSAGE ARDU_HUM_EXT UNPACKING


/**
 * @brief Get field hum from ardu_hum_ext message
 *
 * @return  Humidity in percentage.
 */
static inline float mavlink_msg_ardu_hum_ext_get_hum(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field cnt from ardu_hum_ext message
 *
 * @return  Counter
 */
static inline uint8_t mavlink_msg_ardu_hum_ext_get_cnt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field target_system from ardu_hum_ext message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_ardu_hum_ext_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field target_component from ardu_hum_ext message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_ardu_hum_ext_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Decode a ardu_hum_ext message into a struct
 *
 * @param msg The message to decode
 * @param ardu_hum_ext C-struct to decode the message contents into
 */
static inline void mavlink_msg_ardu_hum_ext_decode(const mavlink_message_t* msg, mavlink_ardu_hum_ext_t* ardu_hum_ext)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ardu_hum_ext->hum = mavlink_msg_ardu_hum_ext_get_hum(msg);
    ardu_hum_ext->cnt = mavlink_msg_ardu_hum_ext_get_cnt(msg);
    ardu_hum_ext->target_system = mavlink_msg_ardu_hum_ext_get_target_system(msg);
    ardu_hum_ext->target_component = mavlink_msg_ardu_hum_ext_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN? msg->len : MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN;
        memset(ardu_hum_ext, 0, MAVLINK_MSG_ID_ARDU_HUM_EXT_LEN);
    memcpy(ardu_hum_ext, _MAV_PAYLOAD(msg), len);
#endif
}

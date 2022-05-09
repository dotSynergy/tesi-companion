#pragma once
// MESSAGE ARDU_LIGHT PACKING

#define MAVLINK_MSG_ID_ARDU_LIGHT 12004


typedef struct __mavlink_ardu_light_t {
 uint16_t light; /*<  Photoresistor raw value.*/
 uint8_t cnt; /*<  Counter*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
} mavlink_ardu_light_t;

#define MAVLINK_MSG_ID_ARDU_LIGHT_LEN 5
#define MAVLINK_MSG_ID_ARDU_LIGHT_MIN_LEN 5
#define MAVLINK_MSG_ID_12004_LEN 5
#define MAVLINK_MSG_ID_12004_MIN_LEN 5

#define MAVLINK_MSG_ID_ARDU_LIGHT_CRC 144
#define MAVLINK_MSG_ID_12004_CRC 144



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ARDU_LIGHT { \
    12004, \
    "ARDU_LIGHT", \
    4, \
    {  { "light", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_ardu_light_t, light) }, \
         { "cnt", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ardu_light_t, cnt) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_ardu_light_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ardu_light_t, target_component) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ARDU_LIGHT { \
    "ARDU_LIGHT", \
    4, \
    {  { "light", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_ardu_light_t, light) }, \
         { "cnt", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ardu_light_t, cnt) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_ardu_light_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ardu_light_t, target_component) }, \
         } \
}
#endif

/**
 * @brief Pack a ardu_light message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param light  Photoresistor raw value.
 * @param cnt  Counter
 * @param target_system  System ID
 * @param target_component  Component ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ardu_light_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t light, uint8_t cnt, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARDU_LIGHT_LEN];
    _mav_put_uint16_t(buf, 0, light);
    _mav_put_uint8_t(buf, 2, cnt);
    _mav_put_uint8_t(buf, 3, target_system);
    _mav_put_uint8_t(buf, 4, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ARDU_LIGHT_LEN);
#else
    mavlink_ardu_light_t packet;
    packet.light = light;
    packet.cnt = cnt;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ARDU_LIGHT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ARDU_LIGHT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ARDU_LIGHT_MIN_LEN, MAVLINK_MSG_ID_ARDU_LIGHT_LEN, MAVLINK_MSG_ID_ARDU_LIGHT_CRC);
}

/**
 * @brief Pack a ardu_light message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param light  Photoresistor raw value.
 * @param cnt  Counter
 * @param target_system  System ID
 * @param target_component  Component ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ardu_light_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t light,uint8_t cnt,uint8_t target_system,uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARDU_LIGHT_LEN];
    _mav_put_uint16_t(buf, 0, light);
    _mav_put_uint8_t(buf, 2, cnt);
    _mav_put_uint8_t(buf, 3, target_system);
    _mav_put_uint8_t(buf, 4, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ARDU_LIGHT_LEN);
#else
    mavlink_ardu_light_t packet;
    packet.light = light;
    packet.cnt = cnt;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ARDU_LIGHT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ARDU_LIGHT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ARDU_LIGHT_MIN_LEN, MAVLINK_MSG_ID_ARDU_LIGHT_LEN, MAVLINK_MSG_ID_ARDU_LIGHT_CRC);
}

/**
 * @brief Encode a ardu_light struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ardu_light C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ardu_light_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ardu_light_t* ardu_light)
{
    return mavlink_msg_ardu_light_pack(system_id, component_id, msg, ardu_light->light, ardu_light->cnt, ardu_light->target_system, ardu_light->target_component);
}

/**
 * @brief Encode a ardu_light struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ardu_light C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ardu_light_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ardu_light_t* ardu_light)
{
    return mavlink_msg_ardu_light_pack_chan(system_id, component_id, chan, msg, ardu_light->light, ardu_light->cnt, ardu_light->target_system, ardu_light->target_component);
}

/**
 * @brief Send a ardu_light message
 * @param chan MAVLink channel to send the message
 *
 * @param light  Photoresistor raw value.
 * @param cnt  Counter
 * @param target_system  System ID
 * @param target_component  Component ID
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ardu_light_send(mavlink_channel_t chan, uint16_t light, uint8_t cnt, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARDU_LIGHT_LEN];
    _mav_put_uint16_t(buf, 0, light);
    _mav_put_uint8_t(buf, 2, cnt);
    _mav_put_uint8_t(buf, 3, target_system);
    _mav_put_uint8_t(buf, 4, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_LIGHT, buf, MAVLINK_MSG_ID_ARDU_LIGHT_MIN_LEN, MAVLINK_MSG_ID_ARDU_LIGHT_LEN, MAVLINK_MSG_ID_ARDU_LIGHT_CRC);
#else
    mavlink_ardu_light_t packet;
    packet.light = light;
    packet.cnt = cnt;
    packet.target_system = target_system;
    packet.target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_LIGHT, (const char *)&packet, MAVLINK_MSG_ID_ARDU_LIGHT_MIN_LEN, MAVLINK_MSG_ID_ARDU_LIGHT_LEN, MAVLINK_MSG_ID_ARDU_LIGHT_CRC);
#endif
}

/**
 * @brief Send a ardu_light message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ardu_light_send_struct(mavlink_channel_t chan, const mavlink_ardu_light_t* ardu_light)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ardu_light_send(chan, ardu_light->light, ardu_light->cnt, ardu_light->target_system, ardu_light->target_component);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_LIGHT, (const char *)ardu_light, MAVLINK_MSG_ID_ARDU_LIGHT_MIN_LEN, MAVLINK_MSG_ID_ARDU_LIGHT_LEN, MAVLINK_MSG_ID_ARDU_LIGHT_CRC);
#endif
}

#if MAVLINK_MSG_ID_ARDU_LIGHT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ardu_light_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t light, uint8_t cnt, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, light);
    _mav_put_uint8_t(buf, 2, cnt);
    _mav_put_uint8_t(buf, 3, target_system);
    _mav_put_uint8_t(buf, 4, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_LIGHT, buf, MAVLINK_MSG_ID_ARDU_LIGHT_MIN_LEN, MAVLINK_MSG_ID_ARDU_LIGHT_LEN, MAVLINK_MSG_ID_ARDU_LIGHT_CRC);
#else
    mavlink_ardu_light_t *packet = (mavlink_ardu_light_t *)msgbuf;
    packet->light = light;
    packet->cnt = cnt;
    packet->target_system = target_system;
    packet->target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_LIGHT, (const char *)packet, MAVLINK_MSG_ID_ARDU_LIGHT_MIN_LEN, MAVLINK_MSG_ID_ARDU_LIGHT_LEN, MAVLINK_MSG_ID_ARDU_LIGHT_CRC);
#endif
}
#endif

#endif

// MESSAGE ARDU_LIGHT UNPACKING


/**
 * @brief Get field light from ardu_light message
 *
 * @return  Photoresistor raw value.
 */
static inline uint16_t mavlink_msg_ardu_light_get_light(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field cnt from ardu_light message
 *
 * @return  Counter
 */
static inline uint8_t mavlink_msg_ardu_light_get_cnt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field target_system from ardu_light message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_ardu_light_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field target_component from ardu_light message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_ardu_light_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Decode a ardu_light message into a struct
 *
 * @param msg The message to decode
 * @param ardu_light C-struct to decode the message contents into
 */
static inline void mavlink_msg_ardu_light_decode(const mavlink_message_t* msg, mavlink_ardu_light_t* ardu_light)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ardu_light->light = mavlink_msg_ardu_light_get_light(msg);
    ardu_light->cnt = mavlink_msg_ardu_light_get_cnt(msg);
    ardu_light->target_system = mavlink_msg_ardu_light_get_target_system(msg);
    ardu_light->target_component = mavlink_msg_ardu_light_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ARDU_LIGHT_LEN? msg->len : MAVLINK_MSG_ID_ARDU_LIGHT_LEN;
        memset(ardu_light, 0, MAVLINK_MSG_ID_ARDU_LIGHT_LEN);
    memcpy(ardu_light, _MAV_PAYLOAD(msg), len);
#endif
}

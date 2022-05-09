#pragma once
// MESSAGE ARDU_AIR_PPM PACKING

#define MAVLINK_MSG_ID_ARDU_AIR_PPM 12005


typedef struct __mavlink_ardu_air_ppm_t {
 uint16_t ppm; /*<  Parts per million suspended in air.*/
 uint8_t cnt; /*<  Counter*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
} mavlink_ardu_air_ppm_t;

#define MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN 5
#define MAVLINK_MSG_ID_ARDU_AIR_PPM_MIN_LEN 5
#define MAVLINK_MSG_ID_12005_LEN 5
#define MAVLINK_MSG_ID_12005_MIN_LEN 5

#define MAVLINK_MSG_ID_ARDU_AIR_PPM_CRC 221
#define MAVLINK_MSG_ID_12005_CRC 221



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ARDU_AIR_PPM { \
    12005, \
    "ARDU_AIR_PPM", \
    4, \
    {  { "ppm", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_ardu_air_ppm_t, ppm) }, \
         { "cnt", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ardu_air_ppm_t, cnt) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_ardu_air_ppm_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ardu_air_ppm_t, target_component) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ARDU_AIR_PPM { \
    "ARDU_AIR_PPM", \
    4, \
    {  { "ppm", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_ardu_air_ppm_t, ppm) }, \
         { "cnt", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ardu_air_ppm_t, cnt) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_ardu_air_ppm_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ardu_air_ppm_t, target_component) }, \
         } \
}
#endif

/**
 * @brief Pack a ardu_air_ppm message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param ppm  Parts per million suspended in air.
 * @param cnt  Counter
 * @param target_system  System ID
 * @param target_component  Component ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ardu_air_ppm_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t ppm, uint8_t cnt, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN];
    _mav_put_uint16_t(buf, 0, ppm);
    _mav_put_uint8_t(buf, 2, cnt);
    _mav_put_uint8_t(buf, 3, target_system);
    _mav_put_uint8_t(buf, 4, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN);
#else
    mavlink_ardu_air_ppm_t packet;
    packet.ppm = ppm;
    packet.cnt = cnt;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ARDU_AIR_PPM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ARDU_AIR_PPM_MIN_LEN, MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN, MAVLINK_MSG_ID_ARDU_AIR_PPM_CRC);
}

/**
 * @brief Pack a ardu_air_ppm message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ppm  Parts per million suspended in air.
 * @param cnt  Counter
 * @param target_system  System ID
 * @param target_component  Component ID
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ardu_air_ppm_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t ppm,uint8_t cnt,uint8_t target_system,uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN];
    _mav_put_uint16_t(buf, 0, ppm);
    _mav_put_uint8_t(buf, 2, cnt);
    _mav_put_uint8_t(buf, 3, target_system);
    _mav_put_uint8_t(buf, 4, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN);
#else
    mavlink_ardu_air_ppm_t packet;
    packet.ppm = ppm;
    packet.cnt = cnt;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ARDU_AIR_PPM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ARDU_AIR_PPM_MIN_LEN, MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN, MAVLINK_MSG_ID_ARDU_AIR_PPM_CRC);
}

/**
 * @brief Encode a ardu_air_ppm struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ardu_air_ppm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ardu_air_ppm_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ardu_air_ppm_t* ardu_air_ppm)
{
    return mavlink_msg_ardu_air_ppm_pack(system_id, component_id, msg, ardu_air_ppm->ppm, ardu_air_ppm->cnt, ardu_air_ppm->target_system, ardu_air_ppm->target_component);
}

/**
 * @brief Encode a ardu_air_ppm struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ardu_air_ppm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ardu_air_ppm_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ardu_air_ppm_t* ardu_air_ppm)
{
    return mavlink_msg_ardu_air_ppm_pack_chan(system_id, component_id, chan, msg, ardu_air_ppm->ppm, ardu_air_ppm->cnt, ardu_air_ppm->target_system, ardu_air_ppm->target_component);
}

/**
 * @brief Send a ardu_air_ppm message
 * @param chan MAVLink channel to send the message
 *
 * @param ppm  Parts per million suspended in air.
 * @param cnt  Counter
 * @param target_system  System ID
 * @param target_component  Component ID
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ardu_air_ppm_send(mavlink_channel_t chan, uint16_t ppm, uint8_t cnt, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN];
    _mav_put_uint16_t(buf, 0, ppm);
    _mav_put_uint8_t(buf, 2, cnt);
    _mav_put_uint8_t(buf, 3, target_system);
    _mav_put_uint8_t(buf, 4, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_AIR_PPM, buf, MAVLINK_MSG_ID_ARDU_AIR_PPM_MIN_LEN, MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN, MAVLINK_MSG_ID_ARDU_AIR_PPM_CRC);
#else
    mavlink_ardu_air_ppm_t packet;
    packet.ppm = ppm;
    packet.cnt = cnt;
    packet.target_system = target_system;
    packet.target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_AIR_PPM, (const char *)&packet, MAVLINK_MSG_ID_ARDU_AIR_PPM_MIN_LEN, MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN, MAVLINK_MSG_ID_ARDU_AIR_PPM_CRC);
#endif
}

/**
 * @brief Send a ardu_air_ppm message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ardu_air_ppm_send_struct(mavlink_channel_t chan, const mavlink_ardu_air_ppm_t* ardu_air_ppm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ardu_air_ppm_send(chan, ardu_air_ppm->ppm, ardu_air_ppm->cnt, ardu_air_ppm->target_system, ardu_air_ppm->target_component);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_AIR_PPM, (const char *)ardu_air_ppm, MAVLINK_MSG_ID_ARDU_AIR_PPM_MIN_LEN, MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN, MAVLINK_MSG_ID_ARDU_AIR_PPM_CRC);
#endif
}

#if MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ardu_air_ppm_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t ppm, uint8_t cnt, uint8_t target_system, uint8_t target_component)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, ppm);
    _mav_put_uint8_t(buf, 2, cnt);
    _mav_put_uint8_t(buf, 3, target_system);
    _mav_put_uint8_t(buf, 4, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_AIR_PPM, buf, MAVLINK_MSG_ID_ARDU_AIR_PPM_MIN_LEN, MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN, MAVLINK_MSG_ID_ARDU_AIR_PPM_CRC);
#else
    mavlink_ardu_air_ppm_t *packet = (mavlink_ardu_air_ppm_t *)msgbuf;
    packet->ppm = ppm;
    packet->cnt = cnt;
    packet->target_system = target_system;
    packet->target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARDU_AIR_PPM, (const char *)packet, MAVLINK_MSG_ID_ARDU_AIR_PPM_MIN_LEN, MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN, MAVLINK_MSG_ID_ARDU_AIR_PPM_CRC);
#endif
}
#endif

#endif

// MESSAGE ARDU_AIR_PPM UNPACKING


/**
 * @brief Get field ppm from ardu_air_ppm message
 *
 * @return  Parts per million suspended in air.
 */
static inline uint16_t mavlink_msg_ardu_air_ppm_get_ppm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field cnt from ardu_air_ppm message
 *
 * @return  Counter
 */
static inline uint8_t mavlink_msg_ardu_air_ppm_get_cnt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field target_system from ardu_air_ppm message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_ardu_air_ppm_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field target_component from ardu_air_ppm message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_ardu_air_ppm_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Decode a ardu_air_ppm message into a struct
 *
 * @param msg The message to decode
 * @param ardu_air_ppm C-struct to decode the message contents into
 */
static inline void mavlink_msg_ardu_air_ppm_decode(const mavlink_message_t* msg, mavlink_ardu_air_ppm_t* ardu_air_ppm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ardu_air_ppm->ppm = mavlink_msg_ardu_air_ppm_get_ppm(msg);
    ardu_air_ppm->cnt = mavlink_msg_ardu_air_ppm_get_cnt(msg);
    ardu_air_ppm->target_system = mavlink_msg_ardu_air_ppm_get_target_system(msg);
    ardu_air_ppm->target_component = mavlink_msg_ardu_air_ppm_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN? msg->len : MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN;
        memset(ardu_air_ppm, 0, MAVLINK_MSG_ID_ARDU_AIR_PPM_LEN);
    memcpy(ardu_air_ppm, _MAV_PAYLOAD(msg), len);
#endif
}

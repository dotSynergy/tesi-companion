/** @file
 *  @brief MAVLink comm protocol generated from messages.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_MESSAGES_H
#define MAVLINK_MESSAGES_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_MESSAGES.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_HASH
#define MAVLINK_THIS_XML_HASH 4977312095235505476

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{12000, 251, 7, 7, 3, 5, 6}, {12001, 195, 7, 7, 3, 5, 6}, {12002, 144, 7, 7, 3, 5, 6}, {12003, 241, 7, 7, 3, 5, 6}, {12004, 144, 5, 5, 3, 3, 4}, {12005, 221, 5, 5, 3, 3, 4}, {12006, 33, 6, 6, 3, 4, 5}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_MESSAGES

// ENUM DEFINITIONS


/** @brief  */
#ifndef HAVE_ENUM_ARDU_STATUS
#define HAVE_ENUM_ARDU_STATUS
typedef enum ARDU_STATUS
{
   STATUS_OK=1, /*  | */
   STATUS_ERR=2, /*  | */
   STATUS_WARN=3, /*  | */
   ARDU_STATUS_ENUM_END=4, /*  | */
} ARDU_STATUS;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_ardu_temp.h"
#include "./mavlink_msg_ardu_temp_ext.h"
#include "./mavlink_msg_ardu_hum.h"
#include "./mavlink_msg_ardu_hum_ext.h"
#include "./mavlink_msg_ardu_light.h"
#include "./mavlink_msg_ardu_air_ppm.h"
#include "./mavlink_msg_ardu_heartbeat.h"

// base include


#undef MAVLINK_THIS_XML_HASH
#define MAVLINK_THIS_XML_HASH 4977312095235505476

#if MAVLINK_THIS_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_ARDU_TEMP, MAVLINK_MESSAGE_INFO_ARDU_TEMP_EXT, MAVLINK_MESSAGE_INFO_ARDU_HUM, MAVLINK_MESSAGE_INFO_ARDU_HUM_EXT, MAVLINK_MESSAGE_INFO_ARDU_LIGHT, MAVLINK_MESSAGE_INFO_ARDU_AIR_PPM, MAVLINK_MESSAGE_INFO_ARDU_HEARTBEAT}
# define MAVLINK_MESSAGE_NAMES {{ "ARDU_AIR_PPM", 12005 }, { "ARDU_HEARTBEAT", 12006 }, { "ARDU_HUM", 12002 }, { "ARDU_HUM_EXT", 12003 }, { "ARDU_LIGHT", 12004 }, { "ARDU_TEMP", 12000 }, { "ARDU_TEMP_EXT", 12001 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_MESSAGES_H

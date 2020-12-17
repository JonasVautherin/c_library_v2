#pragma once
// MESSAGE CURRENT_MOOD PACKING

#define MAVLINK_MSG_ID_CURRENT_MOOD 150


typedef struct __mavlink_current_mood_t {
 uint8_t mood; /*<  Mood*/
} mavlink_current_mood_t;

#define MAVLINK_MSG_ID_CURRENT_MOOD_LEN 1
#define MAVLINK_MSG_ID_CURRENT_MOOD_MIN_LEN 1
#define MAVLINK_MSG_ID_150_LEN 1
#define MAVLINK_MSG_ID_150_MIN_LEN 1

#define MAVLINK_MSG_ID_CURRENT_MOOD_CRC 98
#define MAVLINK_MSG_ID_150_CRC 98



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CURRENT_MOOD { \
    150, \
    "CURRENT_MOOD", \
    1, \
    {  { "mood", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_current_mood_t, mood) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CURRENT_MOOD { \
    "CURRENT_MOOD", \
    1, \
    {  { "mood", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_current_mood_t, mood) }, \
         } \
}
#endif

/**
 * @brief Pack a current_mood message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mood  Mood
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_current_mood_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t mood)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CURRENT_MOOD_LEN];
    _mav_put_uint8_t(buf, 0, mood);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CURRENT_MOOD_LEN);
#else
    mavlink_current_mood_t packet;
    packet.mood = mood;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CURRENT_MOOD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CURRENT_MOOD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CURRENT_MOOD_MIN_LEN, MAVLINK_MSG_ID_CURRENT_MOOD_LEN, MAVLINK_MSG_ID_CURRENT_MOOD_CRC);
}

/**
 * @brief Pack a current_mood message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mood  Mood
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_current_mood_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t mood)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CURRENT_MOOD_LEN];
    _mav_put_uint8_t(buf, 0, mood);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CURRENT_MOOD_LEN);
#else
    mavlink_current_mood_t packet;
    packet.mood = mood;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CURRENT_MOOD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CURRENT_MOOD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CURRENT_MOOD_MIN_LEN, MAVLINK_MSG_ID_CURRENT_MOOD_LEN, MAVLINK_MSG_ID_CURRENT_MOOD_CRC);
}

/**
 * @brief Encode a current_mood struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param current_mood C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_current_mood_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_current_mood_t* current_mood)
{
    return mavlink_msg_current_mood_pack(system_id, component_id, msg, current_mood->mood);
}

/**
 * @brief Encode a current_mood struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param current_mood C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_current_mood_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_current_mood_t* current_mood)
{
    return mavlink_msg_current_mood_pack_chan(system_id, component_id, chan, msg, current_mood->mood);
}

/**
 * @brief Send a current_mood message
 * @param chan MAVLink channel to send the message
 *
 * @param mood  Mood
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_current_mood_send(mavlink_channel_t chan, uint8_t mood)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CURRENT_MOOD_LEN];
    _mav_put_uint8_t(buf, 0, mood);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CURRENT_MOOD, buf, MAVLINK_MSG_ID_CURRENT_MOOD_MIN_LEN, MAVLINK_MSG_ID_CURRENT_MOOD_LEN, MAVLINK_MSG_ID_CURRENT_MOOD_CRC);
#else
    mavlink_current_mood_t packet;
    packet.mood = mood;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CURRENT_MOOD, (const char *)&packet, MAVLINK_MSG_ID_CURRENT_MOOD_MIN_LEN, MAVLINK_MSG_ID_CURRENT_MOOD_LEN, MAVLINK_MSG_ID_CURRENT_MOOD_CRC);
#endif
}

/**
 * @brief Send a current_mood message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_current_mood_send_struct(mavlink_channel_t chan, const mavlink_current_mood_t* current_mood)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_current_mood_send(chan, current_mood->mood);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CURRENT_MOOD, (const char *)current_mood, MAVLINK_MSG_ID_CURRENT_MOOD_MIN_LEN, MAVLINK_MSG_ID_CURRENT_MOOD_LEN, MAVLINK_MSG_ID_CURRENT_MOOD_CRC);
#endif
}

#if MAVLINK_MSG_ID_CURRENT_MOOD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_current_mood_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t mood)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, mood);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CURRENT_MOOD, buf, MAVLINK_MSG_ID_CURRENT_MOOD_MIN_LEN, MAVLINK_MSG_ID_CURRENT_MOOD_LEN, MAVLINK_MSG_ID_CURRENT_MOOD_CRC);
#else
    mavlink_current_mood_t *packet = (mavlink_current_mood_t *)msgbuf;
    packet->mood = mood;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CURRENT_MOOD, (const char *)packet, MAVLINK_MSG_ID_CURRENT_MOOD_MIN_LEN, MAVLINK_MSG_ID_CURRENT_MOOD_LEN, MAVLINK_MSG_ID_CURRENT_MOOD_CRC);
#endif
}
#endif

#endif

// MESSAGE CURRENT_MOOD UNPACKING


/**
 * @brief Get field mood from current_mood message
 *
 * @return  Mood
 */
static inline uint8_t mavlink_msg_current_mood_get_mood(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a current_mood message into a struct
 *
 * @param msg The message to decode
 * @param current_mood C-struct to decode the message contents into
 */
static inline void mavlink_msg_current_mood_decode(const mavlink_message_t* msg, mavlink_current_mood_t* current_mood)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    current_mood->mood = mavlink_msg_current_mood_get_mood(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CURRENT_MOOD_LEN? msg->len : MAVLINK_MSG_ID_CURRENT_MOOD_LEN;
        memset(current_mood, 0, MAVLINK_MSG_ID_CURRENT_MOOD_LEN);
    memcpy(current_mood, _MAV_PAYLOAD(msg), len);
#endif
}

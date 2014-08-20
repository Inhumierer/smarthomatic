/*
* This file is part of smarthomatic, http://www.smarthomatic.org.
* Copyright (c) 2013..2014 Uwe Freese
*
* smarthomatic is free software: you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation, either version 3 of the License, or (at your
* option) any later version.
*
* smarthomatic is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
* Public License for more details.
*
* You should have received a copy of the GNU General Public License along
* with smarthomatic. If not, see <http://www.gnu.org/licenses/>.
*
* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
* ! WARNING: This file is generated by the SHC EEPROM editor and should !
* ! never be modified manually.                                         !
* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/

#ifndef _MSGGRP_WEATHER_H
#define _MSGGRP_WEATHER_H

#include "packet_header.h"
#include "packet_headerext_common.h"
#include "packet_headerext_ackstatus.h"
#include "packet_headerext_ack.h"
#include "packet_headerext_status.h"
#include "packet_headerext_setget.h"
#include "packet_headerext_set.h"
#include "packet_headerext_get.h"
#include "e2p_access.h"

// Message Group "weather"
// =======================
// MessageGroupID: 10
// Description: This message group contains messages for weather data.

// ENUM for MessageIDs of this MessageGroup
typedef enum {
  MESSAGEID_WEATHER_TEMPERATURE = 1,
  MESSAGEID_WEATHER_HUMIDITYTEMPERATURE = 2,
  MESSAGEID_WEATHER_BAROMETRICPRESSURETEMPERATURE = 3,
  MESSAGEID_WEATHER_OWTEMPERATURE = 4
} WEATHER_MessageIDEnum;


// Message "weather_temperature"
// -----------------------------
// MessageGroupID: 10
// MessageID: 1
// Possible MessageTypes: Get, Status, AckStatus
// Validity: test
// Length w/o Header + HeaderExtension: 16 bits
// Data fields: Temperature
// Description: This is a message containing temperature only.

// Function to initialize header for the MessageType "Get".
static inline void pkg_header_init_weather_temperature_get(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(0);
  pkg_headerext_get_set_messagegroupid(10);
  pkg_headerext_get_set_messageid(1);
  __HEADEROFFSETBITS = 95;
  __PACKETSIZEBYTES = 16;
  __MESSAGETYPE = 0;
}

// Function to initialize header for the MessageType "Status".
static inline void pkg_header_init_weather_temperature_status(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(8);
  pkg_headerext_status_set_messagegroupid(10);
  pkg_headerext_status_set_messageid(1);
  __HEADEROFFSETBITS = 83;
  __PACKETSIZEBYTES = 16;
  __MESSAGETYPE = 8;
}

// Function to initialize header for the MessageType "AckStatus".
static inline void pkg_header_init_weather_temperature_ackstatus(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(10);
  pkg_headerext_ackstatus_set_messagegroupid(10);
  pkg_headerext_ackstatus_set_messageid(1);
  __HEADEROFFSETBITS = 120;
  __PACKETSIZEBYTES = 32;
  __MESSAGETYPE = 10;
}

// Temperature (IntValue)
// Description: temperature [1/100 degree celsius], -50°C = -5000, 50°C = 5000

// Set Temperature (IntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, length bits 16, min val -32768, max val 32767
static inline void msg_weather_temperature_set_temperature(int32_t val)
{
  array_write_IntValue(((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, 16, val, bufx);
}

// Get Temperature (IntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, length bits 16, min val -32768, max val 32767
static inline int32_t msg_weather_temperature_get_temperature(void)
{
  return array_read_IntValue32(((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, 16, -32768, 32767, bufx);
}


// Message "weather_humiditytemperature"
// -------------------------------------
// MessageGroupID: 10
// MessageID: 2
// Possible MessageTypes: Get, Status, AckStatus
// Validity: test
// Length w/o Header + HeaderExtension: 26 bits
// Data fields: Humidity, Temperature
// Description: This is a message containing humidity and temperature.

// Function to initialize header for the MessageType "Get".
static inline void pkg_header_init_weather_humiditytemperature_get(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(0);
  pkg_headerext_get_set_messagegroupid(10);
  pkg_headerext_get_set_messageid(2);
  __HEADEROFFSETBITS = 95;
  __PACKETSIZEBYTES = 16;
  __MESSAGETYPE = 0;
}

// Function to initialize header for the MessageType "Status".
static inline void pkg_header_init_weather_humiditytemperature_status(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(8);
  pkg_headerext_status_set_messagegroupid(10);
  pkg_headerext_status_set_messageid(2);
  __HEADEROFFSETBITS = 83;
  __PACKETSIZEBYTES = 16;
  __MESSAGETYPE = 8;
}

// Function to initialize header for the MessageType "AckStatus".
static inline void pkg_header_init_weather_humiditytemperature_ackstatus(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(10);
  pkg_headerext_ackstatus_set_messagegroupid(10);
  pkg_headerext_ackstatus_set_messageid(2);
  __HEADEROFFSETBITS = 120;
  __PACKETSIZEBYTES = 32;
  __MESSAGETYPE = 10;
}

// Humidity (UIntValue)
// Description: relative humidity permill, 0..1000 (other values not defined)

// Set Humidity (UIntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, length bits 10, min val 0, max val 1000
static inline void msg_weather_humiditytemperature_set_humidity(uint32_t val)
{
  array_write_UIntValue(((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, 10, val, bufx);
}

// Get Humidity (UIntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, length bits 10, min val 0, max val 1000
static inline uint32_t msg_weather_humiditytemperature_get_humidity(void)
{
  return array_read_UIntValue32(((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, 10, 0, 1000, bufx);
}

// Temperature (IntValue)
// Description: temperature [1/100 degree celsius], -50°C = -5000, 50°C = 5000

// Set Temperature (IntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 10) / 8, ((uint16_t)__HEADEROFFSETBITS + 10) % 8, length bits 16, min val -32768, max val 32767
static inline void msg_weather_humiditytemperature_set_temperature(int32_t val)
{
  array_write_IntValue(((uint16_t)__HEADEROFFSETBITS + 10) / 8, ((uint16_t)__HEADEROFFSETBITS + 10) % 8, 16, val, bufx);
}

// Get Temperature (IntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 10) / 8, ((uint16_t)__HEADEROFFSETBITS + 10) % 8, length bits 16, min val -32768, max val 32767
static inline int32_t msg_weather_humiditytemperature_get_temperature(void)
{
  return array_read_IntValue32(((uint16_t)__HEADEROFFSETBITS + 10) / 8, ((uint16_t)__HEADEROFFSETBITS + 10) % 8, 16, -32768, 32767, bufx);
}


// Message "weather_barometricpressuretemperature"
// -----------------------------------------------
// MessageGroupID: 10
// MessageID: 3
// Possible MessageTypes: Get, Status, AckStatus
// Validity: test
// Length w/o Header + HeaderExtension: 33 bits
// Data fields: BarometricPressure, Temperature
// Description: This is a message containing barometric pressure and temperature.

// Function to initialize header for the MessageType "Get".
static inline void pkg_header_init_weather_barometricpressuretemperature_get(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(0);
  pkg_headerext_get_set_messagegroupid(10);
  pkg_headerext_get_set_messageid(3);
  __HEADEROFFSETBITS = 95;
  __PACKETSIZEBYTES = 16;
  __MESSAGETYPE = 0;
}

// Function to initialize header for the MessageType "Status".
static inline void pkg_header_init_weather_barometricpressuretemperature_status(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(8);
  pkg_headerext_status_set_messagegroupid(10);
  pkg_headerext_status_set_messageid(3);
  __HEADEROFFSETBITS = 83;
  __PACKETSIZEBYTES = 16;
  __MESSAGETYPE = 8;
}

// Function to initialize header for the MessageType "AckStatus".
static inline void pkg_header_init_weather_barometricpressuretemperature_ackstatus(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(10);
  pkg_headerext_ackstatus_set_messagegroupid(10);
  pkg_headerext_ackstatus_set_messageid(3);
  __HEADEROFFSETBITS = 120;
  __PACKETSIZEBYTES = 32;
  __MESSAGETYPE = 10;
}

// BarometricPressure (UIntValue)
// Description: barometric pressure in pascal

// Set BarometricPressure (UIntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, length bits 17, min val 0, max val 131071
static inline void msg_weather_barometricpressuretemperature_set_barometricpressure(uint32_t val)
{
  array_write_UIntValue(((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, 17, val, bufx);
}

// Get BarometricPressure (UIntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, length bits 17, min val 0, max val 131071
static inline uint32_t msg_weather_barometricpressuretemperature_get_barometricpressure(void)
{
  return array_read_UIntValue32(((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, 17, 0, 131071, bufx);
}

// Temperature (IntValue)
// Description: temperature [1/100 degree celsius], -50°C = -5000, 50°C = 5000

// Set Temperature (IntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 17) / 8, ((uint16_t)__HEADEROFFSETBITS + 17) % 8, length bits 16, min val -32768, max val 32767
static inline void msg_weather_barometricpressuretemperature_set_temperature(int32_t val)
{
  array_write_IntValue(((uint16_t)__HEADEROFFSETBITS + 17) / 8, ((uint16_t)__HEADEROFFSETBITS + 17) % 8, 16, val, bufx);
}

// Get Temperature (IntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 17) / 8, ((uint16_t)__HEADEROFFSETBITS + 17) % 8, length bits 16, min val -32768, max val 32767
static inline int32_t msg_weather_barometricpressuretemperature_get_temperature(void)
{
  return array_read_IntValue32(((uint16_t)__HEADEROFFSETBITS + 17) / 8, ((uint16_t)__HEADEROFFSETBITS + 17) % 8, 16, -32768, 32767, bufx);
}


// Message "weather_owtemperature"
// -------------------------------
// MessageGroupID: 10
// MessageID: 4
// Possible MessageTypes: Get, Status, AckStatus
// Validity: test
// Length w/o Header + HeaderExtension: 80 bits
// Data fields: Temperature, Serial
// Description: This is a message containing temperature read from Onewire DS18x20.

// Function to initialize header for the MessageType "Get".
static inline void pkg_header_init_weather_owtemperature_get(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(0);
  pkg_headerext_get_set_messagegroupid(10);
  pkg_headerext_get_set_messageid(4);
  __HEADEROFFSETBITS = 95;
  __PACKETSIZEBYTES = 16;
  __MESSAGETYPE = 0;
}

// Function to initialize header for the MessageType "Status".
static inline void pkg_header_init_weather_owtemperature_status(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(8);
  pkg_headerext_status_set_messagegroupid(10);
  pkg_headerext_status_set_messageid(4);
  __HEADEROFFSETBITS = 83;
  __PACKETSIZEBYTES = 32;
  __MESSAGETYPE = 8;
}

// Function to initialize header for the MessageType "AckStatus".
static inline void pkg_header_init_weather_owtemperature_ackstatus(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(10);
  pkg_headerext_ackstatus_set_messagegroupid(10);
  pkg_headerext_ackstatus_set_messageid(4);
  __HEADEROFFSETBITS = 120;
  __PACKETSIZEBYTES = 32;
  __MESSAGETYPE = 10;
}

// Temperature (IntValue)
// Description: temperature [1/100 degree celsius], -50°C = -5000, 50°C = 5000

// Set Temperature (IntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, length bits 16, min val -32768, max val 32767
static inline void msg_weather_owtemperature_set_temperature(int32_t val)
{
  array_write_IntValue(((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, 16, val, bufx);
}

// Get Temperature (IntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, length bits 16, min val -32768, max val 32767
static inline int32_t msg_weather_owtemperature_get_temperature(void)
{
  return array_read_IntValue32(((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, 16, -32768, 32767, bufx);
}

// Serial (ByteArray)
// Description: serial number of the ow device

// Set Serial (ByteArray)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 16) / 8, ((uint16_t)__HEADEROFFSETBITS + 16) % 8, length bytes 8
static inline void msg_weather_owtemperature_set_serial(array * val)
{
  array_write_ByteArray(((uint16_t)__HEADEROFFSETBITS + 16) / 8, ((uint16_t)__HEADEROFFSETBITS + 16) % 8, 8, val, bufx);
}

#endif /* _MSGGRP_WEATHER_H */

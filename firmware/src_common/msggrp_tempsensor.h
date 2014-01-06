/*
* This file is part of smarthomatic, http://www.smarthomatic.org.
* Copyright (c) 2013 Uwe Freese
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

#include "packet_header.h"
#include "packet_headerext_common.h"
#include "packet_headerext_ackstatus.h"
#include "packet_headerext_ack.h"
#include "packet_headerext_status.h"
#include "packet_headerext_setget.h"
#include "packet_headerext_set.h"
#include "packet_headerext_get.h"
#include "e2p_access.h"

// Message Group "tempsensor"
// ==========================
// MessageGroupID: 10
// Description: This message group contains messages for a device that can measure temperature and humidity as well as a brightness value.

// ENUM for MessageIDs of this MessageGroup
typedef enum {
  MESSAGEID_TEMPSENSOR_TEMPHUMBRISTATUS = 1
} TEMPSENSOR_MessageIDEnum;


// Message "tempsensor_temphumbristatus"
// -------------------------------------
// MessageGroupID: 10
// MessageID: 1
// Possible MessageTypes: Get, Status, AckStatus
// Validity: test
// Length w/o Header + HeaderExtension: 33 bits
// Data fields: Temperature, Humidity, Brightness
// Description: This is a message containing temperature, humidity and brightness.

// Function to initialize header for the MessageType "Get".
static inline void pkg_header_init_tempsensor_temphumbristatus_get(void)
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
static inline void pkg_header_init_tempsensor_temphumbristatus_status(void)
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
static inline void pkg_header_init_tempsensor_temphumbristatus_ackstatus(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(10);
  pkg_headerext_ackstatus_set_messagegroupid(10);
  pkg_headerext_ackstatus_set_messageid(1);
  __HEADEROFFSETBITS = 120;
  __PACKETSIZEBYTES = 32;
  __MESSAGETYPE = 10;
}

// Set Temperature (IntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, length bits 16, min val -32768, max val 32767
static inline void msg_tempsensor_temphumbristatus_set_temperature(int32_t val)
{
  array_write_IntValue(((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, 16, val, bufx);
}

// Get Temperature (IntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, length bits 16, min val -32768, max val 32767
static inline int32_t msg_tempsensor_temphumbristatus_get_temperature(void)
{
  return array_read_IntValue32(((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, 16, -32768, 32767, bufx);
}

// Set Humidity (UIntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 16) / 8, ((uint16_t)__HEADEROFFSETBITS + 16) % 8, length bits 10, min val 0, max val 1000
static inline void msg_tempsensor_temphumbristatus_set_humidity(uint32_t val)
{
  array_write_UIntValue(((uint16_t)__HEADEROFFSETBITS + 16) / 8, ((uint16_t)__HEADEROFFSETBITS + 16) % 8, 10, val, bufx);
}

// Get Humidity (UIntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 16) / 8, ((uint16_t)__HEADEROFFSETBITS + 16) % 8, length bits 10, min val 0, max val 1000
static inline uint32_t msg_tempsensor_temphumbristatus_get_humidity(void)
{
  return array_read_UIntValue32(((uint16_t)__HEADEROFFSETBITS + 16) / 8, ((uint16_t)__HEADEROFFSETBITS + 16) % 8, 10, 0, 1000, bufx);
}

// Set Brightness (UIntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 26) / 8, ((uint16_t)__HEADEROFFSETBITS + 26) % 8, length bits 7, min val 0, max val 100
static inline void msg_tempsensor_temphumbristatus_set_brightness(uint32_t val)
{
  array_write_UIntValue(((uint16_t)__HEADEROFFSETBITS + 26) / 8, ((uint16_t)__HEADEROFFSETBITS + 26) % 8, 7, val, bufx);
}

// Get Brightness (UIntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 26) / 8, ((uint16_t)__HEADEROFFSETBITS + 26) % 8, length bits 7, min val 0, max val 100
static inline uint32_t msg_tempsensor_temphumbristatus_get_brightness(void)
{
  return array_read_UIntValue32(((uint16_t)__HEADEROFFSETBITS + 26) / 8, ((uint16_t)__HEADEROFFSETBITS + 26) % 8, 7, 0, 100, bufx);
}

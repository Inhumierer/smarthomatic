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

// Message Group "generic"
// =======================
// MessageGroupID: 0
// Description: This group contains messages useful for different devices.

// ENUM for MessageIDs of this MessageGroup
typedef enum {
  MESSAGEID_GENERIC_VERSION = 1,
  MESSAGEID_GENERIC_BATTERYSTATUS = 5
} GENERIC_MessageIDEnum;


// Message "generic_version"
// -------------------------
// MessageGroupID: 0
// MessageID: 1
// Possible MessageTypes: Get, Status, AckStatus
// Validity: test
// Length w/o Header + HeaderExtension: 56 bits
// Data fields: Major, Minor, Patch, GitHash
// Description: Reports the current firmware version. Version information is only available when set in source code, which is usually only done for official builds by the build robot.

// Function to initialize header for the MessageType "Get".
static inline void pkg_header_init_generic_version_get(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(0);
  pkg_headerext_get_set_messagegroupid(0);
  pkg_headerext_get_set_messageid(1);
  __HEADEROFFSETBITS = 95;
  __PACKETSIZEBYTES = 16;
  __MESSAGETYPE = 0;
}

// Function to initialize header for the MessageType "Status".
static inline void pkg_header_init_generic_version_status(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(8);
  pkg_headerext_status_set_messagegroupid(0);
  pkg_headerext_status_set_messageid(1);
  __HEADEROFFSETBITS = 83;
  __PACKETSIZEBYTES = 32;
  __MESSAGETYPE = 8;
}

// Function to initialize header for the MessageType "AckStatus".
static inline void pkg_header_init_generic_version_ackstatus(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(10);
  pkg_headerext_ackstatus_set_messagegroupid(0);
  pkg_headerext_ackstatus_set_messageid(1);
  __HEADEROFFSETBITS = 120;
  __PACKETSIZEBYTES = 32;
  __MESSAGETYPE = 10;
}

// Set Major (UIntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, length bits 8, min val 0, max val 255
static inline void msg_generic_version_set_major(uint32_t val)
{
  array_write_UIntValue(((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, 8, val, bufx);
}

// Get Major (UIntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, length bits 8, min val 0, max val 255
static inline uint32_t msg_generic_version_get_major(void)
{
  return array_read_UIntValue32(((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, 8, 0, 255, bufx);
}

// Set Minor (UIntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 8) / 8, ((uint16_t)__HEADEROFFSETBITS + 8) % 8, length bits 8, min val 0, max val 255
static inline void msg_generic_version_set_minor(uint32_t val)
{
  array_write_UIntValue(((uint16_t)__HEADEROFFSETBITS + 8) / 8, ((uint16_t)__HEADEROFFSETBITS + 8) % 8, 8, val, bufx);
}

// Get Minor (UIntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 8) / 8, ((uint16_t)__HEADEROFFSETBITS + 8) % 8, length bits 8, min val 0, max val 255
static inline uint32_t msg_generic_version_get_minor(void)
{
  return array_read_UIntValue32(((uint16_t)__HEADEROFFSETBITS + 8) / 8, ((uint16_t)__HEADEROFFSETBITS + 8) % 8, 8, 0, 255, bufx);
}

// Set Patch (UIntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 16) / 8, ((uint16_t)__HEADEROFFSETBITS + 16) % 8, length bits 8, min val 0, max val 255
static inline void msg_generic_version_set_patch(uint32_t val)
{
  array_write_UIntValue(((uint16_t)__HEADEROFFSETBITS + 16) / 8, ((uint16_t)__HEADEROFFSETBITS + 16) % 8, 8, val, bufx);
}

// Get Patch (UIntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 16) / 8, ((uint16_t)__HEADEROFFSETBITS + 16) % 8, length bits 8, min val 0, max val 255
static inline uint32_t msg_generic_version_get_patch(void)
{
  return array_read_UIntValue32(((uint16_t)__HEADEROFFSETBITS + 16) / 8, ((uint16_t)__HEADEROFFSETBITS + 16) % 8, 8, 0, 255, bufx);
}

// Set GitHash (UIntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 24) / 8, ((uint16_t)__HEADEROFFSETBITS + 24) % 8, length bits 32, min val 0, max val 4294967295
static inline void msg_generic_version_set_githash(uint32_t val)
{
  array_write_UIntValue(((uint16_t)__HEADEROFFSETBITS + 24) / 8, ((uint16_t)__HEADEROFFSETBITS + 24) % 8, 32, val, bufx);
}

// Get GitHash (UIntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 24) / 8, ((uint16_t)__HEADEROFFSETBITS + 24) % 8, length bits 32, min val 0, max val 4294967295
static inline uint32_t msg_generic_version_get_githash(void)
{
  return array_read_UIntValue32(((uint16_t)__HEADEROFFSETBITS + 24) / 8, ((uint16_t)__HEADEROFFSETBITS + 24) % 8, 32, 0, 4294967295, bufx);
}


// Message "generic_batterystatus"
// -------------------------------
// MessageGroupID: 0
// MessageID: 5
// Possible MessageTypes: Get, Status, AckStatus
// Validity: test
// Length w/o Header + HeaderExtension: 7 bits
// Data fields: Percentage
// Description: Tells the current battery status in percent. Please note that the "Get" may not be answered because a device does not listen to requests.

// Function to initialize header for the MessageType "Get".
static inline void pkg_header_init_generic_batterystatus_get(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(0);
  pkg_headerext_get_set_messagegroupid(0);
  pkg_headerext_get_set_messageid(5);
  __HEADEROFFSETBITS = 95;
  __PACKETSIZEBYTES = 16;
  __MESSAGETYPE = 0;
}

// Function to initialize header for the MessageType "Status".
static inline void pkg_header_init_generic_batterystatus_status(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(8);
  pkg_headerext_status_set_messagegroupid(0);
  pkg_headerext_status_set_messageid(5);
  __HEADEROFFSETBITS = 83;
  __PACKETSIZEBYTES = 16;
  __MESSAGETYPE = 8;
}

// Function to initialize header for the MessageType "AckStatus".
static inline void pkg_header_init_generic_batterystatus_ackstatus(void)
{
  memset(&bufx[0], 0, sizeof(bufx));
  pkg_header_set_messagetype(10);
  pkg_headerext_ackstatus_set_messagegroupid(0);
  pkg_headerext_ackstatus_set_messageid(5);
  __HEADEROFFSETBITS = 120;
  __PACKETSIZEBYTES = 16;
  __MESSAGETYPE = 10;
}

// Set Percentage (UIntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, length bits 7, min val 0, max val 100
static inline void msg_generic_batterystatus_set_percentage(uint32_t val)
{
  array_write_UIntValue(((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, 7, val, bufx);
}

// Get Percentage (UIntValue)
// Offset: ((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, length bits 7, min val 0, max val 100
static inline uint32_t msg_generic_batterystatus_get_percentage(void)
{
  return array_read_UIntValue32(((uint16_t)__HEADEROFFSETBITS + 0) / 8, ((uint16_t)__HEADEROFFSETBITS + 0) % 8, 7, 0, 100, bufx);
}


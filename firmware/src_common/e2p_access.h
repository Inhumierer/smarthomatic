#include <stdint.h>

#ifndef E2P_ACCESS_H
#define E2P_ACCESS_H

#ifdef UNITTEST

uint8_t eeprom_read_byte (const uint8_t *_p);
void eeprom_write_byte (const uint8_t *_p, uint8_t byte);
void signal_error_state(void);

#endif

#ifndef NULL
	#define NULL ((void*)0) 
#endif

uint32_t _eeprom_read_UIntValue32(uint16_t byte, uint8_t bit, uint16_t length_bits, uint32_t minval, uint32_t maxval, uint16_t max_bits_for_type, uint8_t * array);
void _eeprom_write_UIntValue(uint16_t byte, uint8_t bit, uint16_t length_bits, uint32_t val, uint8_t * array);


// function wrappers for EEPROM access
static inline uint8_t eeprom_read_UIntValue8(uint16_t byte, uint8_t bit, uint16_t length_bits, uint32_t minval, uint32_t maxval)
{
	return (uint8_t)_eeprom_read_UIntValue32(byte, bit, length_bits, minval, maxval, 8, NULL);
}

static inline uint16_t eeprom_read_UIntValue16(uint16_t byte, uint8_t bit, uint16_t length_bits, uint32_t minval, uint32_t maxval)
{
	return (uint16_t)_eeprom_read_UIntValue32(byte, bit, length_bits, minval, maxval, 16, NULL);
}

static inline uint32_t eeprom_read_UIntValue32(uint16_t byte, uint8_t bit, uint16_t length_bits, uint32_t minval, uint32_t maxval)
{
	return _eeprom_read_UIntValue32(byte, bit, length_bits, minval, maxval, 32, NULL);
}

static inline void eeprom_write_UIntValue(uint16_t byte, uint8_t bit, uint16_t length_bits, uint32_t val)
{
	_eeprom_write_UIntValue(byte, bit, length_bits, val, NULL);
}

static inline void eeprom_write_IntValue(uint16_t byte, uint8_t bit, uint16_t length_bits, int32_t val)
{
	_eeprom_write_UIntValue(byte, bit, length_bits,
		(uint32_t)(((((uint32_t)val) >> 31) << (length_bits - 1)) | ((uint32_t)val & (uint32_t)((1 << (length_bits - 1)) - 1))),
		NULL);
}

// function wrappers for ARRAY access
static inline uint8_t array_read_UIntValue8(uint16_t byte, uint8_t bit, uint16_t length_bits, uint32_t minval, uint32_t maxval, uint8_t * array)
{
	return (uint8_t)_eeprom_read_UIntValue32(byte, bit, length_bits, minval, maxval, 8, array);
}

static inline uint16_t array_read_UIntValue16(uint16_t byte, uint8_t bit, uint16_t length_bits, uint32_t minval, uint32_t maxval, uint8_t * array)
{
	return (uint16_t)_eeprom_read_UIntValue32(byte, bit, length_bits, minval, maxval, 16, array);
}

static inline uint32_t array_read_UIntValue32(uint16_t byte, uint8_t bit, uint16_t length_bits, uint32_t minval, uint32_t maxval, uint8_t * array)
{
	return _eeprom_read_UIntValue32(byte, bit, length_bits, minval, maxval, 32, array);
}

static inline void array_write_UIntValue(uint16_t byte, uint8_t bit, uint16_t length_bits, uint32_t val, uint8_t * array)
{
	_eeprom_write_UIntValue(byte, bit, length_bits, val, array);
}

static inline void array_write_IntValue(uint16_t byte, uint8_t bit, uint16_t length_bits, int32_t val, uint8_t * array)
{
	//UART_PUTF ("IntVal: %d\r\n", val);
	//UART_PUTF ("as UIntVal: %lu\r\n", (uint32_t)val);
	//UART_PUTF ("Shifted: %u\r\n", ((uint32_t)val) >> 31);
	//UART_PUTF ("Shifted2: %u\r\n", ((((uint32_t)val) >> 31) << (length_bits - 1)));
	//UART_PUTF ("MASK: %u\r\n", ((1 << (length_bits - 1)) - 1));
	//UART_PUTF ("OR: %lu\r\n", ((uint32_t)val & (uint32_t)((1 << (length_bits - 1)) - 1)));

	_eeprom_write_UIntValue(byte, bit, length_bits,
		(uint32_t)(((((uint32_t)val) >> 31) << (length_bits - 1)) | ((uint32_t)val & (uint32_t)((1 << (length_bits - 1)) - 1))),
		array);
}

#endif // E2P_ACCESS

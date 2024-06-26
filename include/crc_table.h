#pragma once

#include <stdint.h>

uint8_t  CRC8_Table(uint8_t* p, uint8_t counter);
uint16_t CRC16_Table(uint8_t* p, uint8_t counter);
uint32_t CRC32_Table(uint8_t* p, uint8_t counter);

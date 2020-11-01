#include <stdbool.h>
#include "stm32f4xx_hal.h"

#ifndef MODBUS_H_
#define MODBUS_H_

/* ADJUSTABLE PARAMETERS */
#define DEVICE_ID 0x02
#define REGISTERS_NUMBER 16

typedef int16_t modbus_register;

/**
 * Sets value in Modbus register
 * @param offset Number representing offset of given register (for 40001 use 0)
 * @param value Value to set in given register
 * @return True if success, false otherwise
 */
bool modbus_set_reg_value(uint16_t offset, int16_t value);

/**
 * Get value from Modbus register
 * @param offset Number representing offset of given register (for 40001 use 0)
 * @return Value of given register
 */
int16_t modbus_get_reg_value(uint16_t offset);

/**
 * Process Modbus frame and get response
 * @param request Pointer to byte buffer that keeps frame to process
 * @param request_size Size of frame to process (in bytes)
 * @param response Pointer to buffer where Modbus response will be written
 * @param response_size Pointer to variable where size of Modbus response (in bytes) will be written
 * @return Value of given register
 */
bool modbus_process_frame(uint8_t * request, uint16_t request_size, uint8_t * response, uint16_t * response_size);

#endif /* MODBUS_H_ */

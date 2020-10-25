
#ifndef CONFIG_H_
#define CONFIG_H_

/* WORKING PARAMETERS */
#define OUTPUT_CHANNELS_NUMBER 3
#define MAIN_TIMER_RESOLUTION_US 100
#define HALF_SINE_PERIOD_US 10000
#define GATE_PULSE_MIN_TIME_US 100
#define VOLTAGE_PRECISION_MULTIPLIER 10
#define TEMPERATURE_PRECISION_MULTIPLIER 10
#define MIN_WORKING_TEMPERATURE 0*TEMPERATURE_PRECISION_MULTIPLIER // exceeding this value results in error alert
#define MAX_WORKING_TEMPERATURE 90*TEMPERATURE_PRECISION_MULTIPLIER // exceeding this value results in error alert
#define MAX_FAN_VOLTAGE 230
#define ZERO_CROSSING_DETECTION_OFFSET_US 260
#define MIN_GATE_DELAY_US 500
#define MAX_GATE_DELAY_US 9500
#define MIN_OUTPUT_VOLTAGE_DECPERCENT (35*VOLTAGE_PRECISION_MULTIPLIER) // if value is less then that, FULL_OFF_OUTPUT_VOLTAGE_DECPERCENT is set
#define MAX_OUTPUT_VOLTAGE_DECPERCENT (100*VOLTAGE_PRECISION_MULTIPLIER) // if value is bigger then that, FULL_ON_OUTPUT_VOLTAGE_DECPERCENT is set
#define FULL_OFF_OUTPUT_VOLTAGE_DECPERCENT 0
#define FULL_ON_OUTPUT_VOLTAGE_DECPERCENT 100*VOLTAGE_PRECISION_MULTIPLIER

/* PI PARAMETERS */
#define WORKING_PARAMETERS_UPDATE_PERIOD_US 1000000 // this is also a period of triggering PI regulator
#define INIT_CHANNEL_SETPOINT_C (60*TEMPERATURE_PRECISION_MULTIPLIER)
#define PI_KP 5
#define TIME_CONST 10
#define INTEGRAL_ERROR_MIN 0
#define INTEGRAL_ERROR_MAX (1000*TIME_CONST)

/* RS485 PARAMETERS */
//#define RS_BAUD_RATE 9600
#define MYUBRR (F_CPU/16/RS_BAUD_RATE - 1)
#define RS_TX_BUFFER_SIZE 100
#define RS_RX_BUFFER_SIZE 50
#define MAX_TIME_BETWEEN_MODBUS_FRAMES_US 4500 //((1000000/RS_BAUD_RATE)*11*4) //>((1000000/RS_BAUD_RATE)*11*4) //min 3.5 char between messages

/* CONSTANTS */
#define PI (3.14)

#endif /* CONFIG_H_ */

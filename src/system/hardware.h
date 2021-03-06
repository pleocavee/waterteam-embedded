#include <Arduino.h>
#include <Wire.h> // Communicate with I2C/TWI devices

// For F103RB
#define Serial Serial2

extern TwoWire Wire1;
#define Wire Wire1

extern TwoWire Wire2;

#define SWITCHED_POWER_ENABLE PC6
#define SD_ENABLE_PIN PC8

#define BLE_COMMAND_MODE_PIN PB5
#define INTERRUPT_LINE_7_PIN PC7
//pinMode(PB10, INPUT_PULLDOWN); // This WAS interrupt line 10, user interrupt. Needs to be reassigned.

#define ANALOG_INPUT_1_PIN PB1
#define ANALOG_INPUT_2_PIN PC0
#define ANALOG_INPUT_3_PIN PC1
#define ANALOG_INPUT_4_PIN PC2
#define ANALOG_INPUT_5_PIN PC3

#define ONBOARD_LED_PIN PA5


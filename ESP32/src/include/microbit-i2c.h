#pragma once

#include <Wire.h>
#include <WireSlave.h>
#include <WirePacker.h>
#include "driver/uart.h"
#include "defines.h"
#include "SN7 pins.h"
#include "messageParts.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iostream>
#include <Streaming.h>

#define I2C_SLAVE_ADDR 4

void microbit_i2c_setup();
void receiveEvent(int howMany); //when BBC Microbit calls i2cWriteBuffer
void requestEvent();            //when BBC Microbit call i2cReadBuffer
void IRAM_ATTR handleBBCi2CInterupt();
void i2c_rx_task(void *pvParameter);
void dealWithMessage(std::string message);

extern void touch_deal_with_message(messageParts message);

extern std::string swithStates;
extern std::string touchStates;
extern volatile int32_t encoder2Count;
extern volatile int32_t encoder1Count;
extern volatile int BusyPin;

extern QueueHandle_t DAC_Queue;
extern QueueHandle_t Sound_Queue;
extern QueueHandle_t Microbit_Receive_Queue;
extern QueueHandle_t Light_Queue;
extern QueueHandle_t Movement_Queue;
//extern QueueHandle_t MQTT_Queue;
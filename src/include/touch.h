#pragma once

#include <Wire.h>
#include "messaging.h"
#include "defines.h"
#include "SN8 pins.h"

void touch_setup();
void touch_task(void *pvParameter);
//void IRAM_ATTR handleTouchInterupt();
void touch_deal_with_message(messageParts message);
uint16_t readAndSetTouchArray();

extern void POST(uint8_t flashes);
extern void checkI2Cerrors(std::string area);

extern SemaphoreHandle_t i2cSemaphore;
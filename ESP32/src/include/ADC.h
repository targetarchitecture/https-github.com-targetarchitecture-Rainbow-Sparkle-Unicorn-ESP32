#ifndef ADC_h
#define ADC_h

#include "defines.h"
#include "SN7 pins.h"

void ADC_setup();
void ADC_task(void *pvParameter);
void ADC_deal_with_message(char msg[MAXMESSAGELENGTH]);

extern void sendToMicrobit(char msg[MAXBBCMESSAGELENGTH]);
extern SemaphoreHandle_t i2cSemaphore;
extern void checkI2Cerrors(const char *area);

#endif
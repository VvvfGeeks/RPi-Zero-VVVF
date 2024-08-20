/*
*
*/
#ifndef __GPIO_H__
#define __GPIO_H__

#include "rpi.h"

#define HIGH	1
#define LOW		0

#define INPUT		0
#define OUTPUT		1
#define ALT0		4
#define ALT1		5
#define ALT2		6
#define ALT3		7
#define ALT4		3	
#define ALT5		2

#define PULLDOWN	8
#define PULLUP		9

typedef enum { false, true } bool;

extern void wait_150();
extern void InitializeGpio();
extern void setPullUpDown(unsigned int pin, unsigned int mode);
extern void pinMode(unsigned int pin, unsigned int type);
extern void digitalWrite(unsigned int pin, unsigned int value);
extern void digitalWrite_special(unsigned int pins, unsigned int value);
extern int digitalRead(unsigned int pin);

void reset_detect();
void setFallDetect(unsigned int pin,bool set,bool async);
void setRaiseDetect(unsigned int pin,bool set,bool async);
void setLowDetect(unsigned int pin,bool set);
void setHighDetect(unsigned int pin,bool set);
int isEventDetect(unsigned int pin);
void clearEventDetect(unsigned int pin);

#endif

#ifndef _TIMER_H_INCLUDED
#define _TIMER_H_INCLUDED

#ifndef _AVR_ATMEGA32A_H_INCLUDED
#include <avr/io.h>
#endif

void timer0_init();
void timer0_set(uint8_t); //basically set ocr0 value.

#endif
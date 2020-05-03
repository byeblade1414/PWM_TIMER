#include "timer.h"

void timer0_init()
{
		
	TCCR0 |= (1 << WGM00) | (1 << WGM01) | (1 << COM01); // FAST PWM, SET OC0 on compare match. ( non - inverting mode ) (pwm mode)
	DDRB |= (1 << 3); // set oc0 corresponding DDR bit in related port in order to active ( drive ) oc0 pin (pin 3)
	TCCR0 |= (1 << CS01); // timer clock = clock / 8. after execution of this line, timer will start to operate.
		
}


void timer0_set(uint8_t value)
{
	OCR0 = value;
}
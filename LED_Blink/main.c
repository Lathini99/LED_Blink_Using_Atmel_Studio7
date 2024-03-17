/*
 * LED_Blink.c
 *
 * Created: 3/17/2024 11:16:03 AM
 * Author : Dell
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB |= 0B00100000;
    /* Replace with your application code */
    while (1) 
    {
		PORTB |= 0B00100000;
		_delay_ms(500);
		PORTB &= 0B11011111;
		_delay_ms(500);
    }
}


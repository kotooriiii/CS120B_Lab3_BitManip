/*	Author: Carlos Miranda cmira039@ucr.edu
 *  Partner(s) Name: 
 *	Lab Section: 23
 *	Assignment: Lab #3  Exercise #1
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
	
	//Inputs
	DDRA = 0x00; PORTA = 0xFF; 
	DDRB = 0x00; PORTB = 0xFF;
	
	//Outputs
	DDRC = 0xFF; PORTC = 0x00; 
	
	//Counter
	unsigned char counter = 0x00;
	while(1) {
		
		counter = 0x00;

		if(PINA & 0x01)
		{
			counter++;
		}
		
		if(PINA & 0x02)
		{
			counter++;
		}
		
		if(PINA & 0x04)
		{
			counter++;
		}
		
		if(PINA & 0x08)
		{
			counter++;
		}
		
		if(PINA & 0x10)
		{
			counter++;
		}
		
		if(PINA & 0x20)
		{
			counter++;
		}
		
		if(PINA & 0x40)
		{
			counter++;
		}
		
		if(PINA & 0x80)
		{
			counter++;
		}
		
		if(PINB & 0x01)
		{
			counter++;
		}
		
		if(PINB & 0x02)
		{
			counter++;
		}
		
		if(PINB & 0x04)
		{
			counter++;
		}
		
		if(PINB & 0x08)
		{
			counter++;
		}
		
		if(PINB & 0x10)
		{
			counter++;
		}
		
		if(PINB & 0x20)
		{
			counter++;
		}
		
		if(PINB & 0x40)
		{
			counter++;
		}
		
		if(PINB & 0x80)
		{
			counter++;
		}
	
	
		PORTC = counter;
	}
	return 1;
}
	


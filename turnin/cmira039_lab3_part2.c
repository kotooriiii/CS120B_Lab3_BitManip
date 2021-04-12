/*	Author: cmira039
 *  Partner(s) Name: n/a
 *	Lab Section: 23
 *	Assignment: Lab #3  Exercise #2
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
	
	//Outputs
	DDRC = 0xFF; PORTC = 0x00; 
	
	//temp
	unsigned char tempC = 0x00;
	
	while(1) {
		
		tempC = 0x00;
		
		if(1 <= PINA && PINA <= 2)
		{
			tempC = 0x20;
		}
		
		else if(3 <= PINA && PINA <= 4)
		{
			tempC = 0x30;
		}
		
		else if(5 <= PINA && PINA <= 6)
		{
			tempC = 0x38;
		}
		
		else if(7 <= PINA && PINA <= 9)
		{
			tempC = 0x3C;
		}
		
		else if(10 <= PINA && PINA <= 12)
		{
			tempC = 0x3E;
		}
		
		else if(13 <= PINA && PINA <= 15)
		{
			tempC = 0x3F;
		}
		
		if(PINA <= 4)
		{
			tempC = tempC | 0x40;
		}
		
		PORTC = tempC;
	}
	return 1;
}
	



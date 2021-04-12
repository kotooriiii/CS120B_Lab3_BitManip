/*	Author: Carlos Miranda cmira039@ucr.edu
 *  Partner(s) Name: n/a
 *	Lab Section: 23
 *	Assignment: Lab #3  Exercise #3
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
		
		unsigned char ALowNibble = PINA & 0x0F;
		
		if(1 <= ALowNibble && ALowNibble <= 2)
		{
			tempC = 0x20;
		}
		
		else if(3 <= ALowNibble && ALowNibble <= 4)
		{
			tempC = 0x30;
		}
		
		else if(5 <= ALowNibble && ALowNibble <= 6)
		{
			tempC = 0x38;
		}
		
		else if(7 <= ALowNibble && ALowNibble <= 9)
		{
			tempC = 0x3C;
		}
		
		else if(10 <= ALowNibble && ALowNibble <= 12)
		{
			tempC = 0x3E;
		}
		
		else if(13 <= ALowNibble && ALowNibble <= 15)
		{
			tempC = 0x3F;
		}
		
		if(ALowNibble <= 4)
		{
			tempC = tempC | 0x40;
		}
		
		if((PINA & 0x10) && (PINA & 0x20) && !(PINA & 0x40))
		{
			tempC = tempC | 0x80;
		}
		
		
		
		PORTC = tempC;
	}
	return 1;
}
	



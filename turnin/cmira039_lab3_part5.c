/*	Author: Carlos Miranda cmira039@ucr.edu
 *  Partner(s) Name: n/a
 *	Lab Section: 23
 *	Assignment: Lab #3  Exercise #5
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
	
	//Inputs/Output
	DDRD = 0x00; PORTD = 0xFF; 
	DDRB = 0xFE; PORTB = 0x01; 

	
	//Temp
	unsigned char tempB = 0x00;
	
	unsigned short totalWeight = 0x00;
	
	while(1) 
	{

		tempB = 0x00;

		totalWeight = 0x00;
		

		totalWeight = (PIND) << 1;
		totalWeight += PINB & 0x01;
		
		if(totalWeight >= 70)
		{
			tempB = tempB | 0x02;
		}
		else if(totalWeight > 5)
		{
			tempB = tempB | 0x04;
		} else{
			//nothing
		}

		PORTB = tempB;
	}
	return 1;
}
	


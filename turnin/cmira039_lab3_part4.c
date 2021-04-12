/*	Author: Carlos Miranda cmira039@ucr.edu
 *  Partner(s) Name: n/a
 *	Lab Section: 23
 *	Assignment: Lab #3  Exercise #4
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
	DDRB = 0xFF; PORTB = 0x00;
	DDRC = 0xFF; PORTC = 0x00; 
	
	//Temp
	unsigned char tempB = 0x00;
	unsigned char tempC = 0x00;
	
	while(1) {
		
		tempB = 0x00;
		tempC = 0x00;
	
		unsigned char AHighNibble = (PINA & 0xF0) >> 4;	
		unsigned char ALowNibble = (PINA & 0x0F) << 4;	

		tempB = tempB | AHighNibble;
		tempC = tempC | ALowNibble;
		
		PORTB = tempB;
		PORTC = tempC; 
	}
	return 1;
}
	


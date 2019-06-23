/*
 * 
 * 		LH_LED.cpp
 * 		author: Łukasz Hejna
 * 		07.2019r.
 *  
 */

#include "LH_LED.h"


// ----------------------------------------
//
//		LED::LED(pin numer)
//
// ----------------------------------------
LED::LED(uint8_t pin_nr)
:	pin_nr_(pin_nr)
{
	
	pinMode(pin_nr_, OUTPUT);
	digitalWrite(pin_nr_, HIGH);
	
}//end of LED::begin


// ----------------------------------------
//
//		LED::on
//
// ----------------------------------------
void LED::on(uint16_t t_on = 0, uint16_t t_off = 0){
	
	digitalWrite(pin_nr_, LOW);	//zapal diodę
	
	if(t_on != 0){	//jeżeli podano czas załączenia to
		
		delay(t_on);	//odczekaj czas t_on
		digitalWrite(pin_nr_, HIGH);	//zgaś diodę
		
		if(t_off != 0){		//jeżeli podano czas wyłączenia to
			
			delay(t_off);	//odczekaj t_on		
			
		}
	}
	
}//end of LED::on


// ----------------------------------------
//
//		LED::off
//
// ----------------------------------------
void LED::off(uint16_t t_off = 0){
	
	digitalWrite(pin_nr_, HIGH);	//zgaś LED
	
	if(t_off != 0){	//jeżeli podano czas wyłączenia to
		
		delay(t_off);	//czekaj t_off
		
	}
	
}//end of LED::off


// ----------------------------------------
//
//		LED::ping(liczba pulsów)
//
// ----------------------------------------
void LED::ping(uint8_t count, uint16_t t_on = 25, uint16_t t_off = 225, uint16_t t_end = 0){
	
	for(uint8_t i = 0; i < count; i++){
		
		on(t_on);
		off(t_off);
		
	}
	
	if(t_end != 0){
		
		delay(t_end);
		
	}
	
}//end off LED::ping

/*

		LH LED

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
void LED::on(){
	
	digitalWrite(pin_nr_, LOW);
	
}//end of LED::on


// ----------------------------------------
//
//		LED::off
//
// ----------------------------------------
void LED::off(){
	
	digitalWrite(pin_nr_, HIGH);
	
}//end of LED::off


// ----------------------------------------
//
//		LED::ping(liczba pulsów)
//
// ----------------------------------------
void LED::ping(uint8_t count, uint16_t t_on = 25, uint16_t t_off = 225){
	
	for(uint8_t i = 0; i < count; i++){
		on();
		delay(t_on);
		off();
		delay(t_off);
	}
	
}//end off LED::ping

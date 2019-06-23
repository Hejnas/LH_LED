/*
 * 
 * 		LH_LED.h
 * 		author: Łukasz Hejna
 * 		07.2019r.
 *  
 */

#ifndef LH_LED_h
#define LH_LED_h

#include "Arduino.h"

class LED{
	
	public:
		LED(uint8_t pin_nr);
		void on(uint16_t t_on = 0, uint16_t t_off = 0);
		void off(uint16_t t_off = 0);
		void ping(uint8_t count, uint16_t t_on = 25, uint16_t t_off = 225, uint16_t t_end = 0);
		
	private:
		uint8_t pin_nr_;
		
};//end of class LED

#endif

//
//
//		
//
//
//
//

#ifndef LH_LED_h
#define LH_LED_h

#include "Arduino.h"

class LED{
	
	public:
		LED(uint8_t pin_nr, uint16_t t_on = 25, uint16_t t_off = 225);
		void on();
		void off();
		void ping(uint8_t count);
		
	private:
		uint8_t pin_nr_;
		uint16_t t_on_;
		uint16_t t_off_;
		
};//end of class LED

#endif

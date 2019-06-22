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
		LED(uint8_t pin_nr);
		void on();
		void off();
		void ping(uint8_t count, uint16_t t_on = 25, uint16_t t_off = 225);
		
	private:
		uint8_t pin_nr_;
		
};//end of class LED

#endif

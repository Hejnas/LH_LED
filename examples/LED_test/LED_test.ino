#include <LH_LED.h>

LED LED(4);

void setup() {

  

}

void loop() {
  LED.on();
  delay(500);
  LED.off();
  delay(1000);
  LED.ping(5);
  delay(1000);
  LED.ping(5,10,100);  
  delay(1000);

}

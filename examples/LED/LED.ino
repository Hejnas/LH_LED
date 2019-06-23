#include <LH_LED.h>

LED LED(4);

void setup() {

  

}

void loop() {
  
  LED.on(100,400); //załączenie diody na 100ms, a po wyłączeniu odczekanie 400ms
  LED.on(100,400); //załączenie diody na 100ms, a po wyłączeniu odczekanie 400ms
  LED.ping(10,25,50,500); //10 mrugnięć o czasie świecenia 25ms i czasie wyłączenia 50ms. Po mrugnięciach odczekaj 500ms
  delay(1000);
  LED.ping(10); //10 mrugnięć z domyślnym czasem załączenia 25ms i wyłączenia 225ms

  LED.on(); //jedynie  włącz djodę
  delay(500);
  LED.off();  //jedynie wyłącz diodę
  delay(1000);

  LED.on(50); //załącz diodę na 50ms i odczeka 0ms
  delay(1000);

  for(uint8_t i = 0; i < 10; i++){
    LED.on(25);
    LED.off(100);
  }
  delay(1000);
  // lub
  for(uint8_t i = 0; i < 10; i++){
    LED.on(25,100);
  }
  delay(1000);
  
}

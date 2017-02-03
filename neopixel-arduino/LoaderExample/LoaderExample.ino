#include "FastLED.h"

#define NUM_LEDS 24
#define DATA_PIN 3

CRGB leds[NUM_LEDS];

void setup() { 
  	  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void turnOn(){
  for(int i = 0; i < NUM_LEDS; i++){
    leds[i] = CRGB::Blue;
    FastLED.show();
    delay(50);
  }
}

void turnOff(){
  for(int i = 0; i < NUM_LEDS; i++){
    leds[i] = CRGB::Black;
    FastLED.show();
    delay(50);
  }
}

void loop() {
  turnOn();
  turnOff();
}

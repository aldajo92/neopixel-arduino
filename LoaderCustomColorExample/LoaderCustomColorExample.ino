#include "FastLED.h"

#define NUM_LEDS 144
#define DATA_PIN 3

CRGB leds[NUM_LEDS];

const CRGB customColor[] = 
  {
    CRGB(0, 255, 0),
    CRGB(255, 255, 0),
    CRGB(0, 0, 255),
    CRGB(255, 0, 255),
    CRGB(0, 255, 255)
  };

void setup() { 
  	  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void turnOn(){
  for(int i = 0; i < NUM_LEDS; i++){
    leds[i] = customColor[1];
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

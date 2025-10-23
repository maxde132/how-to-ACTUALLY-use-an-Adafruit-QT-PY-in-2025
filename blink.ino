#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

const int neopixel_pin = PA4;
#define LED_COUNT 1

Adafruit_NeoPixel pixels(LED_COUNT, neopixel_pin, NEO_GRB + NEO_KHZ800);

void setup () {
  pixels.begin();
  pixels.setBrightness(50);
  pixels.setPixelColor(0, pixels.Color(255, 0, 0));
  pixels.show();
}

void loop() {
  pixels.setPixelColor(0, pixels.Color(0, 255, 0));
  pixels.show();
  delay(500);

  pixels.setPixelColor(0, pixels.Color(0, 0, 255));
  pixels.show();
  delay(500);
}

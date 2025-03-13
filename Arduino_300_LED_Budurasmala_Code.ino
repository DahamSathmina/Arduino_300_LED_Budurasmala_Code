#define FASTLED_ALLOW_INTERRUPTS 0

#include "FastLED.h" // FastLED_Library
#include "SdFat.h" // SDfat_Library

#define NUM_LEDS 300 // Total_LEDs
#define DATA_PIN 8 // Arduino_OUTPUT_LED_Data_Pin
CRGB leds[NUM_LEDS];

const uint8_t chipSelect = SS; //Chip_Select = 10;
SdFat sd;
SdFile file;
long file_size;

void setup() {

  FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
  FastLED.setBrightness(200);
}

void loop() {
  sd.begin(chipSelect, SPI_FULL_SPEED);

  file.open("matrix.dat", O_READ); //Enter_File_Name
  file_size = (1620000); //Enter_File_Size_In_Bytes
  for (int i = 0; i < (file_size / (NUM_LEDS * 3)); i++) {
    file.read((uint8_t*)leds, NUM_LEDS * 3);
    FastLED.show();
    delay(100);
  }
  file.close();
}

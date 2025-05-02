// NES Label GPT V4.05x -Neo mode  -screensavers
// Un viaje a través de la nostalgia y la tecnología moderna
// Donde los sueños se encuentran con la realidad... 
// Autor: Nagual_Jo & ChatGPT & Copilot GPT-4.1
//V4 complete re desing using Arduino_GFX libreries for avoid bugs with using of dual spi canal 

#include <Arduino_GFX_Library.h>
#include <XPT2046_Touchscreen.h>
#include <SPI.h>
#include <SD.h>
#include <vector>
#include <cstdlib>
#include <DFRobotDFPlayerMini.h>
#include <EEPROM.h>
#include <algorithm> // Para std::random_shuffle
#include <Wire.h>
#include <RTClib.h>

#define EEPROM_SIZE 8
#define EEPROM_VOL_ADDR 0
#define EEPROM_BRILLO_ADDR 1
#define EEPROM_MODO_ADDR 2
#define EEPROM_SCREENSAVER_ADDR 3

// Private Code until reach goals

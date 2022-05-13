/*
Copyright 2018-2021 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#ifndef HARDWARE_CONFIG_H
#define HARDWARE_CONFIG_H
#include "hardware_variants.h"
/* HARDWARE DEFINITION*/
/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS {47, 45, 43, 10, 9 }
#define MATRIX_COL_PINS {39, 34, 33, 31, 11, 36, 38}
#define UNUSED_PINS {6, 8, 17 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
#define BATTERY_TYPE BATT_LIPO
#define VBAT_PIN 4
#define VCC_PIN 13
#define VCC_POLARITY_ON 0

//#define STATUS_BLE_LED_PIN  15  //blue = 0.15
//#define BLE_LED_ACTIVE 1
//#define BLE_LED_POLARITY 1

//#define WS2812B_LED_PIN 24
//#define WS2812B_LED_COUNT 6
//#define WS2812B_LED_ON 1

//#define I2C_SDA_PIN 22
//#define I2C_SCK_PIN 20
//#define DISPLAY_U8G2_CONSTRUCTOR U8G2_SSD1305_128X32_NONAME_1_SW_I2C

//#define ENCODER_A_PIN 31
//#define ENCODER_B_PIN 29
//#define ENCODER_RESOLUTION 1

#endif /* HARDWARE_CONFIG_H */

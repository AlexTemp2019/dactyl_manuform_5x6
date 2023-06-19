/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define EE_HANDS

// Communication
#define USE_I2C

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

#define DIODE_DIRECTION COL2ROW

// The number of LEDs connected
#define RGB_MATRIX_LED_COUNT 64
#define RGB_MATRIX_SPLIT \
        { 32, 32  }

#ifdef RGB_MATRIX_ENABLE
#  define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
#  define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#  define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash. 
#  define RGB_MATRIX_HUE_STEP 8
#  define RGB_MATRIX_SAT_STEP 8
#  define RGB_MATRIX_VAL_STEP 8
#  define RGB_MATRIX_SPD_STEP 10
#  define ENABLE_RGB_MATRIX_CYCLE_SPIRAL                      // Full gradient spinning spiral around center of keyboard
#  define ENABLE_RGB_MATRIX_HUE_WAVE                          // Hue shifts up a slight ammount and then back down in a wave to the right 
#endif

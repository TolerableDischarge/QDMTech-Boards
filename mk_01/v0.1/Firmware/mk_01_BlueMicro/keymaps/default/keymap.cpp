/*
Copyright 2018-2021 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#include "keymap.h"

// Initialize matrix with nothing...
std::array<std::array<Key, MATRIX_COLS>, MATRIX_ROWS> matrix =
    KEYMAP2ARRAY(KEYMAP(
                  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
    ));


void setupKeymap() {

   // no layers for single keymap
   // this is a keymap that's used for testing that each key is responding properly to key presses
   // flash this keymap to both left and right to test whether each half works properly.
   // once tested, you can flash the left and right to their respective halves.
   uint32_t layer0_single[MATRIX_ROWS][MATRIX_COLS] = KEYMAP(
        _______, KC_GRAVE,    KC_1,    KC_2,    KC_3,   KC_4,   KC_5,
        KC_ESC,  KC_TAB,      KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,
        KC_HOME, KC_CAPSLOCK, KC_A,    KC_S,    KC_D,   KC_F,   KC_G,
        KC_END,  KC_LSFT,     KC_BSLS, KC_Z,    KC_X,   KC_C,   KC_V,
        LAYER_1, KC_LCTL,     KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC
    );


/* Qwerty LEFT
 * ,------------------------------------------------.
 * |      |   `  |   1  |   2  |   3  |   4  |   5  |
 * |------+------+------+------+------+------+------|
 * | Esc  | Tab  |   Q  |   W  |   E  |   R  |   T  |
 * |------+------+------+------+------+-------------|
 * | Home | Caps |   A  |   S  |   D  |   F  |   G  |
 * |------+------+------+------+------+------|------|
 * | End  | Shift|   \  |   Z  |   X  |   C  |   V  |
 * |------+------+------+------+------+------+------|
 * |  Fn  | Ctrl | GUI  |  Alt | Space| Space| Space|
 * `------------------------------------------------'
 */

uint32_t layer0_left[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
        _______, KC_GRAVE,    KC_1,            KC_2,    KC_3,   KC_4,   KC_5,
        KC_ESC,  KC_TAB,      KC_Q,            KC_W,    KC_E,   KC_R,   KC_T,
        KC_HOME, KC_CAPSLOCK, KC_A,            KC_S,    KC_D,   KC_F,   KC_G,
        KC_END,  KC_LSFT,     KC_NONUS_BSLASH, KC_Z,    KC_X,   KC_C,   KC_V,
        LAYER_1, KC_LCTL,     KC_LGUI,         KC_LALT, KC_SPC, KC_SPC, KC_SPC
    );

 /* Qwerty RIGHT
 * ,-------------------------------------------------------.
 * |   6  |   7  |   8  |   9  |   0  |   -  |   =  |      |
 * |------+------+------+------+------+------+------+------|
 * |   Y  |   U  |   I  |   O  |   P  |   [  |   ]  | Bksp |
 * |------+------+------+------+------+-------------+------|
 * |   H  |   J  |   K  |   L  |   ;  |   '  |   #  | Enter|
 * |------+------+------+------+------+------+------+------|
 * |   B  |   N  |   M  |   ,  |   .  |   /  |  Up  | Enter|
 * |------+------+------+------+------+------+------+------|
 * | Space| Space| Space| AltGr| Ctrl | Left | Down | Right|
 * `-------------------------------------------------------'

 */

uint32_t layer0_right[MATRIX_ROWS][MATRIX_COLS] =
    KEYMAP(
        KC_6,   KC_7,   KC_8,   KC_9,    KC_0,      KC_MINUS, KC_EQUAL,      _______,
        KC_Y,   KC_U,   KC_I,   KC_O,    KC_P, K    C_LBRC,   KC_RBRC,       KC_BSPC,
        KC_H,   KC_J,   KC_K,   KC_L,    KC_SCOLON, KC_QUOT,  KC_NONUS_HASH, KC_ENTER,
        KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,    KC_SLSH,  KC_UP,         KC_ENTER,
        KC_SPC, KC_SPS, KC_SPC, KC_LALT, KC_LCTL,   KC_LEFT,  KC_DOWN,       KC_RIGHT

    );



 /* Layer 1 (Raise) LEFT
 * ,------------------------------------------------.
 * |      |   `  |  F1  |  F2  |  F3  |  F4  |  F5  |
 * |------+------+------+------+------+------+------|
 * |  Esc | Tab  | BLE1 | BLE2 | BLE3 |   R  |   T  |
 * |------+------+------+------+------+-------------|
 * | PgUp | Caps | Prev | Play | Next |   F  |   G  |
 * |------+------+------+------+------+------|------|
 * | PgDn | Shift|RGB on|RGBchg|   X  |   C  |   V  |
 * |------+------+------+------+------+------+------|
 * |  Fn  | Ctrl | GUI  | Alt | Space| Space | Space|
 * `------------------------------------------------'
 */
    uint32_t layer1_left[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
          _______, KC_GRAVE,    KC_F1,               KC_F2,               KC_F3,               KC_F4,  KC_F5,
          KC_ESC,  KC_TAB,      BLEPROFILE_1,        BLEPROFILE_2,        BLEPROFILE_3,        KC_R,   KC_T,
          KC_PGUP, KC_CAPSLOCK, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC_F,   KC_G,
          KC_PGDN, KC_LSFT,     RGB_TOG,             RGB_MOD,             KC_X,                KC_C,   KC_V,
          LAYER_1, KC_LCTL,     KC_LGUI,             KC_LALT,             KC_SPC,              KC_SPC, KC_SPC
        );


 /* Layer 1 (Raise)  RIGHT
 * ,-------------------------------------------------------.
 * |  F6  |  F7  |  F8  |  F9  | F10  | F11  | F12  |      |
 * |------+------+------+------+------+------+------+------|
 * |   Y  |   U  |   I  |   O  |   P  |RGB on|RGBchg| Del  |
 * |------+------+------+------+------+-------------+------|
 * |   H  |   J  |   K  |   L  |   ;  |   '  |   #  | Enter|
 * |------+------+------+------+------+------+------+------|
 * |   B  |   N  |   M  |   ,  |   .  |   /  |  Up  | Enter|
 * |------+------+------+------+------+------+------+------|
 * | Space| Space| Space| AltGr| Ctrl | Left | Down | Right|
 * `-------------------------------------------------------'
 */
    uint32_t layer1_right[MATRIX_ROWS][MATRIX_COLS] =
        KEYMAP( \
          KC_6,   KC_7,   KC_8,   KC_9,    KC_0,      KC_MINUS, KC_EQUAL,      _______,
          KC_Y,   KC_U,   KC_I,   KC_O,    KC_P, K    C_LBRC,   KC_RBRC,       KC_BSPC,
          KC_H,   KC_J,   KC_K,   KC_L,    KC_SCOLON, KC_QUOT,  KC_NONUS_HASH, KC_ENTER,
          KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,    KC_SLSH,  KC_UP,         KC_ENTER,
          KC_SPC, KC_SPS, KC_SPC, KC_LALT, KC_LCTL,   KC_LEFT,  KC_DOWN,       KC_RIGHT
        );

    for (int row = 0; row < MATRIX_ROWS; ++row)
    {
        for (int col = 0; col < MATRIX_COLS; ++col)
        {
            #if KEYBOARD_SIDE == SINGLE
                matrix[row][col].addActivation(_L0, Method::PRESS, layer0_single[row][col]);
            #endif
            #if KEYBOARD_SIDE == LEFT
                matrix[row][col].addActivation(_L0, Method::PRESS, layer0_left[row][col]);
                matrix[row][col].addActivation(_L1, Method::PRESS, layer1_left[row][col]);
                matrix[row][col].addActivation(_L2, Method::PRESS, layer2_left[row][col]);
                matrix[row][col].addActivation(_L3, Method::PRESS, layer3_left[row][col]);
            #endif
            #if KEYBOARD_SIDE == RIGHT
                matrix[row][col].addActivation(_L0, Method::PRESS, layer0_right[row][col]);
                matrix[row][col].addActivation(_L1, Method::PRESS, layer1_right[row][col]);
                matrix[row][col].addActivation(_L2, Method::PRESS, layer2_right[row][col]);
                matrix[row][col].addActivation(_L3, Method::PRESS, layer3_right[row][col]);
            #endif
            // if you want to add Tap/Hold or Tap/Doubletap activations, then you add them below.

        }
    }
}

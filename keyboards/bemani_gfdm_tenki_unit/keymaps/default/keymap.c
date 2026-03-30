// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

/* Keymap:
 * 
 * ROW1: K_SERVICE, K_UP, K_TEST, K_COIN
 * ROW2: K_LEFT, K_START, K_RIGHT, K_HELP
 * ROW3: K_EX1, K_DOWN, K_EX2, K_CARD
 * ROW4: K_P7, K_P8, K_P9, —
 * ROW5: K_P4, K_P5, K_P6, —
 * ROW6: K_P1, K_P2, K_P3, —
 * ROW7: K_P0, K_P00, K_PEX, —
 * ROW8: K_VOL (direct pin GPIO13)
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_F1,   KC_UP,   KC_F2,   KC_F3,     // ROW1: SERVICE, UP, TEST, COIN
        KC_LEFT, KC_1,    KC_RIGHT,KC_H,      // ROW2: LEFT, START, RIGHT, HELP
        KC_F4,   KC_DOWN, KC_F5,   KC_C,      // ROW3: EX1, DOWN, EX2, CARD
        KC_P7,   KC_P8,   KC_P9,              // ROW4: 7, 8, 9
        KC_P4,   KC_P5,   KC_P6,              // ROW5: 4, 5, 6
        KC_P1,   KC_P2,   KC_P3,              // ROW6: 1, 2, 3
        KC_P0,   KC_PDOT, KC_PENT,            // ROW7: 0, 00, PEX
        KC_V                                  // ROW8: K_VOL
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) } // VOL-, VOL+
};
#endif

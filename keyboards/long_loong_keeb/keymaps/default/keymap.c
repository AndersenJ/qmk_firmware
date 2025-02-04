// Copyright 2022 Johnathan Andersen (@AndersenJ)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
                 KC_PSCR, KC_ESC, KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME, KC_END, KC_7, KC_8, KC_9, KC_PLUS ,
      KC_F1, KC_F2,  KC_F3   , KC_F4,  KC_BSPC,KC_A,KC_S,KC_D,KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN,    KC_QUOT, KC_ENT , KC_DEL, KC_PGUP, KC_4, KC_5, KC_6, KC_MINS,
      KC_F5, KC_F6,  KC_F7,    KC_F8,  KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA,KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP , KC_PGDN, KC_1, KC_2, KC_3, KC_PENT ,
      KC_F9, KC_F10, KC_F11,   KC_F12, KC_LCTL,KC_LCMD,KC_LALT,MO(_FN),     KC_SPACE,           KC_RCMD, KC_RCTL, KC_LEFT, KC_DOWN,KC_RIGHT,KC_0, KC_PDOT 
    ),
    [_FN] = LAYOUT(
                 _______, _______, KC_GRV,  KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_DEL, _______, _______, _______, _______, _______, _______,
      _______, _______,  _______   , _______,  _______,_______,_______,_______,_______, _______, _______, _______, _______, _______, _______,    _______, _______ , _______, _______, _______, _______, _______, _______,
      _______, _______,  _______,    _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,_______,  _______,  _______, _______ , _______, _______, _______, _______, _______ ,
      _______, _______, _______,   _______, _______,_______,_______,_______,     _______,           _______, _______, _______, _______,_______,_______, _______ 
    )
};

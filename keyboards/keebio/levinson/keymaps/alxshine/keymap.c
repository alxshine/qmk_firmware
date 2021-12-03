#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_BSPC, LCTL_T(KC_ESC), KC_A, KC_O, LT(5,KC_E), LT(7,KC_U), KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINS, KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_ENT, TO(4), KC_LCTL, KC_LALT, KC_LGUI, MO(1), KC_SPC, KC_SPC, MO(2), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
	[1] = LAYOUT(KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS, KC_DEL, KC_TRNS, KC_LCBR, KC_LPRN, KC_RPRN, KC_RCBR, KC_TRNS, KC_QUES, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS, KC_DQUO, KC_QUOT, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_NUHS, KC_NUBS, KC_HOME, KC_END, KC_TRNS, TO(6), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(3), KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),
	[2] = LAYOUT(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_DEL, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_SLSH, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),
	[3] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, NK_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, AU_ON, AU_OFF, AU_TOG, KC_TRNS, KC_TRNS, RGB_TOG, RGB_VAI, RGB_VAD, KC_TRNS, RESET, KC_TRNS, KC_TRNS, MU_ON, MU_OFF, MU_TOG, KC_MPRV, KC_MNXT, RGB_MOD, RGB_HUI, RGB_HUD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT(KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, TO(0), KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TRNS, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_M, KC_TRNS, KC_LSFT, KC_Z, KC_X, KC_C, KC_LALT, KC_SPC, KC_SPC, KC_M, KC_V, KC_TRNS, KC_TRNS, KC_TRNS),
	[5] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_1, KC_2, KC_3, KC_PLUS, KC_BSPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_4, KC_5, KC_6, KC_MINS, KC_PERC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_7, KC_8, KC_9, KC_ASTR, KC_CIRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_0, KC_COMM, KC_DOT, KC_SLSH, KC_ENT),
	[6] = LAYOUT(KC_TRNS, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_TRNS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_C, KC_V, KC_TRNS, KC_TRNS, KC_N, KC_M, KC_TRNS, KC_TRNS, TO(0)),
	[7] = LAYOUT(KC_TRNS, KC_LSFT, KC_LSFT, KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_UP, KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCTL, KC_LCTL, KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_LALT, KC_LALT, KC_LALT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

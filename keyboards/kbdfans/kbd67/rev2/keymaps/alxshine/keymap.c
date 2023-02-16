#include QMK_KEYBOARD_H

enum layers {
    _DVORAK,
    _QWERTY,
    _FUNC,
    _NUM
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DVORAK] = LAYOUT_all(
      KC_GRV        , KC_1          , KC_2   , KC_3    , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_LBRC , KC_RBRC , KC_DEL , KC_BSPC, KC_HOME, 
      KC_TAB        , KC_QUOT       , KC_COMM, KC_DOT  , KC_P   , KC_Y   , KC_F   , KC_G   , KC_C   , KC_R   , KC_L   , KC_SLSH , KC_EQL  , KC_BSLS, KC_PGUP, 
      LCTL_T(KC_ESC), KC_A          , KC_O   , KC_E    , KC_U   , KC_I   , KC_D   , KC_H   , KC_T   , KC_N   , KC_S   , KC_MINS , KC_ENT  , KC_PGDN, 
      KC_LSFT       , _______       , KC_SCLN, KC_Q    , KC_J   , KC_K   , KC_X   , KC_B   , KC_M   , KC_W   , KC_V   , KC_Z    , KC_RSFT , KC_UP  , KC_END , 
      MO(2)         , KC_LGUI       , KC_LALT, KC_BSPC , OSL(2) , KC_SPC , KC_RALT, MO(2)  , KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT), 

    [_QWERTY] = LAYOUT_all(
        LT(_NUM,KC_ESC),KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL, KC_BSPC, KC_BSPC, KC_DEL, 
        KC_TAB,           KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,       KC_PGUP, 
        LT(_FUNC,KC_CAPS), KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,    KC_ENT,             KC_PGDN, 
        KC_LSFT, KC_NUBS,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,         KC_UP,        MO(_FUNC), 
        KC_LCTL, KC_LGUI, KC_LALT,        KC_SPC,         KC_SPC,          KC_SPC,          KC_RALT, KC_RCTL, XXXXXXX, KC_LEFT, KC_DOWN,      KC_RGHT),
};

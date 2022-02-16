#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _DVORAK 0
#define _NUMPAD 1
#define _ARROWS 2
#define _LOWER 3
#define _RAISE 4
#define _FUNCS 5
#define _ADJUST 16
#define _QWERTY 17
#define _TEMPLATE 99

#define _LWR MO(_LOWER)
#define _RSE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_DVORAK] = LAYOUT_ortho_4x12( \
 KC_TAB        , KC_QUOT, KC_COMM, KC_DOT , KC_P      , KC_Y  , /* SPLIT */ KC_F  , KC_G      , KC_C   , KC_R   , KC_L , KC_BSPC, \
 LCTL_T(KC_ESC), KC_A   , KC_O   , LT(_NUMPAD, KC_E), LT(_ARROWS, KC_U), KC_I  , /* SPLIT */ KC_D  , KC_H      , KC_T   , LT(_FUNCS, KC_N)   , KC_S , KC_MINS, \
 KC_LSFT       , KC_SCLN, KC_Q   , KC_J   , KC_K      , KC_X  , /* SPLIT */ KC_B  , KC_M      , KC_W   , KC_V   , KC_Z , KC_ENT , \
 MO(_ADJUST)   , KC_LCTL, KC_LALT, KC_LGUI, MO(_LOWER), KC_SPC, /* SPLIT */ KC_SPC, MO(_RAISE), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT \
),

[_NUMPAD] = LAYOUT_ortho_4x12( \
 _______, KC_LSFT, KC_LSFT, _______, KC_LSFT, _______, /* SPLIT */ _______, KC_1, KC_2, KC_3, KC_SLSH, _______, \
 _______, KC_LCTL, KC_LCTL, _______, KC_LCTL, _______, /* SPLIT */ _______, KC_4, KC_5, KC_6, KC_ASTR, _______, \
 _______, KC_LALT, KC_LALT, _______, KC_LALT, _______, /* SPLIT */ _______, KC_7, KC_8, KC_9, KC_PLUS, _______, \
 _______, _______, _______, _______, _______, KC_LGUI, /* SPLIT */ _______, KC_0, KC_COMM, KC_DOT, KC_MINS, _______ \
),

[_ARROWS] = LAYOUT_ortho_4x12( \
 _______, KC_LSFT, KC_LSFT, KC_LSFT, _______, _______, /* SPLIT */ _______, KC_PGUP, KC_UP, KC_PGDN, _______, _______, \
 _______, KC_LCTL, KC_LCTL, KC_LCTL, _______, _______, /* SPLIT */ _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, \
 _______, KC_LALT, KC_LALT, KC_LALT, _______, _______, /* SPLIT */ KC_INS,  KC_BSPC, KC_DEL, KC_HOME, KC_END, _______, \
 _______, _______, _______, _______, _______, _______, /* SPLIT */ _______, _______, _______, _______, _______, _______ \
),

[_FUNCS] = LAYOUT_ortho_4x12( \
 _______, _______, KC_F1, KC_F2, KC_F3, _______, /* SPLIT */    _______, KC_LSFT, KC_LSFT, _______, KC_LSFT, _______, \
 _______, _______, KC_F4, KC_F5, KC_F6, _______, /* SPLIT */    _______, KC_LCTL, KC_LCTL, _______, KC_LCTL, _______, \
 _______, _______, KC_F7, KC_F8, KC_F9, _______, /* SPLIT */    _______, KC_LALT, KC_LALT, _______, KC_LALT, _______, \
 _______, _______, KC_F10, KC_F11, KC_F12, _______, /* SPLIT */ KC_LGUI, _______, _______, _______, _______, _______ \
),

[_LOWER] = LAYOUT_ortho_4x12( \
  KC_TILD, KC_EXLM , KC_AT  , KC_HASH,  KC_DLR, KC_PERC, /* SPLIT */ KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, \
  KC_DEL ,  _______, KC_LCBR, KC_LPRN, KC_RPRN, KC_RCBR, /* SPLIT */ _______, KC_QUES, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, \
  _______, _______ , _______, KC_LBRC, KC_RBRC, _______, /* SPLIT */ _______, _______, _______, KC_HOME,  KC_END, _______, \
  _______, _______ , _______, _______, _______, _______, /* SPLIT */ _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY  \
),

[_RAISE] = LAYOUT_ortho_4x12( \
  KC_GRV ,  KC_1  ,    KC_2,    KC_3,    KC_4 ,    KC_5, /* SPLIT */ KC_6, KC_7  ,    KC_8,    KC_9 ,    KC_0, KC_BSPC, \
  KC_DEL ,  KC_F1 ,   KC_F2,   KC_F3,   KC_F4 ,   KC_F5, /* SPLIT */ _______, KC_SLSH, KC_EQL ,  KC_LBRC, KC_RBRC, KC_BSLS, \
  _______, KC_F6  ,   KC_F7,   KC_F8,   KC_F9,  KC_F10, /* SPLIT */  _______, _______ , _______, KC_PGUP , KC_PGDN, _______, \
  _______, _______, _______, _______, KC_F11 , KC_F12, /* SPLIT */   _______, _______  , KC_MNXT, KC_VOLD , KC_VOLU, KC_MPLY \
),

[_ADJUST] =  LAYOUT_ortho_4x12( \
  _______, RESET  , _______, _______, _______ , _______ , /* SPLIT */ _______, _______     , _______     , _______, _______, KC_DEL , \
  _______, _______, _______,   AU_ON,   AU_OFF,  AG_NORM, /* SPLIT */ AG_SWAP, TO(_DVORAK) , TO(_QWERTY) , _______, _______, RESET  ,  \
  _______, _______, _______, _______, _______ , _______ , /* SPLIT */ _______, _______     , _______     , _______, _______, _______, \
  _______, _______, _______, _______, _______ , _______ , /* SPLIT */ _______, _______     , _______     , _______, _______, _______ \
),

[_QWERTY] = LAYOUT_ortho_4x12( \
  KC_TAB     ,  KC_Q   ,    KC_W,    KC_E,    KC_R   ,    KC_T , /* SPLIT */    KC_Y,    KC_U    ,    KC_I   ,    KC_O,    KC_P   ,    KC_BSPC, \
  KC_ESC     ,  KC_A   ,    KC_S,    KC_D,    KC_F   ,    KC_G , /* SPLIT */    KC_H,    KC_J    ,    KC_K   ,    KC_L,    KC_SCLN, KC_QUOT   , \
  KC_LSFT    , KC_Z    ,    KC_X,    KC_C,    KC_V   ,    KC_B , /* SPLIT */    KC_N,    KC_M    ,    KC_COMM, KC_DOT ,  KC_SLSH  , KC_ENT    , \
  MO(_ADJUST),  KC_LCTL, KC_LALT, KC_LGUI, MO(_LOWER),   KC_SPC, /* SPLIT */  KC_SPC,  MO(_RAISE),   KC_LEFT , KC_DOWN, KC_UP     ,   KC_RGHT \
),

[_TEMPLATE] = LAYOUT_ortho_4x12( \
 _______, _______, _______, _______, _______, _______, /* SPLIT */ _______, _______, _______, _______, _______, _______, \
 _______, _______, _______, _______, _______, _______, /* SPLIT */ _______, _______, _______, _______, _______, _______, \
 _______, _______, _______, _______, _______, _______, /* SPLIT */ _______,  _______, _______, _______, _______, _______, \
 _______, _______, _______, _______, _______, _______, /* SPLIT */ _______, _______, _______, _______, _______, _______ \
),
};

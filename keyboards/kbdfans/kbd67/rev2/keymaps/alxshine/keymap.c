#include QMK_KEYBOARD_H

enum layers {
    _DVORAK,
    _QWERTY,
    _ADJUST,
    _NUMPAD,
    _ARROWS,
    _FUNCSL,
    _PARENS,
    _MEDIAR,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DVORAK] = LAYOUT_all(
      KC_GRV        , KC_1          , KC_2   , KC_3             , KC_4             , KC_5   , KC_6   , KC_7             , KC_8   , KC_9             , KC_0   , KC_LBRC , KC_RBRC , KC_DEL , KC_BSPC, KC_HOME, 
      KC_TAB        , KC_QUOT       , KC_COMM, KC_DOT           , KC_P             , KC_Y   , KC_F   , KC_G             , KC_C   , KC_R             , KC_L   , KC_SLSH , KC_EQL  , KC_BSLS, KC_PGUP, 
      LCTL_T(KC_ESC), KC_A          , KC_O   , LT(_NUMPAD, KC_E), LT(_ARROWS, KC_U), KC_I   , KC_D   , LT(_PARENS, KC_H), KC_T   , LT(_FUNCSL, KC_N), KC_S   , KC_MINS , KC_ENT  , KC_PGDN, 
      KC_LSFT       , _______       , KC_SCLN, KC_Q             , KC_J             , KC_K   , KC_X   , KC_B             , KC_M   , KC_W             , KC_V   , KC_Z    , KC_RSFT , KC_UP  , KC_END , 
      KC_TAB        , KC_LGUI       , KC_LALT, LGUI_T(KC_BSPC)  , MO(_ADJUST)      , KC_SPC , KC_RALT, MO(_ADJUST)      , KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT), 

    [_QWERTY] = LAYOUT_all(
      KC_GRV , KC_1   , KC_2   , KC_3  , KC_4        , KC_5  , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS , KC_EQL , KC_DEL , KC_BSPC, KC_F3, 
      KC_TAB , KC_Q   , KC_W   , KC_E  , KC_R        , KC_T  , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC , KC_RBRC, KC_BSLS, KC_F1, 
      KC_LCTL, KC_A   , KC_S   , KC_D  , KC_F        , KC_G  , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT , KC_ENT , KC_F2  ,
      KC_LSFT, KC_NUBS, KC_Z   , KC_X  , KC_C        , KC_V  , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH , KC_RSFT, KC_UP  , KC_F4, 
      KC_ESC , KC_LGUI, KC_LALT, KC_SPC, OSL(_ADJUST), KC_SPC, KC_RALT, KC_RCTL, _______, KC_LEFT, KC_DOWN, KC_RGHT), 

    [_ADJUST] = LAYOUT_all(
    _______      , _______    , _______    , _______, _______, _______, _______, _______, _______      , _______      , _______, _______, _______, _______, _______, _______, 
    _______      , _______    , _______    , _______, _______, _______, _______, _______, A(S(G(KC_C))), A(S(G(KC_R))), _______, _______, _______, _______, _______, 
    G(S(A(KC_T))), TO(_DVORAK), TO(_QWERTY), _______, _______, _______, _______, KC_MPRV, KC_VOLU      , KC_VOLD      , KC_MNXT, _______, QK_BOOT, _______, 
    _______      , _______    , _______    , _______, _______, _______, _______, _______, KC_MUTE      , _______      , _______, _______, _______, _______, _______, 
    _______      , _______    , _______    , _______, _______, KC_MPLY, _______, _______, _______      , _______      , _______, _______
    ),
    [_NUMPAD] = LAYOUT_all(
    _______, _______, _______, _______, _______, _______, _______ , _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, KC_LSFT, KC_LSFT, _______, KC_LSFT, _______, _______ , KC_1   , KC_2   , KC_3   , _______, _______, _______, _______, _______, 
    _______, KC_LCTL, KC_LCTL, KC_TRNS, KC_LCTL, _______, _______ , KC_4   , KC_5   , KC_6   , _______, _______, _______, _______, 
    _______, KC_LALT, KC_LALT, _______, KC_LALT, _______, _______ , _______, KC_7   , KC_8   , KC_9   , _______, _______, _______, _______, 
    _______, _______, _______, KC_LGUI, _______, KC_0   , KC_COMMA, KC_DOT , _______, _______, _______, _______
    ), 
    [_ARROWS] = LAYOUT_all(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, KC_LSFT, KC_LSFT, KC_LSFT, _______, _______, _______, KC_PGUP, KC_UP  , KC_PGDN, _______, _______, _______, _______, _______, 
    _______, KC_LCTL, KC_LCTL, KC_LCTL, KC_TRNS, _______, KC_TAB , KC_LEFT, KC_DOWN, KC_RGHT, KC_INS , _______, _______, _______, 
    _______, KC_LALT, KC_LALT, KC_LALT, _______, _______, _______, KC_TAB , KC_BSPC, KC_DEL , KC_HOME, KC_END , _______, _______, _______, 
    _______, _______, _______, KC_LGUI, _______, _______, _______, _______, _______, _______, _______, _______
    ), 
    [_FUNCSL] = LAYOUT_all(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , _______, _______, KC_LSFT, KC_LSFT, _______, KC_LSFT, _______, _______, _______, _______, 
    _______, KC_F5  , KC_F6  , KC_F7  , KC_F8  , _______, _______, KC_LCTL, KC_LCTL, KC_TRNS, KC_LCTL, _______, _______, _______, 
    _______, _______, KC_F9  , KC_F10 , KC_F11 , KC_F12 , _______, _______, KC_LALT, KC_LALT, _______, KC_LALT, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ), 
    [_PARENS] = LAYOUT_all(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, KC_GRV , KC_LCBR, KC_LPRN, KC_RPRN, KC_RCBR, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, KC_LBRC, KC_RBRC, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ), 
    [_MEDIAR] = LAYOUT_all(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ), 
};

#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // Enables RGB, without saving settings
  rgblight_sethsv_noeeprom(HSV_GREEN);
  rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING);
}

layer_state_t layer_state_set_user(layer_state_t state) {
  switch (biton32(state)){
    case _DVORAK:
      rgblight_sethsv_noeeprom(HSV_GREEN);
      rgblight_mode_noeeprom(RGBLIGHT_MODE_BREATHING);
      break;
    case _QWERTY:
      rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_SWIRL);
      break;
    case _ADJUST:
      rgblight_mode_noeeprom(RGBLIGHT_MODE_KNIGHT);
      break;
    case _NUMPAD:
      rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
      rgblight_sethsv_noeeprom(HSV_BLUE);
      break;
    case _ARROWS:
      rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
      rgblight_sethsv_noeeprom(HSV_RED);
      break;
    case _FUNCSL:
      rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
      rgblight_sethsv_noeeprom(HSV_YELLOW);
      break;
    case _PARENS:
      rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
      rgblight_sethsv_noeeprom(HSV_PURPLE);
      break;
    case _MEDIAR:
      rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
      rgblight_sethsv_noeeprom(HSV_CYAN);
      break;
  }

  return state;
}
#endif

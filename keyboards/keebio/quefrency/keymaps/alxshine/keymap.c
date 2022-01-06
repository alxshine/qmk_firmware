#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_65_with_macro( // dvorak
            KC_MUTE          , KC_MPLY  , KC_GRV          , KC_1      , KC_2      , KC_3           , KC_4          , KC_5     , KC_6     , KC_7           , KC_8     , KC_9           , KC_0     , KC_LBRC  , KC_RBRC  , KC_DEL   , KC_BSPC  , KC_HOME,
            KC_MPRV          , KC_MNXT  , KC_TAB          , KC_QUOT   , KC_COMM   , KC_DOT         , KC_P          , KC_Y     , KC_F     , KC_G           , KC_C     , KC_R           , KC_L     , KC_SLSH  , KC_EQL   , KC_BSLS  , KC_PGUP,
            _______          , _______  , LCTL_T(KC_ESC)  , KC_A      , KC_O      , LT(3,KC_E)     , LT(4,KC_U)    , KC_I     , KC_D     , LT(6,KC_H)     , KC_T     , LT(7,KC_N)     , KC_S     , KC_MINS  , KC_ENT   , KC_PGDN,
            KC_CUT           , KC_COPY  , KC_LSFT         , KC_SCLN   , KC_Q      , KC_J           , KC_K          , KC_X     , KC_B     , KC_M           , KC_W     , KC_V           , KC_Z     , KC_RSFT  , KC_UP    , KC_END ,
            _______          , KC_PSTE  , TO(2)           , KC_LCTL   , KC_LGUI   , KC_LALT        , KC_SPC        , KC_SPC   , KC_SPC   , KC_RALT        , KC_RCTL  , _______        , KC_LEFT  , KC_DOWN  , KC_RGHT
    ),
	[1] = LAYOUT_65_with_macro( // qwerty
            KC_MUTE          , KC_MPLY  , KC_GRV          , KC_1      , KC_2      , KC_3           , KC_4          , KC_5     , KC_6     , KC_7           , KC_8     , KC_9           , KC_0     , KC_MINS  , KC_EQL   , KC_BSPC  , KC_DEL   , KC_HOME,
            KC_MPRV          , KC_MNXT  , KC_TAB          , KC_Q      , KC_W      , KC_E           , KC_R          , KC_T     , KC_Z     , KC_U           , KC_I     , KC_O           , KC_P     , KC_LBRC  , KC_RBRC  , KC_BSLS  , KC_PGUP,
            _______          , KC_ESC   , LT(5,KC_LCTL)   , KC_A      , KC_S      , KC_D           , KC_F          , KC_G     , KC_H     , KC_J           , KC_K     , KC_L           , KC_SCLN  , KC_QUOT  , KC_ENT   , KC_PGDN,
            KC_CUT           , KC_COPY  , KC_LSFT         , KC_Z      , KC_X      , KC_C           , KC_V          , KC_B     , KC_N     , KC_M           , KC_COMM  , KC_DOT         , KC_SLSH  , KC_RSFT  , KC_UP    , KC_END ,
            _______          , KC_COPY  , TO(2)           , KC_LCTL   , KC_LGUI   , KC_LALT        , KC_SPC        , KC_SPC   , KC_SPC   , KC_RALT        , KC_RCTL  , _______        , KC_LEFT  , KC_DOWN  , KC_RGHT
    ),
	[2] = LAYOUT_65_with_macro( // adjust
            KC_MUTE          , _______  , _______         , _______   , _______   , _______        , _______       , _______  , _______  , _______        , _______  , _______        , _______  , _______  , _______  , _______  , _______  , KC_HOME,
            _______          , _______  , _______         , _______   , _______   , _______        , _______       , _______  , _______  , _______        , _______  , _______        , _______  , _______  , _______  , _______  , _______  ,
            _______          , _______  , _______         , TO(0)     , TO(1)     , _______        , _______       , _______  , _______  , _______        , _______  , _______        , _______  , _______  , _______  , _______  ,
            _______          , _______  , _______         , _______   , _______   , _______        , _______       , _______  , _______  , _______        , _______  , _______        , _______  , _______  , _______  , _______  ,
            _______          , _______  , KC_TRNS         , _______   , _______   , _______        , RESET         , _______  , _______  , _______        , _______  , _______        , _______  , _______  , _______
    ),
	[3] = LAYOUT_65_with_macro( // numpad on right
            KC_MUTE          , _______  , _______         , _______   , _______   , _______        , _______       , _______  , _______  , _______        , _______  , _______        , KC_SLSH  , _______  , _______  , KC_DEL   , KC_BSPC  , KC_HOME,
            _______          , _______  , _______         , KC_LSFT   , KC_LSFT   , _______        , KC_LSFT       , _______  , _______  , KC_1           , KC_2     , KC_3           , KC_ASTR  , _______  , _______  , _______  , _______  ,
            _______          , _______  , _______         , KC_LCTRL  , KC_LCTRL  , _______        , KC_LCTRL      , _______  , _______  , KC_4           , KC_5     , KC_6           , KC_PLUS  , _______  , _______  , _______  ,
            _______          , _______  , _______         , KC_LALT   , KC_LALT   , _______        , KC_LALT       , _______  , _______  , KC_7           , KC_8     , KC_9           , KC_MINS  , _______  , _______  , _______  ,
            _______          , _______  , _______         , _______   , _______   , KC_LALT        , KC_LGUI       , KC_0     , KC_0     , KC_COMM        , KC_DOT   , _______        , _______  , _______  , _______) ,
	[4] = LAYOUT_65_with_macro( // arrows on right
            KC_MUTE          , _______  , _______         , _______   , _______   , _______        , _______       , _______  , _______  , _______        , _______  , _______        , _______  , _______  , _______  , _______  , _______  , KC_HOME,
            _______          , _______  , _______         , KC_LSFT   , KC_LSFT   , KC_LSFT        , _______       , _______  , _______  , KC_PGUP        , KC_UP    , KC_PGDN        , _______  , _______  , _______  , _______  , _______  ,
            _______          , _______  , _______         , KC_LCTL   , KC_LCTL   , KC_LCTL        , _______       , _______  , _______  , KC_LEFT        , KC_DOWN  , KC_RGHT        , KC_INS   , _______  , _______  , _______  ,
            _______          , _______  , _______         , KC_LALT   , KC_LALT   , KC_LALT        , _______       , _______  , KC_INS   , KC_BSPC        , KC_DEL   , KC_HOME        , KC_END   , _______  , _______  , _______  ,
            _______          , _______  , _______         , _______   , _______   , _______        , KC_LGUI       , _______  , _______  , _______        , _______  , _______        , _______  , _______  , _______
    ),
	[5] = LAYOUT_65_with_macro( // numpad from qwerty (on left)
            KC_MUTE          , _______  , _______         , _______   , _______   , _______        , _______       , _______  , _______  , _______        , _______  , _______        , _______  , _______  , _______  , _______  , _______  , KC_HOME,
            _______          , _______  , KC_LSFT         , KC_1      , KC_2      , KC_3           , _______       , _______  , _______  , _______        , _______  , _______        , _______  , _______  , _______  , _______  , _______  , _______  ,
            _______          , KC_TRNS  , KC_4            , KC_5      , KC_6      , _______        , _______       , _______  , _______  , _______        , _______  , _______        , _______  , _______  , _______  ,
            _______          , _______  , _______         , KC_7      , KC_8      , KC_9           , _______       , _______  , _______  , _______        , _______  , _______        , _______  , _______  , _______  , _______  ,
            _______          , _______  , _______         , _______   , _______   , KC_LCTL        , KC_LALT       , _______  , _______  , _______        , _______  , _______        , _______  , _______  , _______
    ),
	[6] = LAYOUT_65_with_macro( // parens, braces, brackets
            KC_MUTE          , _______  , _______         , _______   , _______   , _______        , _______       , _______  , _______  , _______        , _______  , _______        , _______  , _______  , _______  , _______  , _______  , KC_HOME,
            _______          , _______  , _______         , _______   , _______   , _______        , _______       , _______  , _______  , _______        , KC_LSFT  , KC_LSFT        , KC_LSFT  , _______  , _______  , _______  , _______  ,
            _______          , _______  , _______         , _______   , KC_LCBR   , KC_LPRN        , KC_RPRN       , KC_RCBR  , _______  , KC_TRNS        , KC_LCTL  , KC_LCTL        , KC_LCTL  , _______  , _______  , _______  ,
            _______          , _______  , _______         , _______   , _______   , KC_LBRC        , KC_RBRC       , _______  , _______  , _______        , KC_LALT  , KC_LALT        , KC_LALT  , _______  , _______  , _______  ,
            _______          , _______  , _______         , _______   , _______   , _______        , _______       , _______  , _______  , _______        , _______  , _______        , _______  , _______  , _______
    ),
	[7] = LAYOUT_65_with_macro( // F keys on left
            KC_MUTE          , _______  , _______         , _______   , _______   , _______        , _______       , _______  , _______  , _______        , _______  , _______        , _______  , _______  , _______  , _______  , _______  , KC_HOME,
            _______          , _______  , _______         , _______   , KC_F1     , KC_F2          ,  KC_F3        , _______  , _______  , KC_LSFT        , KC_LSFT  , _______        , KC_LSFT  , _______  , _______  , _______  , _______  ,
            _______          , _______  , _______         , _______   , KC_F4     , KC_F5          , KC_F6         , _______  , _______  , KC_LCTL        , KC_LCTL  , _______        , KC_LCTL  , _______  , _______  , _______  ,
            _______          , _______  , _______         , _______   , KC_F7     , KC_F8          , KC_F9         , _______  , _______  , KC_LALT        , KC_LALT  , _______        , KC_LALT  , _______  , _______  , _______  ,
            KC_WH_U          , _______  , _______         , _______   , KC_F10    , KC_F11         , KC_F12        , _______  , _______  , _______        , _______  , _______        , _______  , _______  , _______
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { // left encoder
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else { // right encoder
        if (clockwise) {
            tap_code(KC_WH_D);
        } else {
            tap_code(KC_WH_U);
        }
    }
    return true;
}

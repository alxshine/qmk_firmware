#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_65_with_macro( // dvorak
            KC_MUTE, KC_MPLY, /* MACRO_LEFT */ KC_GRV        , KC_1    , KC_2    , KC_3      , KC_4      , KC_5   , KC_6       /*   SPLIT    */ , KC_7   , KC_8      , KC_9   , KC_0      , KC_LBRC, KC_RBRC, KC_DEL ,          /* MACRO_RIGHT */ KC_BSPC, KC_HOME,
            KC_MPRV, KC_MNXT, /* MACRO_LEFT */ KC_TAB        , KC_QUOT , KC_COMM , KC_DOT    , KC_P      , KC_Y   , KC_F, KC_G /*   SPLIT    */ , KC_C   , KC_R      , KC_L   , KC_SLSH   , KC_EQL ,                            /* MACRO_RIGHT */ KC_BSLS, KC_PGUP,
            _______, _______, /* MACRO_LEFT */ LCTL_T(KC_ESC), KC_A    , KC_O    , LT(3,KC_E), LT(4,KC_U), KC_I                /*   SPLIT    */ , KC_D   , LT(6,KC_H), KC_T   , LT(7,KC_N), KC_S   , KC_MINS,                   /* MACRO_RIGHT */ KC_ENT , KC_PGDN,
            KC_CUT , KC_COPY, /* MACRO_LEFT */ KC_LSFT       , KC_SCLN , KC_Q    , KC_J      , KC_K      , KC_X                /*   SPLIT    */ , KC_B   , KC_M      , KC_W   , KC_V      , KC_Z   , KC_RSFT,                   /* MACRO_RIGHT */ KC_UP  , KC_END,
            _______, KC_PSTE, /* MACRO_LEFT */ TO(2)         , KC_LCTL , KC_LGUI , KC_LALT   , KC_SPC    , KC_SPC              /*   SPLIT    */ , KC_SPC , KC_RALT   , KC_RCTL, _______   , KC_LEFT,                            /* MACRO_RIGHT */ KC_DOWN, KC_RGHT
    ),
	[1] = LAYOUT_65_with_macro( // qwerty
            KC_MUTE, KC_MPLY, /* MACRO_LEFT */ KC_GRV        , KC_1    , KC_2    , KC_3      , KC_4      , KC_5   , KC_6       /*   SPLIT    */ , KC_7   , KC_8      , KC_9   , KC_0      , KC_MINS, KC_EQL , KC_BSPC,          /* MACRO_RIGHT */ KC_DEL , KC_HOME,
            KC_MPRV, KC_MNXT, /* MACRO_LEFT */ KC_TAB        , KC_Q    , KC_W    , KC_E      , KC_R      , KC_T                /*   SPLIT    */ , KC_Z   , KC_U      , KC_I   , KC_O      , KC_P   , KC_LBRC, KC_RBRC,          /* MACRO_RIGHT */ KC_BSLS, KC_PGUP,
            _______, KC_ESC , /* MACRO_LEFT */ LT(5,KC_LCTL) , KC_A    , KC_S    , KC_D      , KC_F      , KC_G                /*   SPLIT    */ , KC_H   , KC_J      , KC_K   , KC_L      , KC_SCLN, KC_QUOT,                   /* MACRO_RIGHT */ KC_ENT , KC_PGDN,
            KC_CUT , KC_COPY, /* MACRO_LEFT */ KC_LSFT       , KC_Z    , KC_X    , KC_C      , KC_V      , KC_B                /*   SPLIT    */ , KC_N   , KC_M      , KC_COMM, KC_DOT    , KC_SLSH, KC_RSFT,                   /* MACRO_RIGHT */ KC_UP  , KC_END,
            _______, KC_COPY, /* MACRO_LEFT */ TO(2)         , KC_LCTL , KC_LGUI , KC_LALT   , KC_SPC    , KC_SPC              /*   SPLIT    */ , KC_SPC , KC_RALT   , KC_RCTL, _______   , KC_LEFT,                            /* MACRO_RIGHT */ KC_DOWN, KC_RGHT
    ),
	[2] = LAYOUT_65_with_macro( // adjust
            KC_MUTE, _______, /* MACRO_LEFT */ _______       , _______ , _______ , _______   , _______   , _______, _______    /*   SPLIT    */ , _______, _______   , _______, _______   , _______, _______, _______,          /* MACRO_RIGHT */ _______, KC_HOME,
            _______, _______, /* MACRO_LEFT */ _______       , _______ , _______ , _______   , _______   , _______             /*   SPLIT    */ , _______, _______   , _______, _______   , _______, _______, _______,          /* MACRO_RIGHT */ _______, _______,
            _______, _______, /* MACRO_LEFT */ _______       , TO(0)   , TO(1)   , _______   , _______   , _______             /*   SPLIT    */ , _______, _______   , _______, _______   , _______, _______,                   /* MACRO_RIGHT */ _______, _______,
            _______, _______, /* MACRO_LEFT */ _______       , _______ , _______ , _______   , _______   , _______             /*   SPLIT    */ , _______, _______   , _______, _______   , _______, _______,                   /* MACRO_RIGHT */ _______, _______,
            _______, _______, /* MACRO_LEFT */ KC_TRNS       , _______ , _______ , _______   , RESET     , _______             /*   SPLIT    */ , _______, _______   , _______, _______   , _______,                            /* MACRO_RIGHT */ _______, _______
    ),
	[3] = LAYOUT_65_with_macro( // numpad on right
            KC_MUTE, _______, /* MACRO_LEFT */ _______       , _______ , _______ , _______   , _______   , _______, _______    /*   SPLIT    */ , _______, _______   , _______, KC_SLSH   , _______, _______, KC_DEL ,          /* MACRO_RIGHT */ KC_BSPC, KC_HOME,
            _______, _______, /* MACRO_LEFT */ _______       , KC_LSFT , KC_LSFT , _______   , KC_LSFT   , _______             /*   SPLIT    */ , _______, KC_1      , KC_2   , KC_3      , KC_ASTR, _______, _______,          /* MACRO_RIGHT */ _______, _______,
            _______, _______, /* MACRO_LEFT */ _______       , KC_LCTRL, KC_LCTRL, _______   , KC_LCTRL  , _______             /*   SPLIT    */ , _______, KC_4      , KC_5   , KC_6      , KC_PLUS, _______,                   /* MACRO_RIGHT */ _______, _______,
            _______, _______, /* MACRO_LEFT */ _______       , KC_LALT , KC_LALT , _______   , KC_LALT   , _______             /*   SPLIT    */ , _______, KC_7      , KC_8   , KC_9      , KC_MINS, _______,                   /* MACRO_RIGHT */ _______, _______,
            _______, _______, /* MACRO_LEFT */ _______       , _______ , _______ , KC_LALT   , KC_LGUI   , KC_0                /*   SPLIT    */ , KC_0   , KC_COMM   , KC_DOT , _______   , _______,                            /* MACRO_RIGHT */ _______, _______),
	[4] = LAYOUT_65_with_macro( // arrows on right
            KC_MUTE, _______, /* MACRO_LEFT */ _______       , _______ , _______ , _______   , _______   , _______, _______    /*   SPLIT    */ , _______, _______   , _______, _______   , _______, _______, _______,          /* MACRO_RIGHT */ _______, KC_HOME,
            _______, _______, /* MACRO_LEFT */ _______       , KC_LSFT , KC_LSFT , KC_LSFT   , _______   , _______             /*   SPLIT    */ , _______, KC_PGUP   , KC_UP  , KC_PGDN   , _______, _______, _______,          /* MACRO_RIGHT */ _______, _______,
            _______, _______, /* MACRO_LEFT */ _______       , KC_LCTL , KC_LCTL , KC_LCTL   , _______   , _______             /*   SPLIT    */ , _______, KC_LEFT   , KC_DOWN, KC_RGHT   , KC_INS , _______,                   /* MACRO_RIGHT */ _______, _______,
            _______, _______, /* MACRO_LEFT */ _______       , KC_LALT , KC_LALT , KC_LALT   , _______   , _______             /*   SPLIT    */ , KC_INS , KC_BSPC   , KC_DEL , KC_HOME   , KC_END , _______,                   /* MACRO_RIGHT */ _______, _______,
            _______, _______, /* MACRO_LEFT */ _______       , _______ , _______ , _______   , KC_LGUI   , _______             /*   SPLIT    */ , _______, _______   , _______, _______   , _______,                            /* MACRO_RIGHT */ _______, _______
    ),
	[5] = LAYOUT_65_with_macro( // numpad from qwerty (on left)
            KC_MUTE, _______, /* MACRO_LEFT */ _______       , _______ , _______ , _______   , _______   , _______, _______    /*   SPLIT    */ , _______, _______   , _______, _______   , _______, _______, _______,          /* MACRO_RIGHT */ _______, KC_HOME,
            _______, _______, /* MACRO_LEFT */ KC_LSFT       , KC_1    , KC_2    , KC_3      , _______   , _______             /*   SPLIT    */ , _______, _______   , _______, _______   , _______, _______, _______, _______, /* MACRO_RIGHT */ _______, _______,
            _______, KC_TRNS, /* MACRO_LEFT */ KC_4          , KC_5    , KC_6    , _______   , _______   , _______             /*   SPLIT    */ , _______, _______   , _______, _______   , _______,                            /* MACRO_RIGHT */ _______, _______,
            _______, _______, /* MACRO_LEFT */ _______       , KC_7    , KC_8    , KC_9      , _______   , _______             /*   SPLIT    */ , _______, _______   , _______, _______   , _______, _______,                   /* MACRO_RIGHT */ _______, _______,
            _______, _______, /* MACRO_LEFT */ _______       , _______ , _______ , KC_LCTL   , KC_LALT   , _______             /*   SPLIT    */ , _______, _______   , _______, _______   , _______,                            /* MACRO_RIGHT */ _______, _______
    ),
	[6] = LAYOUT_65_with_macro( // parens, braces, brackets
            KC_MUTE, _______, /* MACRO_LEFT */ _______       , _______ , _______ , _______   , _______   , _______, _______    /*   SPLIT    */ , _______, _______   , _______, _______   , _______, _______, _______,          /* MACRO_RIGHT */ _______, KC_HOME,
            _______, _______, /* MACRO_LEFT */ _______       , _______ , _______ , _______   , _______   , _______             /*   SPLIT    */ , _______, _______   , KC_LSFT, KC_LSFT   , KC_LSFT, _______, _______,          /* MACRO_RIGHT */ _______, _______,
            _______, _______, /* MACRO_LEFT */ _______       , _______ , KC_LCBR , KC_LPRN   , KC_RPRN   , KC_RCBR             /*   SPLIT    */ , _______, KC_TRNS   , KC_LCTL, KC_LCTL   , KC_LCTL, _______,                   /* MACRO_RIGHT */ _______, _______,
            _______, _______, /* MACRO_LEFT */ _______       , _______ , _______ , KC_LBRC   , KC_RBRC   , _______             /*   SPLIT    */ , _______, _______   , KC_LALT, KC_LALT   , KC_LALT, _______,                   /* MACRO_RIGHT */ _______, _______,
            _______, _______, /* MACRO_LEFT */ _______       , _______ , _______ , _______   , _______   , _______             /*   SPLIT    */ , _______, _______   , _______, _______   , _______,                            /* MACRO_RIGHT */ _______, _______
    ),
	[7] = LAYOUT_65_with_macro( // F keys on left
            KC_MUTE, _______, /* MACRO_LEFT */ _______       , _______ , _______ , _______   , _______   , _______, _______    /*   SPLIT    */ , _______, _______   , _______, _______   , _______, _______, _______,          /* MACRO_RIGHT */ _______, KC_HOME,
            _______, _______, /* MACRO_LEFT */ _______       , _______ , KC_F1   , KC_F2     ,  KC_F3    , _______             /*   SPLIT    */ , _______, KC_LSFT   , KC_LSFT, _______   , KC_LSFT, _______, _______,          /* MACRO_RIGHT */ _______, _______,
            _______, _______, /* MACRO_LEFT */ _______       , _______ , KC_F4   , KC_F5     , KC_F6     , _______             /*   SPLIT    */ , _______, KC_LCTL   , KC_LCTL, _______   , KC_LCTL, _______,                   /* MACRO_RIGHT */ _______, _______,
            _______, _______, /* MACRO_LEFT */ _______       , _______ , KC_F7   , KC_F8     , KC_F9     , _______             /*   SPLIT    */ , _______, KC_LALT   , KC_LALT, _______   , KC_LALT, _______,                   /* MACRO_RIGHT */ _______, _______,
            KC_WH_U, _______, /* MACRO_LEFT */ _______       , _______ , KC_F10  , KC_F11    , KC_F12    , _______             /*   SPLIT    */ , _______, _______   , _______, _______   , _______,                            /* MACRO_RIGHT */ _______, _______
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

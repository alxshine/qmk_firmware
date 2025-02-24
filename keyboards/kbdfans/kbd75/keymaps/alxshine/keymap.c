#include QMK_KEYBOARD_H

/** NUMBER OF FIELDS PER ROW:
     * 16
     * 16
     * 15
     * 14
     * 15
     * 12
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	LAYOUT( // qwerty
    	KC_ESC , KC_F1  , KC_F2  , KC_F3 , KC_F4 , KC_F5 , KC_F6  , KC_F7, KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_PSCR, KC_INS , KC_DEL,

		KC_GRV , KC_1   , KC_2   , KC_3  , KC_4  , KC_5  , KC_6   , KC_7 , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_DEL , KC_BSPC, KC_HOME,
		KC_TAB , KC_Q   , KC_W   , KC_E  , KC_R  , KC_T  , KC_Y   , KC_U , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,
		KC_LCTL, KC_A   , KC_S   , KC_D  , KC_F  , KC_G  , KC_H   , KC_J , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_ENT , KC_PGDN,
		KC_LSFT, KC_NO  , KC_Z   , KC_X  , KC_C  , KC_V  , KC_B   , KC_N , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT, KC_UP  , KC_END,

		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, KC_RALT, MO(2), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),
	LAYOUT( // dvorak
    	KC_ESC        , KC_F1  , KC_F2  , KC_F3     , KC_F4     , KC_F5 , KC_F6  , KC_F7     , KC_F8  , KC_F9     , KC_F10 , KC_F11 , KC_F12 , KC_PSCR, KC_INS , KC_DEL,

        KC_GRV        , KC_1   , KC_2   , KC_3      , KC_4      , KC_5  , KC_6   , KC_7      , KC_8   , KC_9      , KC_0   , KC_LBRC, KC_RBRC, KC_NO  , KC_BSPC, KC_HOME,
        KC_TAB        , KC_QUOT, KC_COMM, KC_DOT    , KC_P      , KC_Y  , KC_F   , KC_G      , KC_C   , KC_R      , KC_L   , KC_SLSH, KC_EQL , KC_BSLS, KC_PGUP,
        LCTL_T(KC_ESC), KC_A   , KC_O   , LT(4,KC_E), LT(3,KC_U), KC_I  , KC_D   , LT(5,KC_H), KC_T   , LT(6,KC_N), KC_S   , KC_MINS, LALT_T(KC_ENT),
        KC_PGDN       , KC_LSFT, KC_NO  , KC_SCLN   , KC_Q      , KC_J  , KC_K   , KC_X      , KC_B   , KC_M      , KC_W   , KC_V   , KC_Z   , KC_RSFT, KC_UP  , KC_END,

        KC_LCTL       , KC_LGUI, KC_LALT, KC_SPC    , KC_SPC    , KC_SPC, KC_RALT, MO(2)     , KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),
	LAYOUT( // adjust
    	KC_NO, RESET, EEP_RST, KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

    	KC_NO, KC_NO, KC_NO  , KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    	KC_NO, TO(1), TO(0)  , KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    	KC_NO, KC_NO, KC_NO  , KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

    	KC_NO, KC_NO, KC_NO  , KC_NO, KC_TRNS, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY),
	LAYOUT( // arrows on right
    	KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

    	KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO,
    	KC_NO, KC_NO  , KC_LSFT, KC_LSFT, KC_LSFT, KC_NO, KC_NO, KC_NO  , KC_WH_U, KC_UP  , KC_WH_D, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    	KC_NO, KC_LCTL, KC_LCTL, KC_LCTL, KC_NO  , KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO,
    	KC_NO, KC_LALT, KC_LALT, KC_LALT, KC_SPC , KC_SPC, KC_SPC, KC_BSPC, KC_DEL , KC_HOME, KC_END , KC_NO, KC_NO, KC_NO, KC_NO,

    	KC_NO, KC_NO  , KC_NO  , KC_LGUI, KC_NO  , KC_NO, KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO),
	LAYOUT( // numpad on right
        KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO       , KC_NO, KC_NO  , KC_NO , KC_NO, KC_NO, KC_NO  , KC_NO  , KC_NO , KC_NO  , KC_NO  , KC_NO,

        KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO       , KC_NO, KC_NO  , KC_NO , KC_NO, KC_NO, KC_MINS, KC_NO  , KC_NO , KC_NO  , KC_BSPC, KC_NO,
        KC_NO, KC_LSFT, KC_LSFT, KC_LSFT, KC_LSFT     , KC_NO, KC_NO  , KC_1  , KC_2 , KC_3 , KC_PLUS, KC_NO  , KC_NO , KC_BSPC, KC_NO  ,
        KC_NO, KC_LCTL, KC_LCTL, KC_TRNS, KC_LCTL     , KC_NO, KC_NO  , KC_4  , KC_5 , KC_6 , KC_ASTR, KC_NO  , KC_ENT, KC_NO  ,
        KC_NO, KC_LALT, KC_LALT, KC_LALT, KC_LALT     , KC_NO, KC_NO  , KC_NO , KC_7 , KC_8 , KC_9   , KC_SLSH, KC_NO , KC_NO  , KC_NO  ,

        KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_LGUI     , KC_NO, KC_COMM, KC_DOT, KC_NO, KC_NO, KC_NO  , KC_NO
     ),
	LAYOUT( // paren, brace, and bracket on left
    	KC_NO, KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO , KC_NO, KC_NO, KC_NO, KC_NO, 

        KC_NO, KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO , KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO , KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_LCBR, KC_LPRN, KC_RPRN, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO , KC_NO, KC_NO, 

        KC_NO, KC_NO, KC_NO  , KC_NO  , KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO , KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO), 
	LAYOUT( // FN keys on left
    	KC_NO, KC_NO, KC_NO , KC_NO , KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO  , KC_NO  , KC_NO, KC_NO , KC_NO, KC_NO, KC_NO, KC_NO, 

        KC_NO, KC_NO, KC_NO , KC_NO , KC_NO , KC_NO  , KC_NO, KC_NO, KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_F1, KC_F2 , KC_F3 , KC_F4 , KC_NO  , KC_NO, KC_NO, KC_LSFT, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_F5, KC_F6 , KC_F7 , KC_F8 , KC_RCBR, KC_NO, KC_NO, KC_LCTL, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, 
        KC_NO, KC_NO, KC_F9, KC_F10, KC_F11, KC_F12, KC_RBRC, KC_NO, KC_NO, KC_LALT, KC_LALT, KC_NO, KC_NO, KC_NO, KC_NO, 

        KC_NO, KC_NO, KC_NO , KC_NO , KC_NO  , KC_NO  , KC_NO, KC_NO, KC_NO  , KC_NO  , KC_NO, KC_NO),
};

#include QMK_KEYBOARD_H

// Disable RGB
void keyboard_post_init_user(void) {
    rgblight_disable();
};


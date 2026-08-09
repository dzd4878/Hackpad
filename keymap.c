#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_MPLY, KC_7, KC_8,
        KC_4,    KC_5, KC_6,
        KC_1,    KC_2, KC_3
    )
};

#if defined(ENCODER_ENABLE)
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLU); /* Volume Up */
        } else {
            tap_code(KC_VOLD); /* Volume Down */
        }
    }
    return false;
}
#endif

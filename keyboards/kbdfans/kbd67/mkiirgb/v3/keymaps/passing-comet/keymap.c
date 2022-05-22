#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT_65_ansi_blocker(
            KC_ESC,     KC_1,     KC_2,     KC_3,       KC_4,       KC_5,       KC_6,      KC_7,      KC_8,     KC_9,       KC_0,      KC_MINS,     KC_EQL,    KC_BSPC,    KC_DEL,\
            KC_TAB,     KC_Q,     KC_W,     KC_E,       KC_R,       KC_T,       KC_Y,      KC_U,      KC_I,     KC_O,       KC_P,      KC_LBRC,     KC_RBRC,   KC_BSLASH,  KC_PGUP,\
            KC_CAPS,    KC_A,     KC_S,     KC_D,       KC_F,       KC_G,       KC_H,      KC_J,      KC_K,     KC_L,       KC_SCLN,   KC_QUOT,                KC_ENT,     KC_PGDN,\
            KC_LSFT,    KC_Z,     KC_X,     KC_C,       KC_V,       KC_B,       KC_N,      KC_M,      KC_COMM,  KC_DOT,     KC_SLSH,   KC_RSFT,                KC_UP,      MO(1),\
            KC_LCTL,    KC_LGUI,  KC_LALT,                          KC_SPC,                           KC_RALT,              KC_RCTL,                KC_LEFT,   KC_DOWN,    KC_RIGHT),
        [1] = LAYOUT_65_ansi_blocker(
            KC_PWR,     KC_F1,    KC_F2,    KC_F3,      KC_F4,      KC_F5,      KC_F6,     KC_F7,     KC_F8,    KC_F9,      KC_F10,    KC_F11,      KC_F12,    KC_DEL,     KC_HOME,\
            KC_TRNS,    ALT_F4,   CTRL_W,   RGB_SPI,    RGB_TOG,    RGB_RMOD,   RGB_HUD,   RGB_SAD,   RGB_VAD,  RGB_SPD,    KC_PSCR,   KC_SLCK,     KC_PAUS,   RESET,      KC_MUTE,\
            KC_TRNS,    KC_TRNS,  RGB_SPI,  KC_TRNS,    RGB_TOG,    RGB_MOD,    RGB_HUI,   RGB_SAI,   RGB_VAI,  RGB_SPI,    KC_TRNS,   KC_TRNS,                KC_MPLY,    KC_MUTE,\
            KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    RGB_VAI,    KC_TRNS,   RGB_RMOD,  RGB_MOD,  KC_TRNS,    KC_TRNS,   KC_TRNS,                KC_VOLU,    KC_TRNS,\
            KC_TRNS,    KC_TRNS,  KC_MPRV,                          KC_MPLY,                          KC_MNXT,              KC_TRNS,                KC_MPRV,   KC_VOLD,    KC_MNXT),
        [2] = LAYOUT_65_ansi_blocker(
            KC_TRNS,    KC_F1,    KC_F2,    KC_F3,      KC_F4,      KC_F5,      KC_F6,     KC_F7,     KC_F8,    KC_F9,      KC_F10,    KC_F11,      KC_F12,    KC_TRNS,    KC_TRNS,\
            KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,    KC_TRNS,   KC_TRNS,     KC_TRNS,   KC_TRNS,    KC_TRNS,\
            KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,    KC_TRNS,   KC_TRNS,                KC_TRNS,    KC_TRNS,\
            KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,    KC_TRNS,   KC_TRNS,                KC_TRNS,    KC_TRNS,\
            KC_TRNS,    KC_TRNS,  KC_TRNS,                          KC_TRNS,                          KC_TRNS,              KC_TRNS,                KC_TRNS,   KC_TRNS,    KC_TRNS),
        [3] = LAYOUT_65_ansi_blocker(
            KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,    KC_TRNS,   KC_TRNS,     KC_TRNS,   KC_TRNS,    KC_TRNS,\
            KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,    KC_TRNS,   KC_TRNS,     KC_TRNS,   RESET,      KC_TRNS,\
            KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,    KC_TRNS,   KC_TRNS,                EEP_RST,    KC_TRNS,\
            KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,    KC_TRNS,   KC_TRNS,                KC_TRNS,    KC_TRNS,\
            KC_TRNS,    KC_TRNS,  KC_TRNS,                          KC_TRNS,                          KC_TRNS,              KC_TRNS,                KC_TRNS,   KC_TRNS,    KC_TRNS),
};

// Shift + esc = ~
const key_override_t tilde_esc_override = ko_make_basic(MOD_MASK_SHIFT, KC_ESC, S(KC_GRV));

// Ctrl + esc = `
const key_override_t grave_esc_override = ko_make_basic(MOD_MASK_CTRL, KC_ESC, KC_GRV);

// Shift + bspc = del
const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &tilde_esc_override,
    &grave_esc_override,
    &delete_key_override,
    NULL // Null terminate the array of overrides!
};

bool led_update_user(led_t led_state) {
    if (led_state.caps_lock) {
        if (!rgb_matrix_is_enabled()) {
            /* Turn ON the RGB Matrix for CAPS LOCK */
            rgb_matrix_set_flags(LED_FLAG_NONE);
            rgb_matrix_enable();
        }
    } else if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
        /* RGB Matrix was only ON because of CAPS LOCK. Turn it OFF. */
        rgb_matrix_set_flags(LED_FLAG_ALL);
        rgb_matrix_disable();
    }

    return true;
}

#ifdef RGB_MATRIX_ENABLE
    // Key Matrix to LED Index
    // {  0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 13, 14 },
    // {  15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 },
    // {  30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, __, 42, 43 },
    // {  44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, __, 56, 57 },
    // {  58, 59, 60, __, __, 61, __, __, 62, __, 63, 64, __, 65, 66 }
    void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
        if (host_keyboard_led_state().caps_lock) {
            int leds[4] = {15, 30, 31, 44};
            int i;
            int size = (int)(sizeof(leds)/sizeof(leds[0]));

            for (i = 0; i < size; i++) {
                RGB_MATRIX_INDICATOR_SET_COLOR(leds[i], 0, 127, 255);
            }
        }

        uint8_t layer = get_highest_layer(layer_state);
        if (layer > 0) {
            int leds[4] = {43, 56, 57, 66};
            int i;
            int size = (int)(sizeof(leds)/sizeof(leds[0]));

            for (i = 0; i < size; i++) {
                RGB_MATRIX_INDICATOR_SET_COLOR(leds[i], 0, 255, 127);
            }

            RGB_MATRIX_INDICATOR_SET_COLOR(layer, 0, 255, 127);
        }

        // if (rgb_matrix_get_flags() == LED_FLAG_NONE && layer == 0 && !host_keyboard_led_state().caps_lock) {
        //     rgb_matrix_set_flags(LED_FLAG_ALL);
        //     rgb_matrix_disable();
        // }
    }
#endif // RGB_MATRIX_ENABLE

// void rgbm_enable() {
//     if (!rgb_matrix_is_enabled()) {
//         rgb_matrix_set_flags(LED_FLAG_NONE);
//         rgb_matrix_enable();
//     }
// }

// void rgbm_disable() {
//     if (!rgb_matrix_is_enabled()) {
//         rgb_matrix_set_flags(LED_FLAG_ALL);
//         rgb_matrix_enable();
//     }
// }
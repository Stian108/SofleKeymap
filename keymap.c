// clang-format off
#include QMK_KEYBOARD_H
#include "keymap_norwegian.h"

enum sofle_layers {
    _COLEMAK,
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * COLEMAK Mod-DH
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | BSPC |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   Ø  |  Å   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Bspc |   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |   N  |   E  |   I  |   O  |  Æ   |
 * |------+------+------+------+------+------|  Mute |    |  Play |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   D  |   V  |-------|    |-------|   K  |   H  |   ,  |   .  |   -  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_COLEMAK] = LAYOUT( \
  KC_ESC,   NO_1,   NO_2,    NO_3,    NO_4,    NO_5,                      NO_6,    NO_7,    NO_8,    NO_9,    NO_0,  KC_BSPC, \
  KC_TAB,   NO_Q,   NO_W,    NO_F,    NO_P,    NO_B,                      NO_J,    NO_L,    NO_U,    NO_Y, NO_OSTR,  NO_ARNG, \
  KC_BSPC,  NO_A,   NO_R,    NO_S,    NO_T,    NO_G,                      NO_M,    NO_N,    NO_E,    NO_I,    NO_O,    NO_AE, \
  KC_LSFT,  NO_Z,   NO_X,    NO_C,    NO_D,    NO_V, KC_MUTE,    KC_MPLY, NO_K,    NO_H, NO_COMM,  NO_DOT, NO_MINS,  KC_RSFT, \
                 KC_LGUI,KC_LALT,KC_LCTRL, MO(_LOWER), KC_ENT,      KC_SPC,  MO(_RAISE), KC_RCTRL, KC_RALT, KC_RGUI \
),
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | BSPC |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  Å   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Bspc |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   Ø  |  Æ   |
 * |------+------+------+------+------+------|  Mute |    |  Play |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   -  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_QWERTY] = LAYOUT( \
  KC_ESC,   NO_1,   NO_2,    NO_3,    NO_4,    NO_5,                      NO_6,    NO_7,    NO_8,    NO_9,    NO_0,  KC_BSPC, \
  KC_TAB,   NO_Q,   NO_W,    NO_E,    NO_R,    NO_T,                      NO_Y,    NO_U,    NO_I,    NO_O,    NO_P,  NO_ARNG, \
  KC_BSPC,  NO_A,   NO_S,    NO_D,    NO_F,    NO_G,                      NO_H,    NO_J,    NO_K,    NO_L, NO_OSTR,    NO_AE, \
  KC_LSFT,  NO_Z,   NO_X,    NO_C,    NO_V,    NO_B, KC_MUTE,    KC_MPLY, NO_N,    NO_M, NO_COMM,  NO_DOT, NO_MINS,  KC_RSFT, \
             KC_LGUI, KC_LALT, KC_LCTRL, MO(_LOWER),  KC_ENT,     KC_SPC,  MO(_RAISE), KC_RCTRL, KC_RALT, KC_RGUI \
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | F11  | F12  | F13  | F14  | F15  |                    |   \  |   /  |   `  |   ´  |   =  |   |  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Bspc |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   '  |
 * |------+------+------+------+------+------|  Mute |    |  Play |------+------+------+------+------+------|
 * | Shift|   ~  |   "  |   +  |   {   |  }  |-------|    |-------|   [  |   ]  |   <  |   >  |   ?  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_LOWER] = LAYOUT( \
  _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, _______,\
  _______,  KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,                     NO_BSLS, NO_SLSH,  NO_GRV, NO_ACUT,  NO_EQL, NO_PIPE, \
  _______, NO_EXLM,   NO_AT, NO_HASH,  NO_DLR, NO_PERC,                     NO_CIRC, NO_AMPR, NO_ASTR, NO_LPRN, NO_RPRN, NO_QUOT, \
  _______, NO_TILD, NO_DQUO, NO_PLUS, NO_LCBR, NO_RCBR, _______,   _______, NO_LBRC, NO_RBRC, NO_LABK, NO_RABK, NO_QUES, _______, \
                    _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______\
),
/* RAISE
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  | Ins  | Pscr | Menu |      |      |                    |      |      |  Up  |      |      | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | LAt  | LCtl |LShift|      | Caps |-------.    ,-------|      | Left | Down | Rigth|  Del | Bspc |
 * |------+------+------+------+------+------|  Mute |    |  Play |------+------+------+------+------+------|
 * |Shift |      |      |      |      |      |-------|    |-------|      | LStr |      | LEnd |      | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[_RAISE] = LAYOUT( \
  _______, _______,  _______,  _______,  _______, _______,                        _______,  _______, _______,  _______,  _______, _______, \
  _______,  KC_INS,  KC_PSCR,   KC_APP,  XXXXXXX, XXXXXXX,                        KC_PGUP,  XXXXXXX,   KC_UP, XXXXXXX,  XXXXXXX, KC_BSPC, \
  _______, KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX, KC_CAPS,                        KC_PGDN,  KC_LEFT, KC_DOWN, KC_RGHT,   KC_DEL, KC_BSPC, \
  _______, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,  _______,       _______,  XXXXXXX,KC_HOME, XXXXXXX,  KC_END,  XXXXXXX, _______, \
                       _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______ \
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |  F16 |  F17 |  F18 | F19  |  F20 |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |QWERTY|      |      |      |      |                    |  F21 |  F22 |  F23 | F24  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      | VOLDO| MUTE | VOLUP|      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |COLEMK|      |      |-------|    |-------|      | PREV | PLAY | NEXT |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
  [_ADJUST] = LAYOUT( \
  XXXXXXX,     XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,                        KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20, XXXXXXX, \
  XXXXXXX, DF(_QWERTY), XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,                        KC_F21,  KC_F22,  KC_F23,  KC_F24, XXXXXXX, XXXXXXX, \
  XXXXXXX,     XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX, \
  XXXXXXX,     XXXXXXX, XXXXXXX, DF(_COLEMAK), XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, \
                             _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______ \
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}


#ifdef OLED_DRIVER_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
    // Print current mode
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("MODE"), false);
    oled_write_ln_P(PSTR(""), false);

    switch (get_highest_layer(default_layer_state)) {
        case _COLEMAK:
            oled_write_ln_P(PSTR("Clmk"), false);
            break;
        case _QWERTY:
            oled_write_ln_P(PSTR("Qwrt"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _COLEMAK:
        case _QWERTY:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("Raise"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("Lower"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("Adj\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
}

#endif

#ifdef ENCODER_ENABLE

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_MNXT);
        } else {
            tap_code(KC_MPRV);
        }
    }
}

#endif

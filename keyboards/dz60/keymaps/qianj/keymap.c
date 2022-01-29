#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_all( //0
        KC_ESC,       KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,  KC_MINS,KC_EQL,KC_GRAVE,KC_BSPC,
        KC_TAB,        KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,  KC_LBRC,KC_RBRC,       KC_BSLS,
        MO(3),          KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,  KC_SCLN,KC_QUOT,            KC_ENT,
        KC_LSFT,KC_LSFT, KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,  KC_COMM,KC_DOT,KC_SLSH,KC_RSFT,KC_UP,KC_DEL,
        KC_LCTL,KC_LALT,KC_LGUI,        KC_SPC,KC_SPC,KC_SPC,        MO(2),MO(1),KC_LEFT,KC_DOWN,KC_RIGHT
    ),

    LAYOUT_all( //1
        KC_ESC,      KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_GRAVE,        KC_BSPC,
        RGB_TOG,      RGB_SAD,RGB_SAI,RGB_RMOD,RGB_MOD,KC_NO,KC_NO,KC_NO,KC_PSCR,KC_SLCK,KC_PAUS,KC_BRID,KC_BRIU,KC_BSLS,
        MO(3),         RGB_HUD,RGB_HUI,RGB_SPD,RGB_SPI,RGB_TOG,     KC_HOME,KC_PGDN,KC_PGUP,KC_END,KC_INS,KC_INS,KC_MPLY,
        KC_LSFT,KC_LSFT,RGB_VAD,RGB_VAI,RGB_VAD,RGB_VAI,KC_NO,KC_NO,KC_NO, KC_HOME,KC_END,KC_INS,LCTL(LGUI(KC_Q)),KC_VOLU,KC_MUTE,
        KC_LCTL,KC_LALT,KC_LGUI,            KC_SPC,KC_SPC,KC_SPC,                     MO(3),MO(1),KC_MPRV,KC_VOLD,KC_MNXT
    ),

    LAYOUT_all( //2
        KC_ESC,    MEH(KC_1),MEH(KC_2),MEH(KC_3),MEH(KC_4),MEH(KC_5),MEH(KC_6),MEH(KC_7),MEH(KC_8),MEH(KC_9),MEH(KC_0), MEH(KC_MINS),MEH(KC_EQL),MEH(KC_GRV),MEH(KC_BSPC),
        KC_TAB,      MEH(KC_Q),MEH(KC_W),MEH(KC_E),MEH(KC_R),MEH(KC_T),MEH(KC_Y),MEH(KC_U),MEH(KC_I),MEH(KC_O),MEH(KC_P), MEH(KC_LBRC),MEH(KC_RBRC),         MEH(KC_BSLS),
        MO(3),         MEH(KC_A),MEH(KC_S),MEH(KC_D),MEH(KC_F),MEH(KC_G),MEH(KC_H),MEH(KC_J),MEH(KC_K),MEH(KC_L),MEH(KC_SCLN),MEH(KC_QUOT),                   MEH(KC_ENT),
        KC_LSFT,KC_LSFT,MEH(KC_Z),MEH(KC_X),MEH(KC_C),MEH(KC_V),MEH(KC_B),MEH(KC_N),MEH(KC_M),MEH(KC_COMM),MEH(KC_DOT),MEH(KC_SLSH),       KC_RSFT,MEH(KC_UP),MEH(KC_DEL),
        KC_LCTL,KC_LALT,KC_LGUI,                                    KC_SPC,KC_SPC,KC_SPC,                              MO(2),MO(3),MEH(KC_LEFT),MEH(KC_DOWN),MEH(KC_RGHT)
    ),

    LAYOUT_all( //3
        TG(4),      MEH(KC_F1),MEH(KC_F2),MEH(KC_F3),MEH(KC_F4),MEH(KC_F5),MEH(KC_F6),MEH(KC_F7),MEH(KC_F8),MEH(KC_F9),MEH(KC_F10),MEH(KC_F11),MEH(KC_F12),HYPR(KC_GRV),HYPR(KC_BSPC),
        KC_TAB,      HYPR(KC_Q),HYPR(KC_W),HYPR(KC_E),HYPR(KC_R),HYPR(KC_T),HYPR(KC_Y),HYPR(KC_U),HYPR(KC_I),HYPR(KC_O),HYPR(KC_P),HYPR(KC_LBRC),HYPR(KC_RBRC),         HYPR(KC_BSLS),
        MO(3),        HYPR(KC_A),HYPR(KC_S),HYPR(KC_D),HYPR(KC_F),HYPR(KC_G),HYPR(KC_H),HYPR(KC_J),HYPR(KC_K),HYPR(KC_L),HYPR(KC_SCLN),HYPR(KC_QUOT),                    HYPR(KC_ENT),
        KC_LSFT,KC_LSFT,HYPR(KC_Z),HYPR(KC_X),HYPR(KC_C),HYPR(KC_V),HYPR(KC_B),HYPR(KC_N),HYPR(KC_M),HYPR(KC_COMM),HYPR(KC_DOT),HYPR(KC_SLSH),  KC_RSFT,LCTL(LGUI(KC_Q)),HYPR(KC_DEL),
        KC_LCTL,KC_LALT,KC_LGUI,                                   KC_SPC,KC_SPC,KC_SPC,                                        MO(3),MO(3),HYPR(KC_LEFT),HYPR(KC_DOWN),HYPR(KC_RGHT)
    ),

    LAYOUT_all( //4
        KC_ESC,      KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINS,KC_EQL,KC_GRAVE,KC_BSPC,
        KC_TAB,       KC_Q,KC_W,KC_F,KC_P,KC_G,KC_J,KC_L,KC_U,KC_Y,KC_SCLN,KC_LBRC,KC_RBRC,    KC_BSLS,
        MO(7),         KC_A,KC_R,KC_S,KC_T,KC_D,KC_H,KC_N,KC_E,KC_I,KC_O,KC_QUOT,               KC_ENT,
        KC_LSFT,KC_LSFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_K,KC_M,KC_COMM,KC_DOT,KC_SLSH,KC_RSFT,KC_UP,KC_DEL,
        KC_LCTL,KC_LALT,KC_LGUI,        KC_SPC,KC_SPC,KC_SPC,     MO(6),MO(5),KC_LEFT,KC_DOWN,KC_RIGHT
    ),

    LAYOUT_all( //5
        KC_ESC,      KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_GRAVE,        KC_BSPC,
        RGB_TOG,      RGB_SAD,RGB_SAI,RGB_RMOD,RGB_MOD,KC_NO,KC_NO,KC_NO,KC_PSCR,KC_SLCK,KC_PAUS,KC_BRID,KC_BRIU,KC_BSLS,
        MO(7),         RGB_HUD,RGB_HUI,RGB_SPD,RGB_SPI,RGB_TOG,     KC_HOME,KC_PGDN,KC_PGUP,KC_END,KC_INS,KC_INS,KC_MPLY,
        KC_LSFT,KC_LSFT,RGB_VAD,RGB_VAI,RGB_VAD,RGB_VAI,KC_NO,KC_NO,KC_NO, KC_HOME,KC_END,KC_INS,LCTL(LGUI(KC_Q)),KC_VOLU,KC_MUTE,
        KC_LCTL,KC_LALT,KC_LGUI,            KC_SPC,KC_SPC,KC_SPC,                     MO(7),MO(5),KC_MPRV,KC_VOLD,KC_MNXT
    ),

    LAYOUT_all( //6
        KC_ESC,    MEH(KC_1),MEH(KC_2),MEH(KC_3),MEH(KC_4),MEH(KC_5),MEH(KC_6),MEH(KC_7),MEH(KC_8),MEH(KC_9),MEH(KC_0), MEH(KC_MINS),MEH(KC_EQL),MEH(KC_GRV),MEH(KC_BSPC),
        KC_TAB,      MEH(KC_Q),MEH(KC_W),MEH(KC_E),MEH(KC_R),MEH(KC_T),MEH(KC_Y),MEH(KC_U),MEH(KC_I),MEH(KC_O),MEH(KC_P), MEH(KC_LBRC),MEH(KC_RBRC),         MEH(KC_BSLS),
        MO(7),         MEH(KC_A),MEH(KC_S),MEH(KC_D),MEH(KC_F),MEH(KC_G),MEH(KC_H),MEH(KC_J),MEH(KC_K),MEH(KC_L),MEH(KC_SCLN),MEH(KC_QUOT),                   MEH(KC_ENT),
        KC_LSFT,KC_LSFT,MEH(KC_Z),MEH(KC_X),MEH(KC_C),MEH(KC_V),MEH(KC_B),MEH(KC_N),MEH(KC_M),MEH(KC_COMM),MEH(KC_DOT),MEH(KC_SLSH),       KC_RSFT,MEH(KC_UP),MEH(KC_DEL),
        KC_LCTL,KC_LALT,KC_LGUI,                                    KC_SPC,KC_SPC,KC_SPC,                              MO(6),MO(7),MEH(KC_LEFT),MEH(KC_DOWN),MEH(KC_RGHT)
    ),

    LAYOUT_all( //7
        TG(4),      MEH(KC_F1),MEH(KC_F2),MEH(KC_F3),MEH(KC_F4),MEH(KC_F5),MEH(KC_F6),MEH(KC_F7),MEH(KC_F8),MEH(KC_F9),MEH(KC_F10),MEH(KC_F11),MEH(KC_F12),HYPR(KC_GRV),HYPR(KC_BSPC),
        KC_TAB,      HYPR(KC_Q),HYPR(KC_W),HYPR(KC_E),HYPR(KC_R),HYPR(KC_T),HYPR(KC_Y),HYPR(KC_U),HYPR(KC_I),HYPR(KC_O),HYPR(KC_P),HYPR(KC_LBRC),HYPR(KC_RBRC),         HYPR(KC_BSLS),
        MO(7),        HYPR(KC_A),HYPR(KC_S),HYPR(KC_D),HYPR(KC_F),HYPR(KC_G),HYPR(KC_H),HYPR(KC_J),HYPR(KC_K),HYPR(KC_L),HYPR(KC_SCLN),HYPR(KC_QUOT),                    HYPR(KC_ENT),
        KC_LSFT,KC_LSFT,HYPR(KC_Z),HYPR(KC_X),HYPR(KC_C),HYPR(KC_V),HYPR(KC_B),HYPR(KC_N),HYPR(KC_M),HYPR(KC_COMM),HYPR(KC_DOT),HYPR(KC_SLSH),  KC_RSFT,LCTL(LGUI(KC_Q)),HYPR(KC_DEL),
        KC_LCTL,KC_LALT,KC_LGUI,                                   KC_SPC,KC_SPC,KC_SPC,                                        MO(7),MO(7),HYPR(KC_LEFT),HYPR(KC_DOWN),HYPR(KC_RGHT)
    )
};
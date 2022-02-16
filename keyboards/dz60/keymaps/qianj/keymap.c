#include QMK_KEYBOARD_H

enum custom_keycodes {
    PASSWD1=SAFE_RANGE,
    PASSWD2,
    PASSWD3,
    PASSWD4,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case PASSWD1:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case PASSWD2:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case PASSWD3:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    case PASSWD4:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    LAYOUT_all( //0 qwerty 
        KC_ESC,         KC_1,KC_2,KC_3,KC_4,KC_5,KC_GRAVE,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINS,KC_EQL,KC_BSPC,
        KC_TAB,         KC_Q,KC_W,KC_E,KC_R,KC_T,KC_LBRC,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_RBRC,         KC_BSLS,
        KC_CAPS,          KC_A,KC_S,KC_D,KC_F,KC_G,KC_SCLN,KC_H,KC_J,KC_K,KC_L,KC_QUOT,              KC_ENT,
        KC_LSFT,KC_LSFT,KC_Z,KC_X,KC_C,KC_V,KC_SLSH,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,   KC_RSFT,KC_UP,KC_DEL,
        KC_LCTL,KC_LALT,KC_LGUI,        KC_SPC,MO(2),KC_SPC,       MO(3),MO(1),  KC_LEFT,KC_DOWN,KC_RIGHT
    ),

    LAYOUT_all( //1 Functions
        XXXXXXX,         KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,XXXXXXX,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,   XXXXXXX,
        RGB_TOG,        RGB_RMOD,RGB_MOD,RGB_SAD,RGB_SAI,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_PSCR,KC_SLCK,KC_PAUS,XXXXXXX,XXXXXXX,
        XXXXXXX,          RGB_HUD,RGB_HUI,RGB_SPD,RGB_SPI,RGB_TOG,XXXXXXX,KC_HOME,KC_PGDN,KC_PGUP,KC_END,KC_INS,   KC_MPLY,
        XXXXXXX,XXXXXXX,RGB_VAD,RGB_VAI,RGB_VAD,RGB_VAI,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_HOME,KC_END,LCTL(LGUI(KC_Q)),KC_VOLU,KC_MUTE,
        XXXXXXX,XXXXXXX,XXXXXXX,                 XXXXXXX,XXXXXXX,XXXXXXX,               MO(4),MO(1),KC_MPRV,KC_VOLD,KC_MNXT
    ),

    LAYOUT_all( //2 Window Management 1
        XXXXXXX,         MEH(KC_1),MEH(KC_2),MEH(KC_3),MEH(KC_4),MEH(KC_5),MEH(KC_GRV),MEH(KC_6),MEH(KC_7),MEH(KC_8),MEH(KC_9),MEH(KC_0),MEH(KC_MINS),MEH(KC_EQL),MEH(KC_BSPC),
        XXXXXXX,         MEH(KC_Q),MEH(KC_W),MEH(KC_E),MEH(KC_R),MEH(KC_T),MEH(KC_LBRC),MEH(KC_Y),MEH(KC_U),MEH(KC_I),MEH(KC_O),MEH(KC_P),           MEH(KC_RBRC),MEH(KC_BSLS),
        XXXXXXX,          MEH(KC_A),MEH(KC_S),MEH(KC_D),MEH(KC_F),MEH(KC_G),MEH(KC_SCLN),MEH(KC_H),MEH(KC_J),MEH(KC_K),MEH(KC_L),MEH(KC_QUOT),                      MEH(KC_ENT),
        XXXXXXX,XXXXXXX,MEH(KC_Z),MEH(KC_X),MEH(KC_C),MEH(KC_V),MEH(KC_SLSH),MEH(KC_B),MEH(KC_N),MEH(KC_M),MEH(KC_COMM),MEH(KC_DOT),           XXXXXXX,MEH(KC_UP),MEH(KC_DEL),
        XXXXXXX,XXXXXXX,XXXXXXX,                                    XXXXXXX,MO(2),XXXXXXX,                                  XXXXXXX,XXXXXXX,MEH(KC_LEFT),MEH(KC_DOWN),MEH(KC_RGHT)
    ),

    LAYOUT_all( //3 Window Management 2
        XXXXXXX,          MEH(KC_F1),MEH(KC_F2),MEH(KC_F3),MEH(KC_F4),MEH(KC_F5),MEH(KC_GRV),MEH(KC_F6),MEH(KC_F7),MEH(KC_F8),MEH(KC_F9),MEH(KC_F10),MEH(KC_F11),MEH(KC_F12),MEH(KC_BSPC),
        XXXXXXX,         MEH(KC_Q),MEH(KC_W),MEH(KC_E),MEH(KC_R),MEH(KC_T),MEH(KC_LBRC),MEH(KC_Y),MEH(KC_U),MEH(KC_I),MEH(KC_O),MEH(KC_P),           MEH(KC_RBRC),MEH(KC_BSLS),
        XXXXXXX,          MEH(KC_A),MEH(KC_S),MEH(KC_D),MEH(KC_F),MEH(KC_G),MEH(KC_SCLN),MEH(KC_H),MEH(KC_J),MEH(KC_K),MEH(KC_L),MEH(KC_QUOT),                      MEH(KC_ENT),
        XXXXXXX,XXXXXXX,MEH(KC_Z),MEH(KC_X),MEH(KC_C),MEH(KC_V),MEH(KC_SLSH),MEH(KC_B),MEH(KC_N),MEH(KC_M),MEH(KC_COMM),MEH(KC_DOT),           XXXXXXX,MEH(KC_UP),MEH(KC_DEL),
        XXXXXXX,XXXXXXX,XXXXXXX,                                    XXXXXXX,XXXXXXX,XXXXXXX,                                  MO(3),MO(4),MEH(KC_LEFT),MEH(KC_DOWN),MEH(KC_RGHT)
    ),
    
    LAYOUT_all( //4 Password and Power
        TG(5),          HYPR(KC_1),HYPR(KC_2),HYPR(KC_3),HYPR(KC_4),HYPR(KC_5),HYPR(KC_GRV),HYPR(KC_6),HYPR(KC_7),HYPR(KC_8),HYPR(KC_9),HYPR(KC_0),HYPR(KC_MINS),HYPR(KC_EQL),HYPR(KC_BSPC),
        XXXXXXX,         HYPR(KC_Q),HYPR(KC_W),HYPR(KC_E),HYPR(KC_R),HYPR(KC_T),HYPR(KC_LBRC),HYPR(KC_Y),HYPR(KC_U),HYPR(KC_I),HYPR(KC_O),HYPR(KC_P),          HYPR(KC_RBRC),HYPR(KC_BSLS),
        XXXXXXX,          HYPR(KC_A),HYPR(KC_S),HYPR(KC_D),HYPR(KC_F),HYPR(KC_G),HYPR(KC_SCLN),PASSWD1,PASSWD2,PASSWD3,PASSWD4,HYPR(KC_QUOT),                      HYPR(KC_ENT),
        XXXXXXX,XXXXXXX,HYPR(KC_Z),HYPR(KC_X),HYPR(KC_C),HYPR(KC_V),HYPR(KC_SLSH),HYPR(KC_B),HYPR(KC_N),HYPR(KC_M),HYPR(KC_COMM),HYPR(KC_DOT),      XXXXXXX,LCTL(LGUI(KC_Q)),HYPR(KC_DEL),
        XXXXXXX,XXXXXXX,XXXXXXX,                                    XXXXXXX,MO(2),XXXXXXX,                                  MO(4),MO(4),         HYPR(KC_LEFT),HYPR(KC_DOWN),HYPR(KC_RGHT)
    ),

    LAYOUT_all( //5 Colemak
        KC_ESC,         KC_1,KC_2,KC_3,KC_4,KC_5,KC_GRAVE,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINS,KC_EQL,KC_BSPC,
        KC_TAB,         KC_Q,KC_W,KC_F,KC_P,KC_G,KC_LBRC,KC_J,KC_L,KC_U,KC_Y,KC_QUOT,KC_RBRC,         KC_BSLS,
        KC_CAPS,          KC_A,KC_R,KC_S,KC_T,KC_D,KC_SCLN,KC_H,KC_N,KC_E,KC_I,KC_O,              KC_ENT,
        KC_LSFT,KC_LSFT,KC_Z,KC_X,KC_C,KC_V,KC_SLSH,KC_B,KC_K,KC_M,KC_COMM,KC_DOT,   KC_RSFT,KC_UP,KC_DEL,
        KC_LCTL,KC_LALT,KC_LGUI,        KC_SPC,MO(2),KC_SPC,       MO(3),MO(1),  KC_LEFT,KC_DOWN,KC_RIGHT
    )
    
};

#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER  1
#define _RAISE  2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                       KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , LCTL(KC_Z),
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                       KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_MINS,
        KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                       KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
        KC_LALT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                       KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_BSLS,
                          KC_LBRC, KC_RBRC,                                                           KC_PLUS, KC_EQL,
                                            LOWER,     KC_BSPC,                           KC_SPC , RAISE,
                                                 KC_LSFT,LCTL(KC_BSPC),     KC_ENT      , KC_DEL,
                                                 KC_PSCR,      KC_GRV ,     LGUI(KC_SPC), KC_LGUI
    ),

    [_LOWER] = LAYOUT_5x6(
        UC(0x007E),UC(0x0021),UC(0x0040),UC(0x2116),UC(0x0024),UC(0x0025),       UC(0x005E),UC(0x0026), KC_PSLS, KC_PAST, KC_PMNS, UC(0x0023),
        KC_TRNS   ,UC(0x0027),UC(0x003B),UC(0x003A),UC(0x003F),UC(0x007B),       UC(0x007D), KC_P7    , KC_P8  , KC_P9  , KC_PPLS, KC_BSPC,
        KC_TRNS   , KC_HOME  , KC_PGUP  , KC_PGDN  , KC_END   ,UC(0x005B),       UC(0x005D), KC_P4    , KC_P5  , KC_P6  , KC_PCMM, KC_DEL ,
        KC_TRNS   , KC_LEFT  , KC_UP    , KC_DOWN  , KC_RGHT  ,UC(0x0028),       UC(0x0029), KC_P1    , KC_P2  , KC_P3  , KC_PEQL, KC_CALC,
                               UC(0x003C),UC(0x003E),                                                   KC_P0  , KC_PDOT,
                                             KC_TRNS  , KC_TRNS,                               LCA(KC_LSFT), KC_TRNS,
                                                        KC_TRNS  , KC_TRNS,      KC_TRNS , KC_RSFT,
                                                        KC_TRNS  , KC_TRNS,      KC_TRNS , KC_RALT

    ),

    [_RAISE] = LAYOUT_5x6(
        KC_F1     , KC_F2    , KC_F3     , KC_F4       , KC_F5     , KC_F12    ,        KC_F6     , KC_F7     , KC_F8     , KC_F9        , KC_F10 , KC_F11 ,
        KC_CAPS   , RGB_HUI  , RGB_SAI   , RGB_VAI     , RGB_MOD   , KC_LBRC   ,        KC_RBRC   , KC_INS    , KC_SCRL   , KC_F13       , KC_F14 , KC_F15 ,
        KC_TRNS   , KC_TRNS  , KC_MUTE   , KC_VOLD     , KC_VOLU   , KC_LPRN   ,        KC_RPRN   , KC_MPRV   , KC_MPLY   , KC_MSTP      , KC_MNXT, KC_PAUS,
        LCTL(KC_A), LSA(KC_F), LCTL(KC_Q), LCTL(KC_SPC), LCTL(KC_X), LCTL(KC_C),        LCTL(KC_V), LCTL(KC_S), LCTL(KC_O), LCTL(KC_SLSH), KC_MYCM, KC_WFAV,
                               KC_PGUP   , KC_PGDN,                                                             KC_EQL    , KC_TRNS,
                                               KC_TRNS, LALT(KC_F4),                              KC_TRNS, KC_TRNS,
                                                          KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS,
                                                          KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS
    )
};

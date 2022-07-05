#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _FN     1
//#define _RAISE 2

// #define RAISE MO(_RAISE)
// #define LOWER MO(_LOWER)

// #define ONE_GRV LT(1,KC_GRAVE)
#define CTL_Z LCTL(KC_Z)
// #define ALT_SHFT LALT(KC_LSFT)
// #define ALT_MENU LALT_T(KC_MENU)
// #define LG_QUOT LGUI_T(KC_QUOT)
// #define CTL_ESC LCTL_T(KC_ESC)
 #define CTL_SFT LCTL(KC_LSFT)
// #define LT2_COL LT(_RAISE, KC_SCLN)
#define TASK   LCTL(LSFT(KC_ESC))
#define TAB_R  LCTL(KC_TAB)
#define TAB_L  LCTL(LSFT(KC_TAB))
#define TAB_RO LCTL(LSFT(KC_T))

#define OSM_LSFT OSM(MOD_LSFT)
#define OSM_RSFT OSM(MOD_RSFT)
#define TG_NUM TG(_NUMPAD)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // [_QWERTY] = LAYOUT_5x7(
    //     //|--------------------------------------------------------------|  |--------------------------------------------------------------|
    //         KC_ESC,    KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,       KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,   KC_GRV,
    //     //|--------+--------+--------+--------+-------+-------+----------|  |--------+--------+--------+--------+-------+-------+----------|
    //         KC_TAB,    KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_LBRC,    KC_RBRC, KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,   KC_BSLS,
    //     //|--------+--------+--------+--------+-------+-------+----------|  |--------+--------+--------+--------+-------+-------+----------|
    //         KC_LCTL,   KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   TAB_RO,     TG_NUM,  KC_H,    KC_J,    KC_K,     KC_L,  KC_SCLN,  KC_QUOT,
    //     //|--------+--------+--------+--------+-------+-------+----------|  |--------+--------+--------+--------+-------+-------+----------|
    //        OSM_LSFT,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,                          KC_N,    KC_M,  KC_COMM, KC_DOT, KC_SLSH,  OSM_RSFT, 
    //     //|--------+--------+--------+--------+-------+-------+----------|  |--------+--------+--------+--------+-------+-------+----------|
    //        KC_CAPS,  KC_LGUI,   TAB_L,   TAB_R, KC_SPC,KC_HOME,   TASK,      KC_LCTL, KC_PGUP, KC_BSPC,  KC_LEFT, KC_UP, KC_DOWN,  KC_RGHT,
    //     //|-----------------------------------+-------+-------+----------|  |--------+--------+--------+-----------------------------------| 
    //                                            TT(_FN),  KC_END, KC_PSCR,    KC_LALT, KC_PGDN, KC_ENT
    //     //                                    |--------+--------+--------|  |--------+--------+--------|
    // ),
    [_QWERTY] = LAYOUT_5x7(
        //|--------------------------------------------------------------|  |--------------------------------------------------------------|
            KC_ESC,    KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,        KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL, KC_BSPC,
        //|--------+--------+--------+--------+-------+-------+----------|  |--------+--------+--------+--------+-------+-------+----------|
            KC_TAB,    KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_LBRC,     KC_RBRC, KC_Y,    KC_U,    KC_I,     KC_O,   KC_P,   KC_BSLS,
        //|--------+--------+--------+--------+-------+-------+----------|  |--------+--------+--------+--------+-------+-------+----------|
            TT(_FN),   KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_GRV,      TT(_FN),  KC_H,    KC_J,    KC_K,    KC_L,  KC_SCLN, KC_QUOT,
        //|--------+--------+--------+--------+-------+-------+----------|  |--------+--------+--------+--------+-------+-------+----------|
           OSM_LSFT,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,                          KC_N,    KC_M,  KC_COMM, KC_DOT, KC_SLSH, OSM_RSFT, 
        //|--------+--------+--------+--------+-------+-------+----------|  |--------+--------+--------+--------+-------+-------+----------|
            KC_LCTL, KC_INS ,  TAB_L,  TAB_R,  KC_LCTL, KC_SPC,  CTL_SFT,     KC_DEL, KC_HOME, KC_SPC,  KC_LEFT, KC_UP, KC_DOWN, KC_RGHT,
        //|-----------------------------------+-------+-------+----------|  |--------+--------+--------+-----------------------------------| 
                                               KC_LALT,  CTL_Z, KC_LGUI,     KC_LGUI, KC_END,  KC_ENT
        //                                    |--------+--------+--------|  |--------+--------+--------|
    ),
    [_FN] = LAYOUT_5x7(
        //|--------------------------------------------------------------|  |--------------------------------------------------------------|
            KC_ESC,   KC_F1,   KC_F2,  KC_F3,   KC_F4,  KC_F5,   KC_F6,        KC_F7,   KC_F8,   KC_F9,  KC_F10, KC_F11, KC_F12,  _______,
        //|--------+--------+--------+--------+-------+-------+----------|  |--------+--------+--------+--------+-------+-------+----------|
            _______,_______, _______, _______, _______,_______, _______,      _______, _______, _______, _______,_______,_______, _______,
        //|--------+--------+--------+--------+-------+-------+----------|  |--------+--------+--------+--------+-------+-------+----------|
            _______, _______,_______, _______, _______,_______,   RESET,      _______, _______, _______, _______,_______,_______, _______,
        //|--------+--------+--------+--------+-------+-------+----------|  |--------+--------+--------+--------+-------+-------+----------|
            _______, _______,_______, _______, _______,_______,                        _______, _______, _______,_______,_______, _______, 
        //|--------+--------+--------+--------+-------+-------+----------|  |--------+--------+--------+--------+-------+-------+----------|
            _______, _______,_______, _______, _______,_______, _______,      _______, _______, KC_DEL, KC_HOME, KC_PGUP,KC_PGDN, KC_END,
        //|-----------------------------------+-------+-------+----------|  |--------+--------+--------+-----------------------------------| 
                                               _______,_______, _______,      _______, _______, _______
        //                                    |-------+-------+----------|  |--------+--------+--------|
    )
    // ,
    // [_LOWER] = LAYOUT_6x6(
    //     _______,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,                                       KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,
    //     _______,KC_EXLM,KC_AT  ,KC_LBRC,KC_RBRC,KC_PIPE,                                       KC_UP  ,KC_P7  ,KC_P8  ,KC_P9  ,KC_PAST,KC_F12 ,
    //     _______,KC_HASH,KC_DLR ,KC_LPRN,KC_RPRN,KC_GRV ,                                       KC_DOWN,KC_P4  ,KC_P5  ,KC_P6  ,KC_PPLS,_______,
    //     _______,KC_PERC,KC_CIRC,KC_LBRC,KC_RBRC,KC_TILD,                                       KC_AMPR,KC_P1  ,KC_P2  ,KC_P3  ,KC_PSLS,_______,
    //     RESET  ,_______,_______,_______,_______,_______,                                       _______,_______,KC_PDOT,KC_P0  ,KC_PEQL,_______,
    //                                             _______,_______,_______,       _______,_______,_______,
    //                                                             _______,       _______,
    //                                                             _______,       _______
    // )
};

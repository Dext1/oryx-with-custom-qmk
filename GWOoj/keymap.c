#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
};



#define DUAL_FUNC_0 LT(5, KC_F21)
#define DUAL_FUNC_1 LT(1, KC_F22)
#define DUAL_FUNC_2 LT(13, KC_E)
#define DUAL_FUNC_3 LT(2, KC_E)
#define DUAL_FUNC_4 LT(9, KC_F15)
#define DUAL_FUNC_5 LT(4, KC_F8)
#define DUAL_FUNC_6 LT(6, KC_M)
#define DUAL_FUNC_7 LT(12, KC_W)
#define DUAL_FUNC_8 LT(6, KC_W)
#define DUAL_FUNC_9 LT(8, KC_F24)
#define DUAL_FUNC_10 LT(9, KC_M)
#define DUAL_FUNC_11 LT(9, KC_F4)
#define DUAL_FUNC_12 LT(5, KC_4)
#define DUAL_FUNC_13 LT(13, KC_C)
#define DUAL_FUNC_14 LT(10, KC_F2)
#define DUAL_FUNC_15 LT(6, KC_E)
#define DUAL_FUNC_16 LT(15, KC_F22)
#define DUAL_FUNC_17 LT(13, KC_F3)
#define DUAL_FUNC_18 LT(11, KC_F3)
#define DUAL_FUNC_19 LT(2, KC_Y)
#define DUAL_FUNC_20 LT(10, KC_L)
#define DUAL_FUNC_21 LT(14, KC_I)
#define DUAL_FUNC_22 LT(7, KC_F24)
#define DUAL_FUNC_23 LT(15, KC_E)
#define DUAL_FUNC_24 LT(10, KC_F14)
#define DUAL_FUNC_25 LT(3, KC_F8)
#define DUAL_FUNC_26 LT(10, KC_F12)
#define DUAL_FUNC_27 LT(6, KC_F17)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    TG(9),          RGB_TOG,        RGB_VAD,        RGB_VAI,        KC_NUM,         MOON_LED_LEVEL, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PSCR,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_ESCAPE,      
    KC_TRANSPARENT, KC_B,           KC_Y,           KC_O,           KC_U,           NO_APOS,        KC_TRANSPARENT,                                 KC_TRANSPARENT, NO_QUO2,        KC_L,           KC_D,           KC_W,           LT(6, KC_V),    KC_TRANSPARENT, 
    LT(8, KC_Q),    MT(MOD_LGUI, KC_C),MT(MOD_LALT, KC_I),MT(MOD_LCTL, KC_E),MT(MOD_LSFT, KC_A),DUAL_FUNC_0,    KC_MS_BTN1,                                                                     KC_MS_BTN2,     DUAL_FUNC_4,    MT(MOD_RSFT, KC_H),MT(MOD_LCTL, KC_T),MT(MOD_LALT, KC_S),MT(MOD_RGUI, KC_N),MT(MOD_LGUI | MOD_LSFT, KC_Z),
    MT(MOD_LSFT | MOD_LALT, NO_AE),KC_G,           KC_X,           KC_J,           KC_K,           DUAL_FUNC_1,                                    NO_QUES,        KC_R,           KC_M,           KC_F,           KC_P,           MT(MOD_LGUI | MOD_LCTL, NO_OSLH),
    KC_TRANSPARENT, NO_AM,          DUAL_FUNC_2,    DUAL_FUNC_3,    LT(7, KC_TAB),  CW_TOGG,                                                                                                        CW_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_PC_UNDO,     KC_TRANSPARENT, KC_TRANSPARENT, 
    LT(3, KC_SPACE),LT(5, KC_ENTER),KC_PC_PASTE,                    LT(2, KC_DELETE),LT(4, KC_ESCAPE),LT(1, KC_BSPC)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_6,           KC_5,           KC_4,           KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, NO_CIRC,        KC_PERC,        NO_SLSH,        NO_BSLS,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_3,           KC_2,           KC_1,           KC_0,           KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_5,    DUAL_FUNC_6,    MT(MOD_LALT, NO_PLUS),MT(MOD_LGUI, NO_MINS),MT(MOD_LGUI | MOD_LSFT, KC_KP_ASTERISK),
    KC_TRANSPARENT, KC_4,           KC_9,           KC_8,           KC_7,           KC_TRANSPARENT,                                 KC_HASH,        NO_DLR,         RALT(KC_E),     NO_PND,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LT(3, KC_SPACE),KC_BSPC,        KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F14,         KC_F5,          KC_F6,          KC_F11,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_F12,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_F4,          KC_F13,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     NO_LBRC,        NO_RBRC,        NO_HALF,        KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_2,     KC_PERC,        NO_SLSH,        NO_BSLS,        ST_MACRO_3,     KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, NO_LESS),DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    NO_SCLN,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, NO_COLN,        DUAL_FUNC_10,   DUAL_FUNC_11,   MT(MOD_LALT, NO_PLUS),MT(MOD_LGUI, NO_MINS),MT(MOD_LGUI | MOD_LSFT, KC_KP_ASTERISK),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, NO_LCBR,        NO_RCBR,        NO_UNDS,                                        KC_HASH,        NO_DLR,         NO_PIPE,        NO_AT,          NO_AMPR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_ENTER,       KC_SPACE,       LT(4, KC_BSPC)
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_BTN4,     KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_MS_BTN5,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_TRANSPARENT, 
    RALT(KC_TAB),   KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_ENTER,       KC_INSERT,                      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_3),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_9),     LGUI(KC_4),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_CALCULATOR,  KC_TRANSPARENT, DUAL_FUNC_12,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_13,   DUAL_FUNC_14,   LGUI(KC_6),     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_7),     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_2),     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_TAB),   KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(NO_MINS),  LCTL(NO_PLUS),  LGUI(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LCTL(KC_F4)),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LGUI(LCTL(KC_LEFT)),LGUI(KC_DOWN),  LGUI(KC_UP),    LGUI(LCTL(KC_RIGHT)),KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LCTL(KC_D)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LGUI(LSFT(KC_LEFT)),KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LSFT(KC_RIGHT)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(LSFT(KC_M)),LGUI(KC_HOME),  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_6,        KC_KP_5,        KC_KP_4,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_PERC,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_KP_3,        KC_KP_2,        KC_KP_1,        KC_KP_0,        KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LSFT, KC_KP_EQUAL),MT(MOD_LCTL, KC_KP_SLASH),MT(MOD_LALT, KC_KP_PLUS),MT(MOD_LGUI, KC_KP_MINUS),KC_KP_ASTERISK, 
    KC_TRANSPARENT, KC_KP_4,        KC_KP_9,        KC_KP_8,        KC_KP_7,        KC_TRANSPARENT,                                 KC_HASH,        NO_DLR,         RALT(KC_E),     NO_PND,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_M),     LALT(KC_X),     LALT(LSFT(KC_R)),KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_19,   DUAL_FUNC_20,   DUAL_FUNC_21,   KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_15,   DUAL_FUNC_16,   DUAL_FUNC_17,   DUAL_FUNC_18,   KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, LALT(LSFT(KC_V)),DUAL_FUNC_22,   DUAL_FUNC_23,   DUAL_FUNC_24,   KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(LSFT(KC_LEFT)),LALT(LSFT(KC_DOWN)),LALT(LSFT(KC_UP)),LALT(LSFT(KC_RIGHT)),KC_TRANSPARENT,                                 KC_TRANSPARENT, DUAL_FUNC_25,   DUAL_FUNC_26,   DUAL_FUNC_27,   KC_TRANSPARENT, LALT(LSFT(KC_Q)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LSFT(KC_BSPC)),KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, LALT(KC_V),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LALT(LSFT(KC_SPACE)),KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, LALT(LSFT(KC_E)),KC_TRANSPARENT
  ),
  [9] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           NO_TILD,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_5,           KC_6,           KC_7,           KC_8,           KC_TRANSPARENT, 
    KC_ESCAPE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_TRANSPARENT, 
    KC_TAB,         KC_Z,           KC_X,           KC_C,           KC_V,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_B,           KC_N,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_5,           KC_6,           KC_7,           KC_LEFT_SHIFT,  KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_RIGHT_SHIFT, KC_9,           KC_0,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_ENTER,       MO(10),                         KC_TRANSPARENT, KC_TAB,         KC_LEFT_ALT
  ),
  [10] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_O,           KC_Y,           KC_W,           KC_U,           KC_I,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_L,           KC_T,           KC_A,           KC_S,           KC_D,           KC_H,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_J,           KC_B,           KC_N,           KC_M,           KC_P,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
                 'L', 'L', 'L', 'R', 'R', 'R'
);

const uint16_t PROGMEM combo0[] = { NO_QUO2, NO_APOS, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_F, KC_X, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_M, KC_J, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_R, KC_K, COMBO_END};
const uint16_t PROGMEM combo4[] = { LT(3, KC_SPACE), LT(1, KC_BSPC), COMBO_END};
const uint16_t PROGMEM combo5[] = { LT(8, KC_Q), MT(MOD_LGUI | MOD_LSFT, KC_Z), COMBO_END};
const uint16_t PROGMEM combo6[] = { LT(4, KC_ESCAPE), LT(5, KC_ENTER), COMBO_END};
const uint16_t PROGMEM combo7[] = { LT(3, KC_SPACE), KC_K, KC_J, COMBO_END};
const uint16_t PROGMEM combo8[] = { LT(3, KC_SPACE), MT(MOD_LSFT, KC_A), MT(MOD_LCTL, KC_E), COMBO_END};
const uint16_t PROGMEM combo9[] = { LT(3, KC_SPACE), KC_O, KC_U, COMBO_END};
const uint16_t PROGMEM combo10[] = { DUAL_FUNC_1, NO_QUES, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, ST_MACRO_4),
    COMBO(combo1, KC_RIGHT_ALT),
    COMBO(combo2, KC_RIGHT_CTRL),
    COMBO(combo3, KC_RIGHT_SHIFT),
    COMBO(combo4, KC_CAPS),
    COMBO(combo5, LALT(KC_TAB)),
    COMBO(combo6, CW_TOGG),
    COMBO(combo7, ST_MACRO_5),
    COMBO(combo8, ST_MACRO_6),
    COMBO(combo9, ST_MACRO_7),
    COMBO(combo10, LALT(KC_F4)),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {74,255,255}, {211,208,235}, {211,208,235}, {211,208,235}, {0,0,0}, {211,208,235}, {211,208,235}, {31,255,255}, {211,208,235}, {211,208,235}, {31,255,255}, {211,208,235}, {31,255,255}, {211,208,235}, {211,208,235}, {31,255,255}, {211,208,235}, {31,255,255}, {211,208,235}, {211,208,235}, {31,255,255}, {211,208,235}, {31,255,255}, {211,208,235}, {211,208,235}, {31,255,255}, {211,208,235}, {211,208,235}, {211,208,235}, {0,0,0}, {0,0,0}, {141,255,233}, {211,208,235}, {211,208,235}, {211,208,235}, {211,208,235}, {31,255,255}, {0,0,0}, {211,208,235}, {211,208,235}, {0,0,0}, {31,255,255}, {211,208,235}, {31,255,255}, {211,208,235}, {0,0,0}, {31,255,255}, {211,208,235}, {31,255,255}, {211,208,235}, {211,208,235}, {31,255,255}, {211,208,235}, {31,255,255}, {211,208,235}, {211,208,235}, {31,255,255}, {211,208,235}, {31,255,255}, {211,208,235}, {211,208,235}, {211,208,235}, {211,208,235}, {211,208,235}, {211,208,235}, {0,0,0}, {0,0,0}, {141,255,233}, {211,208,235}, {211,208,235}, {211,208,235}, {211,208,235} },

    [1] = { {62,255,239}, {62,255,239}, {62,255,239}, {62,255,239}, {62,255,239}, {62,255,239}, {62,255,239}, {0,183,238}, {0,183,238}, {62,255,239}, {62,255,239}, {0,183,238}, {0,183,238}, {0,183,238}, {62,255,239}, {62,255,239}, {0,183,238}, {0,183,238}, {0,183,238}, {62,255,239}, {62,255,239}, {0,183,238}, {0,183,238}, {0,183,238}, {62,255,239}, {62,255,239}, {62,255,239}, {62,255,239}, {62,255,239}, {62,255,239}, {62,255,239}, {62,255,239}, {0,183,238}, {0,183,238}, {0,183,238}, {62,255,239}, {62,255,239}, {62,255,239}, {0,183,238}, {62,255,239}, {62,255,239}, {62,255,239}, {62,255,239}, {0,183,238}, {0,183,238}, {62,255,239}, {62,255,239}, {0,183,238}, {0,183,238}, {0,183,238}, {62,255,239}, {62,255,239}, {0,183,238}, {0,183,238}, {0,183,238}, {62,255,239}, {62,255,239}, {0,183,238}, {0,183,238}, {0,183,238}, {62,255,239}, {62,255,239}, {0,183,238}, {62,255,239}, {0,183,238}, {62,255,239}, {62,255,239}, {62,255,239}, {62,255,239}, {0,183,238}, {62,255,239}, {0,183,238} },

    [2] = { {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {134,255,213}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {134,255,213}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {134,255,213}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {134,255,213}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {134,255,213}, {134,255,213}, {14,255,255}, {14,255,255}, {134,255,213}, {134,255,213}, {134,255,213}, {14,255,255}, {14,255,255}, {134,255,213}, {134,255,213}, {134,255,213}, {14,255,255}, {14,255,255}, {134,255,213}, {134,255,213}, {134,255,213}, {14,255,255}, {14,255,255}, {134,255,213}, {134,255,213}, {134,255,213}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255} },

    [3] = { {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {211,208,235}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {211,208,235}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {211,208,235}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {211,208,235}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {211,208,235}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {211,208,235}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {211,208,235}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {211,208,235}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255} },

    [4] = { {0,183,238}, {0,183,238}, {0,183,238}, {141,255,233}, {0,183,238}, {0,183,238}, {141,255,233}, {77,166,195}, {141,255,233}, {0,183,238}, {0,183,238}, {141,255,233}, {77,166,195}, {141,255,233}, {0,183,238}, {0,183,238}, {141,255,233}, {77,166,195}, {141,255,233}, {0,183,238}, {0,183,238}, {141,255,233}, {77,166,195}, {141,255,233}, {141,255,233}, {0,183,238}, {0,183,238}, {0,183,238}, {0,183,238}, {0,183,238}, {0,183,238}, {0,183,238}, {77,166,195}, {77,166,195}, {77,166,195}, {0,183,238}, {0,183,238}, {0,183,238}, {141,255,233}, {141,255,233}, {0,183,238}, {0,183,238}, {141,255,233}, {77,166,195}, {141,255,233}, {0,183,238}, {0,183,238}, {141,255,233}, {77,166,195}, {141,255,233}, {0,183,238}, {0,183,238}, {141,255,233}, {77,166,195}, {141,255,233}, {0,183,238}, {0,183,238}, {141,255,233}, {77,166,195}, {141,255,233}, {0,183,238}, {0,183,238}, {141,255,233}, {141,255,233}, {0,183,238}, {0,183,238}, {0,183,238}, {0,183,238}, {0,183,238}, {0,183,238}, {0,183,238}, {0,183,238} },

    [5] = { {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {132,255,232}, {145,57,250}, {145,57,250}, {145,57,250}, {132,255,232}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {198,244,245}, {33,142,255}, {132,255,232}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {132,255,232}, {115,255,255}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {132,255,232}, {145,57,250}, {145,57,250}, {145,57,250}, {132,255,232}, {145,57,250}, {145,57,250}, {136,235,185}, {100,248,231}, {77,166,195}, {145,57,250}, {145,57,250}, {145,57,250}, {18,238,255}, {24,255,255}, {145,57,250}, {145,57,250}, {139,255,168}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {145,57,250}, {132,255,232} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,183,238}, {0,183,238}, {0,183,238}, {0,0,0}, {0,0,0}, {0,183,238}, {0,183,238}, {0,0,0}, {0,0,0}, {0,0,0}, {0,183,238}, {0,183,238}, {0,0,0}, {0,0,0}, {0,0,0}, {0,183,238}, {0,183,238}, {0,183,238}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,183,238}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,183,238}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,183,238}, {0,0,0}, {0,0,0}, {0,0,0}, {0,183,238}, {0,183,238}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,151}, {0,255,151}, {0,0,0}, {0,0,0}, {0,255,151}, {0,255,151}, {0,255,151}, {0,0,0}, {0,0,0}, {0,255,151}, {0,255,151}, {0,255,151}, {0,0,0}, {0,0,0}, {0,255,151}, {0,255,151}, {0,255,151}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,151}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,151}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,151}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,151}, {0,255,151}, {0,0,0}, {0,0,0}, {0,255,151}, {0,255,151}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,151}, {0,255,151}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {115,255,255}, {115,255,255}, {0,0,0}, {0,0,0}, {115,255,255}, {115,255,255}, {115,255,255}, {0,0,0}, {0,0,0}, {115,255,255}, {115,255,255}, {115,255,255}, {0,0,0}, {0,0,0}, {115,255,255}, {115,255,255}, {115,255,255}, {115,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {115,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {115,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {115,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {115,255,255}, {115,255,255}, {115,255,255}, {0,0,0}, {0,0,0}, {115,255,255}, {115,255,255}, {115,255,255}, {0,0,0}, {0,0,0}, {115,255,255}, {115,255,255}, {115,255,255}, {115,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {115,255,255}, {0,0,0}, {0,0,0} },

    [9] = { {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {211,208,235}, {84,255,255}, {84,255,255}, {84,255,255}, {211,208,235}, {211,208,235}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {211,208,235}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255} },

    [10] = { {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {84,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
    case 10:
      set_layer_color(10);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_8) SS_TAP(X_KP_0) ));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_6) ));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_9) SS_TAP(X_KP_4) ));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_5) SS_TAP(X_KP_2) ));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_2))SS_DELAY(20)  SS_LSFT(SS_TAP(X_2))SS_DELAY(20)  SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_7))SS_DELAY(20)  SS_RALT(SS_TAP(X_0))SS_DELAY(20)  SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_8))SS_DELAY(20)  SS_LSFT(SS_TAP(X_9))SS_DELAY(20)  SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_8))SS_DELAY(20)  SS_RALT(SS_TAP(X_9))SS_DELAY(20)  SS_TAP(X_LEFT));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_COMMA);
        } else {
          unregister_code16(KC_COMMA);
        }
      } else {
        if (record->event.pressed) {
          register_code16(NO_SCLN);
        } else {
          unregister_code16(NO_SCLN);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(NO_MINS);
        } else {
          unregister_code16(NO_MINS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(NO_UNDS);
        } else {
          unregister_code16(NO_UNDS);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_X));
        } else {
          unregister_code16(LCTL(KC_X));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_X)));
        } else {
          unregister_code16(LCTL(LSFT(KC_X)));
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_C));
        } else {
          unregister_code16(LCTL(KC_C));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_C)));
        } else {
          unregister_code16(LCTL(LSFT(KC_C)));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DOT);
        } else {
          unregister_code16(KC_DOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(NO_COLN);
        } else {
          unregister_code16(NO_COLN);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(NO_EQL);
        } else {
          unregister_code16(NO_EQL);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(NO_SLSH);
        } else {
          unregister_code16(NO_SLSH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(NO_GRTR);
        } else {
          unregister_code16(NO_GRTR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(NO_LPRN);
        } else {
          unregister_code16(NO_LPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(NO_RPRN);
        } else {
          unregister_code16(NO_RPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(NO_EQL);
        } else {
          unregister_code16(NO_EQL);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RIGHT_SHIFT);
        } else {
          unregister_code16(KC_RIGHT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_EXLM);
        } else {
          unregister_code16(KC_EXLM);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_5));
        } else {
          unregister_code16(LGUI(KC_5));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_1));
        } else {
          unregister_code16(LGUI(KC_1));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_8));
        } else {
          unregister_code16(LGUI(KC_8));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_LEFT));
        } else {
          unregister_code16(LALT(KC_LEFT));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_U));
        } else {
          unregister_code16(LALT(KC_U));
        }  
      }  
      return false;
    case DUAL_FUNC_16:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_DOWN));
        } else {
          unregister_code16(LALT(KC_DOWN));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_I));
        } else {
          unregister_code16(LALT(KC_I));
        }  
      }  
      return false;
    case DUAL_FUNC_17:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_UP));
        } else {
          unregister_code16(LALT(KC_UP));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_O));
        } else {
          unregister_code16(LALT(KC_O));
        }  
      }  
      return false;
    case DUAL_FUNC_18:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_RIGHT));
        } else {
          unregister_code16(LALT(KC_RIGHT));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_P));
        } else {
          unregister_code16(LALT(KC_P));
        }  
      }  
      return false;
    case DUAL_FUNC_19:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_4));
        } else {
          unregister_code16(LALT(KC_4));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(NO_DLR));
        } else {
          unregister_code16(LALT(NO_DLR));
        }  
      }  
      return false;
    case DUAL_FUNC_20:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_5));
        } else {
          unregister_code16(LALT(KC_5));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_5)));
        } else {
          unregister_code16(LALT(LSFT(KC_5)));
        }  
      }  
      return false;
    case DUAL_FUNC_21:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_6));
        } else {
          unregister_code16(LALT(KC_6));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(NO_CIRC));
        } else {
          unregister_code16(LALT(NO_CIRC));
        }  
      }  
      return false;
    case DUAL_FUNC_22:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_1));
        } else {
          unregister_code16(LALT(KC_1));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_1)));
        } else {
          unregister_code16(LALT(LSFT(KC_1)));
        }  
      }  
      return false;
    case DUAL_FUNC_23:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_2));
        } else {
          unregister_code16(LALT(KC_2));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(NO_AT));
        } else {
          unregister_code16(LALT(NO_AT));
        }  
      }  
      return false;
    case DUAL_FUNC_24:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_3));
        } else {
          unregister_code16(LALT(KC_3));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(NO_PND));
        } else {
          unregister_code16(LALT(NO_PND));
        }  
      }  
      return false;
    case DUAL_FUNC_25:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_7));
        } else {
          unregister_code16(LALT(KC_7));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(NO_AMPR));
        } else {
          unregister_code16(LALT(NO_AMPR));
        }  
      }  
      return false;
    case DUAL_FUNC_26:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_8));
        } else {
          unregister_code16(LALT(KC_8));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(NO_LPRN));
        } else {
          unregister_code16(LALT(NO_LPRN));
        }  
      }  
      return false;
    case DUAL_FUNC_27:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_9));
        } else {
          unregister_code16(LALT(KC_9));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(NO_RPRN));
        } else {
          unregister_code16(LALT(NO_RPRN));
        }  
      }  
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}




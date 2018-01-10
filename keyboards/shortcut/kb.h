#ifndef KB_H
#define KB_H

#define LEADER_TIMEOUT 800

#include "quantum.h"

// Layers

#define TXT 0 // black, no rgb
#define WASD 1 // red_dark
#define WASD2 2 // red
#define CK 3 // cyan_dark
#define CK2 4 // cyan
#define STEL 5 // purple_dark
#define XCOM 6 // yellow_dark
#define SHOG 7 // orange_dark
#define SHOG2 8 // orange
#define TXT2 9 // copy of txt for TG game access, gray_dark
#define NUM 10 // green_dark
#define MOUSE 11 // gray
#define SYM 12 // symbols, blue_dark
#define NAV 13 // navigation and text manipulation, red_dark
#define MDLOB 14 // markdown, accents and lobby to game layouts, yellow
#define FENT 15 // F-keys, enter, tab and math operators, purple

// Layer colours, affects all leds. To be used as a flash on layer change.

#define rgb_black       rgblight_setrgb (0x00, 0x00, 0x00);
#define rgb_gray_dark   rgblight_setrgb (0x03, 0x03, 0x03);
#define rgb_gray        rgblight_setrgb (0x25, 0x25, 0x25);
#define rgb_red_dark    rgblight_setrgb (0x05, 0x00, 0x00);
#define rgb_red         rgblight_setrgb (0x1a, 0x00, 0x00);
#define rgb_orange_dark rgblight_setrgb (0x09, 0x01, 0x00);
#define rgb_orange      rgblight_setrgb (0x1e, 0x16, 0x00);
#define rgb_yellow_dark rgblight_setrgb (0x05, 0x05, 0x00);
#define rgb_yellow      rgblight_setrgb (0x1a, 0x1a, 0x00);
#define rgb_green_dark  rgblight_setrgb (0x00, 0x05, 0x00);
#define rgb_cyan_dark   rgblight_setrgb (0x00, 0x05, 0x05);
#define rgb_cyan        rgblight_setrgb (0x00, 0x1a, 0x1a);
#define rgb_blue_dark   rgblight_setrgb (0x00, 0x00, 0x05);
#define rgb_purple_dark rgblight_setrgb (0x01, 0x00, 0x09);
#define rgb_purple      rgblight_setrgb (0x16, 0x00, 0x1e);

// Layer colours, affects only the first led of 16. Used as stationary indicator.

#define rgb_at_black       rgblight_setrgb_at (0x00, 0x00, 0x00, 0);
#define rgb_at_gray_dark   rgblight_setrgb_at (0x03, 0x03, 0x03, 0);
#define rgb_at_gray        rgblight_setrgb_at (0x25, 0x25, 0x25, 0);
#define rgb_at_red_dark    rgblight_setrgb_at (0x05, 0x00, 0x00, 0);
#define rgb_at_red         rgblight_setrgb_at (0x1a, 0x00, 0x00, 0);
#define rgb_at_orange_dark rgblight_setrgb_at (0x09, 0x01, 0x00, 0);
#define rgb_at_orange      rgblight_setrgb_at (0x1e, 0x16, 0x00, 0);
#define rgb_at_yellow_dark rgblight_setrgb_at (0x05, 0x05, 0x00, 0);
#define rgb_at_yellow      rgblight_setrgb_at (0x1a, 0x1a, 0x00, 0);
#define rgb_at_green_dark  rgblight_setrgb_at (0x00, 0x05, 0x00, 0);
#define rgb_at_cyan_dark   rgblight_setrgb_at (0x00, 0x05, 0x05, 0);
#define rgb_at_cyan        rgblight_setrgb_at (0x00, 0x1a, 0x1a, 0);
#define rgb_at_blue_dark   rgblight_setrgb_at (0x00, 0x00, 0x05, 0);
#define rgb_at_purple_dark rgblight_setrgb_at (0x01, 0x00, 0x09, 0);
#define rgb_at_purple      rgblight_setrgb_at (0x16, 0x00, 0x1e, 0);

// Oneshot modifiers and conveniences

#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define OSM_SFT OSM(MOD_LSFT)
#define OSM_ALT OSM(MOD_LALT)
#define OSM_CTL OSM(MOD_LCTL)
#define OSM_MEH OSM(MOD_MEH)
#define OSM_SUP OSM(MOD_SUPER)
#define OSM_CS OSM(MOD_LCTL | MOD_LSFT)
#define ATAB LALT(KC_TAB)
#define STAB LSFT(KC_TAB)
#define STEAM MEH(KC_O) // steam overlay

// Finnish keymaps, missing currency sign, half sign and maybe something else.

#define FI_O KC_SCLN  // ö
#define FI_A KC_QUOT  // ä
#define FI_AO KC_LBRC // å
#define FI_KYSY LSFT(KC_MINS) // ?
#define FI_HUUT LSFT(KC_1) // !
#define FI_PLUS KC_MINS // +
#define FI_MIINUS KC_SLSH // -
#define FI_KERTO LSFT(KC_NUHS) // *
#define FI_JAKO LSFT(KC_7) // /
#define FI_ISOM LSFT(KC_NUBS) // >
#define FI_PIEN KC_NUBS // <
#define FI_PIPE RALT(KC_NUBS) // |
#define FI_YHTK LSFT(KC_0) // =
#define FI_KENO RALT(KC_MINS) // kenoviiva
#define FI_SULKUV LSFT(KC_8) // (
#define FI_SULKUO LSFT(KC_9) // )
#define FI_HAKASV RALT(KC_8) // [
#define FI_HAKASO RALT(KC_9) // ]
#define FI_AALTOSV RALT(KC_7) // {
#define FI_AALTOSO RALT(KC_0) // }
#define FI_USD RALT(KC_4) // $
#define FI_EUR RALT(KC_5) // €
#define FI_GBP RALT(KC_3) // £
#define FI_AT RALT(KC_2) // 
#define FI_RISU LSFT(KC_3) // #
#define FI_JA LSFT(KC_6) // &
#define FI_PROS LSFT(KC_5) // %
#define FI_LAINAUS LSFT(KC_2) // "
#define FI_HEITTOM KC_NUHS // '
#define FI_PUOLPIS LSFT(KC_COMM) // ;
#define FI_KAKSPIS LSFT(KC_DOT) // :
#define FI_TAVU KC_SLSH // -
#define FI_ALAV LSFT(KC_SLSH) // _
#define FI_UML KC_RBRC // ¨
#define FI_CARET LSFT(KC_RBRC) // ^
#define FI_TILDE RALT(KC_RBRC) // ~
#define FI_LAKI KC_GRV // §
#define FI_ACUTE KC_EQL // ´
#define FI_GRAVE LSFT(KC_EQL) // `

// Text editing

#define DOC_END LCTL(KC_END) // siirry loppuun
#define DOC_HOME LCTL(KC_HOME) // siirry alkuun
#define PARA_UP LCTL(KC_UP) // siirry kappale ylös
#define PARA_DN LCTL(KC_DOWN) // siirry kappale alas
#define WRD_LEFT LCTL(KC_LEFT) // siirry sana vasemmalle
#define WRD_RGHT LCTL(KC_RGHT) // siirry sana oikealle
#define CUT LCTL(KC_X) // cut
#define COPY LCTL(KC_C) // copy
#define PASTE LCTL(KC_V) // paste
#define UNDO LCTL(KC_Z) // undo
#define REDO LCTL(KC_Y) // redo

// Macro names

enum custom_keycodes {
    ENDASH = SAFE_RANGE,
    AALTO,
	PILKKU,
	OSLPOIS,
	MD_VIITA,
	MD_VIITL,
	MD_COMM,
	NUM00,
	NUM000,
	NUM0_0,
	NUM0_00,
	P0_001,
	P0_01,
	P0_05,
	CUTLINE,
	CUTLINEH,
	CUTLINEE,
	CUTPARA,
	CUTWRD_V,
	CUTWRD_O
};

// Keymap matrix for Shortcut v0.5, beta edition without pinky issue.

#define KEYMAP( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, \
	K200, K201, K202, K203,       K205, K206, K207, K208, K209, K210,       K212, K213, \
	                              K305, K306,                               K312, K313  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113 }, \
	{ K200,  K201,  K202,  K203,  KC_NO, K205,  K206,  K207,  K208,  K209,  K210,  KC_NO, K212,  K213 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K305,  K306,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K312,  K313 }  \
}

#endif
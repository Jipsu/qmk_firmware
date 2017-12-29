#ifndef KB_H
#define KB_H

#include "quantum.h"

#define _______ KC_TRNS
#define ------- KC_NO
#define TXT 0
#define MOUSE 10
#define F 11
#define TXT2 12
#define NUM 13
#define SYM 14
#define NAV 15
#define WASD 1
#define WASD2 2
#define CK2 3
#define CK2_2 4
#define STELLARI 5
#define XCOM 6
#define SHOGUN2 7
#define SHOGUN22 8

#define STEAM MEH(KC_O)
#define OSM_SFT OSM(MOD_LSFT)
#define OSM_ALT OSM(MOD_LALT)
#define OSM_CTR OSM(MOD_LCTL)
#define OSM_MEH OSM(MOD_MEH)
#define OSM_SUP OSM(MOD_SUPER)
#define OSM_CS OSM(MOD_LCTL | MOD_LSFT)
#define ATAB LALT(KC_TAB)
#define STAB LSFT(KC_TAB)

#define FI_O KC_SCLN  // ö
#define FI_A KC_QUOT  // ä
#define FI_AO KC_LBRC // å
#define FI_KYSY LSFT(KC_MINS) // ?
#define FI_HUUT LSFT(KC_1) // !
#define FI_PLUS KC_MINS // +
#define FI_MINS KC_SLSH // -
#define FI_KERT LSFT(KC_NUHS) // *
#define FI_JAKO LSFT(KC_7) // /
#define FI_ISOM LSFT(KC_NUBS) // >
#define FI_PIEN KC_NUBS // <
#define FI_PIPE RALT(KC_NUBS) // |
#define FI_YHTK LSFT(KC_0) // =
#define FI_KENO RALT(KC_MINS) // \ 
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
#define FI_GRAVE LSFT(KC_EQL)) // `
#define  // 
#define DOC_END LCTL(KC_END) // 
#define DOC_HOME LCTL(KC_HOME) // 
#define PARA_UP LCTL(KC_UP) // 
#define PARA_DN LCTL(KC_DOWN) // 
#define WRD_LEFT LCTL(KC_LEFT) // 
#define WRD_RGHT LCTL(KC_RGHT) // 
#define CUTLINE M(28) // 
#define CUTLINEE M(27) // 
#define CUTLINEH M(26) // 
#define CUT LCTL(KC_X) // 
#define COPY LCTL(KC_C) // 
#define PASTE LCTL(KC_V) // 
#define UNDO LCTL(KC_Z) // 
#define REDO LCTL(KC_Y) // 
#define CUTPARA M(29) // 
#define DELWRD_O M(25) // 
#define DELWRD_V M(24) // 
#define MD_COMM M(23) // 
#define MD_VIITA M(2) // 
#define MD_VIITL M(3) // 

#define ENDASH M(0) // 
#define AALTO M(1) // ~(SPACE)


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
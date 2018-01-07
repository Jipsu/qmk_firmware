#include "kb.h"
#define LEADER_TIMEOUT 300

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[TXT] = KEYMAP(
			KC_C, 		KC_F, 		KC_H, 		KC_P, 		KC_Q, 		OSM_SFT, 	KC_SPC, 			FI_A, 		KC_G, 		KC_V, 		KC_R, 		KC_LGUI, 	OSL(NAV), 	KC_BSPC, 	
			KC_L, 		KC_I, 		KC_S, 		KC_T, 		KC_Z, 		OSM_ALT, 	KC_DOT, 			KC_U, 		KC_A, 		KC_E, 		KC_N, 		KC_B, 		TG(MOUSE), 	KC_O, 	
		KC_X, 			KC_W, 		KC_Y, 		KC_K, 					OSM_CTR, 	OSL(NUM), 		FI_O, 			KC_D, 		KC_J, 		KC_M, 					OSL(MDLOB), OSL(SYM), 	
																		KC_LEAD, 	OSL(FENT), 																		OSM_MEH, 	PILKKU),

	[WASD] = KEYMAP(
			KC_V, 		KC_4, 		KC_3, 		KC_2, 		KC_N, 		KC_LSFT, 	KC_1, 				KC_VOLD, 	KC_VOLU, 	ATAB, 		KC_ESC, 	TO(TXT), 	KC_DOWN, 	KC_DEL, 	
			KC_W, 		KC_S, 		KC_A, 		KC_D, 		KC_M, 		KC_LALT, 	KC_E, 				FI_JAKO, 	KC_TAB, 	STAB, 		KC_ENTER, 	-------, 	KC_RGHT, 	-------, 	
		KC_R, 			KC_Z, 		KC_X, 		KC_U, 					KC_LCTL, 	KC_SPC, 		STEAM, 			FI_KERTO, 	FI_MIINUS, 	FI_PLUS, 				KC_UP, 		-------, 	
																		OSL(WASD2),	KC_Q, 																			KC_LEFT, 	-------),

	[WASD2] = KEYMAP(
			KC_O, 		KC_7, 		KC_6, 		KC_5, 		KC_T, 		KC_F7, 		KC_F3, 				KC_F11, 	KC_F9, 		KC_F8, 		KC_F7, 		TO(TXT), 	_______, 	_______, 	
			_______, 	_______, 	_______, 	_______, 	KC_Y, 		KC_F6, 		KC_F2,	 			KC_F10, 	KC_F6, 		KC_F5, 		KC_F4, 		_______, 	_______, 	_______, 	
		KC_P, 			KC_0, 		KC_9, 		KC_8, 					KC_F5, 		KC_F1, 			KC_F12, 		KC_F3, 		KC_F2, 		KC_F1, 					_______, 	_______, 	
																		_______, 	KC_F4, 																			_______, 	_______),

	[CK] = KEYMAP(
			KC_X, 		KC_COMM, 	KC_DOT, 	FI_KYSY, 	KC_BSPC, 	OSM_SFT, 	KC_SPC, 			KC_VOLD, 	KC_VOLU, 	ATAB, 		KC_ESC, 	TO(TXT), 	KC_DOWN, 	KC_DEL, 	
			KC_C, 		KC_Z, 		KC_V, 		KC_B, 		KC_N, 		OSM_ALT, 	FI_PLUS, 			FI_JAKO, 	KC_TAB, 	STAB, 		KC_ENTER, 	-------, 	KC_RGHT, 	-------, 	
		KC_ESC, 		KC_LEFT, 	KC_RGHT, 	OSL(CK2), 				OSM_CTR, 	OSL(FENT), 		STEAM, 			FI_KERTO, 	FI_MIINUS, 	FI_PLUS, 				KC_UP, 		-------, 	
																		OSL(NUM), 	FI_MINS, 																		KC_LEFT, 	-------),

	[CK2] = KEYMAP(
			KC_D, 		KC_Q, 		KC_J, 		KC_U, 		KC_M, 		_______, 	_______, 			_______, 	_______, 	_______, 	_______, 	TO(TXT), 	_______, 	_______, 	
			KC_E, 		KC_I, 		KC_F, 		KC_W, 		KC_L, 		_______, 	_______, 			_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	
		KC_K, 			KC_R, 		KC_G, 		KC_U, 					_______, 	_______, 		_______, 		_______, 	_______, 	_______, 				_______, 	_______, 	
																		_______, 	_______, 																		_______, 	_______),

	[STEL] = KEYMAP(
			KC_DEL, 	KC_T, 		KC_H, 		KC_G, 		KC_BSPC, 	OSM_SFT, 	KC_SPC, 			KC_VOLD, 	KC_VOLU, 	ATAB, 		KC_ESC, 	TO(TXT), 	KC_DOWN, 	KC_DEL, 	
			KC_Z, 		KC_X, 		KC_C, 		KC_V, 		KC_TAB, 	OSM_ALT, 	FI_PLUS, 			FI_JAKO, 	KC_TAB, 	STAB, 		KC_ENTER, 	-------, 	KC_RGHT, 	-------, 	
		KC_ESC, 		KC_Q, 		KC_B, 		KC_M, 					OSM_CTR, 	OSL(FENT), 		STEAM, 			FI_KERTO, 	FI_MIINUS, 	FI_PLUS, 				KC_UP, 		-------, 	
																		OSL(NUM), 	FI_MINS, 																		KC_LEFT, 	-------),

	[XCOM] = KEYMAP(
			KC_2, 		KC_F2, 		KC_F3, 		KC_K, 		LALT(KC_O), KC_S, 		KC_G, 				KC_VOLD, 	KC_VOLU, 	ATAB, 		KC_ESC, 	TO(TXT), 	KC_DOWN, 	KC_DEL, 	
			KC_ENT, 	KC_LSFT, 	KC_1, 		KC_TAB, 	KC_F1, 		KC_D, 		KC_E, 				FI_JAKO, 	KC_TAB, 	STAB, 		KC_ENTER, 	-------, 	KC_RGHT, 	-------, 	
		KC_R, 			KC_ESC, 	KC_X, 		KC_V, 					KC_W, 		KC_T, 			STEAM, 			FI_KERTO, 	FI_MIINUS, 	FI_PLUS, 				KC_UP, 		-------, 	
																		KC_A, 		KC_Q, 																			KC_LEFT, 	-------),

	[SHOG] = KEYMAP(
			KC_F4, 		KC_F3, 		KC_F2, 		KC_F1, 		KC_BSPC, 	OSM_SFT,  	_______, 			KC_VOLD, 	KC_VOLU, 	ATAB, 		KC_ESC, 	TO(TXT), 	KC_DOWN, 	KC_DEL, 	
			KC_W, 		KC_S, 		KC_A, 		KC_D, 		KC_HOME, 	OSM_ALT,  	KC_E, 				FI_JAKO, 	KC_TAB, 	STAB, 		KC_ENTER, 	-------, 	KC_RGHT, 	-------, 	
		KC_G, 			LSFT(KC_2), KC_F, 		KC_R, 					OSM_CTR,  	KC_N, 			STEAM, 			FI_KERTO, 	FI_MIINUS, 	FI_PLUS, 				KC_UP, 		-------, 	
																		OSL(SHOG2), KC_Q, 																			KC_LEFT, 	-------),

	[SHOG2] = KEYMAP(
			LCTR(KC_B), LCTR(KC_C), LCTR(KC_M), LCTR(KC_I), KC_8, 		_______, 	_______, 			_______, 	_______, 	_______, 	_______, 	TO(TXT), 	_______, 	_______, 	
			KC_0, 		KC_4, 		KC_5, 		KC_6, 		KC_7, 		_______, 	_______, 			_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	
		_______, 		KC_1, 		KC_2, 		KC_3, 					_______, 	_______, 		_______, 		_______, 	_______, 	_______, 				_______, 	_______, 	
																		_______, 	_______, 																		_______, 	_______),

	[TXT2] = KEYMAP(
			KC_C, 		KC_F, 		KC_H, 		KC_P, 		KC_Q, 		OSM_SFT, 	KC_SPC, 			FI_A, 		KC_G, 		KC_V, 		KC_R, 		TG(TXT2), 	OSL(NAV), 	KC_BSPC, 	
			KC_L, 		KC_I, 		KC_S, 		KC_T, 		KC_Z, 		OSM_ALT, 	KC_DOT, 			KC_U, 		KC_A, 		KC_E, 		KC_N, 		KC_B, 		TG(MOUSE), 	KC_O, 	
		KC_X, 			KC_W, 		KC_Y, 		KC_K, 					OSM_CTR, 	OSL(NUM), 		FI_O, 			KC_D, 		KC_J, 		KC_M, 					OSL(MDLOB), OSL(SYM), 	
																		KC_LEAD, 	OSL(FENT), 																		OSM_MEH, 	PILKKU),

	[NUM] = KEYMAP(
			KC_DOT, 	KC_7, 		KC_8, 		KC_9, 		-------, 	_______, 	_______, 			KC_DOT, 	KC_9, 		KC_8, 		KC_7, 		TO(TXT), 	_______, 	_______, 	
			KC_0, 		KC_4, 		KC_5, 		KC_6, 		TG(ALTNUM), _______, 	_______, 			KC_0, 		KC_6, 		KC_5, 		KC_4, 		TG(NUM), 	_______, 	_______, 	
		OSM_CTR, 		KC_1, 		KC_2, 		KC_3, 					_______, 	OSLPOIS, 		-------, 		KC_3, 		KC_2, 		KC_1, 					_______, 	_______, 	
																		_______, 	_______, 																		_______, 	KC_COMM),
																		
	[ALTNUM] = KEYMAP(
			KC_DOT, 	FI_AALTOSV, FI_HAKASV, 	FI_SULKUV, 	-------, 	_______, 	_______,			KC_DOT, 	FI_AALTOSO, FI_HAKASO, 	FI_SULKUO, 	TO(TXT), 	_______, 	_______, 	
			KC_6, 		KC_4, 		KC_2, 		KC_0, 		_______, 	_______, 	_______,			KC_7, 		KC_5, 		KC_3, 		KC_1, 		-------, 	_______, 	_______, 	
		-------, 		NUM000, 	NUM00, 		KC_8, 					_______, 	-------, 		-------, 		NUM0_0, 	NUM0_00, 	KC_9, 					_______, 	_______, 	
																		_______, 	_______,																		_______, 	KC_COMM),
																		
	[MOUSE] = KEYMAP(
			-------, 	-------, 	-------, 	-------, 	-------, 	_______, 	KC_WH_D, 			-------, 	-------, 	-------, 	-------, 	TO(TXT), 	_______, 	-------, 	
			KC_MS_U, 	KC_MS_D, 	KC_MS_L, 	KC_MS_R, 	-------, 	_______, 	KC_WH_R, 			KC_ACL2, 	KC_ACL1, 	KC_ACL0, 	KC_BTN1, 	-------, 	_______, 	-------, 	
		-------, 		-------, 	KC_BTN4, 	KC_BTN5, 				_______, 	KC_WH_U, 		-------, 		-------, 	KC_BTN3, 	KC_BTN2, 				_______, 	-------, 	
																		_______, 	KC_WH_L, 																		-------, 	-------),

	[SYM] = KEYMAP(
			FI_ISOM, 	FI_JAKO, 	FI_AALTOSV, FI_AALTOSO, FI_USD, 	KC_CAPS, 	FI_KYSY, 			FI_RISU, 	FI_JA, 		FI_PROS, 	ENDASH, 	FI_GBP, 	_______, 	_______, 
			FI_YHTK, 	FI_PIPE, 	FI_SULKUV, 	FI_SULKUO, 	FI_AT, 		-------, 	_______, 			AALTO, 		FI_LAINAUS, FI_HEITTOM, FI_TAVU, 	FI_EUR, 	_______, 	_______, 
		FI_PIEN, 		FI_KENO, 	FI_HAKASV, 	FI_HAKASO, 				-------, 	FI_HUUT, 		FI_LAKI, 		FI_PUOLPIS, FI_KAKSPIS, FI_ALAV, 				_______, 	OSLPOIS, 
																		-------, 	-------, 																		_______, 	_______),

	[NAV] = KEYMAP(
			DOC_END, 	PARA_UP, 	KC_HOME, 	KC_END, 	KC_PGUP, 	_______, 	_______, 			COPY, 		CUTLINE, 	CUTLINEE, 	CUTLINEH, 	TO(TXT), 	OSLPOIS, 	_______, 	
			KC_UP, 		KC_DOWN, 	KC_LEFT, 	KC_RGHT, 	KC_PGDN, 	_______, 	_______, 			PASTE, 		CUT, 		REDO, 		UNDO, 		TG(NAV), 	-------, 	_______, 	
		DOC_HOME, 		PARA_DN, 	WRD_LEFT, 	WRD_RGHT, 				_______, 	_______, 		-------, 		CUTPARA, 	DELWRD_O, 	DELWRD_V, 				_______, 	-------, 	
																		OSM_CS, 	_______, 																		_______, 	-------)

	[MDLOB] = KEYMAP(
			FI_GRAVE, 	FI_TILDE, 	FI_CARET, 	FI_UML, 	FI_AO, 		KC_RSFT, 	KC_INS, 			-------, 	-------, 	-------, 	-------, 	TO(TXT), 	RGB_TOG, 	-------, 	
			P0_001, 	P0_01, 		P0_05, 		MD_VIITL, 	-------, 	KC_RALT, 	-------, 			TO(SHOG), 	TO(XCOM), 	TO(CK), 	TO(WASD), 	KC_PSCR, 	-------, 	-------, 	
		FI_ACUTE, 		-------, 	-------, 	MD_COMM, 				KC_RCTR, 	KC_PAUS, 		RESET, 			-------, 	TO(STEL), 	-------, 				OSLPOIS, 	-------, 	
																		KC_RGUI, 	-------, 																		-------, 	-------),

	[FENT] = KEYMAP(
			KC_F11, 	KC_F7, 		KC_F8, 		KC_F9, 		-------, 	_______, 	_______, 			KC_VOLD, 	KC_VOLU, 	ATAB, 		KC_ESC, 	TO(TXT), 	KC_DOWN, 	KC_DEL, 	
			KC_F10, 	KC_F4, 		KC_F5, 		KC_F6, 		-------, 	_______, 	_______, 			FI_JAKO, 	KC_TAB, 	STAB, 		KC_ENTER, 	-------, 	KC_RGHT, 	-------, 	
		KC_F12, 		KC_F1, 		KC_F2, 		KC_F3, 					_______, 	_______, 		-------, 		FI_KERTO, 	FI_MIINUS, 	FI_PLUS, 				KC_UP, 		-------, 	
																		_______, 	OSLPOIS, 																		KC_LEFT, 	-------),
	
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	keyevent_t event = record->event;

	switch (id) {
		case 0:
			if (record->event.pressed) {
				return MACRO( D(LALT), T(P0), T(P1), T(P5), T(P0), U(LALT), END );
			}
			break;
		case 1:
			if (record->event.pressed) {
				return MACRO( D(RALT), T(RBRC), U(RALT), T(SPC), END );
			}
			break;
		case 2:
			if (record->event.pressed) {
				return MACRO( D(RALT), T(8), U(RALT), D(LSFT), T(RBRC), U(LSFT), T(SPC), D(RALT), T(9), U(RALT), T(LEFT), END );
			}
			break;
		case 3:
			if (record->event.pressed) {
				return MACRO( D(RALT), T(8), T(2), T(9), U(RALT), T(LEFT), END );
			}
			break;
		case 4:
			if (record->event.pressed) {
				return MACRO( T(COMM), T(SPC), END );
			}
			break;
		case 5:
			if (record->event.pressed) {
				return MACRO( T(KC_0), T(KC_0), END );
			}
			break;
		case 6:
			if (record->event.pressed) {
				return MACRO( T(KC_0), T(KC_0), T(KC_0), END );
			}
			break;
		case 7:
			if (record->event.pressed) {
				return MACRO( T(KC_0), T(COMM), T(KC_0), END );
			}
			break;
		case 8:
			if (record->event.pressed) {
				return MACRO( T(KC_0), T(COMM), T(KC_0), T(KC_0), END );
			}
			break;
		case 9:
			if (record->event.pressed) {
				return MACRO( T(KC_P), T(FI_PIEN), T(KC_0), T(COMM), T(KC_0), T(KC_0), T(KC_1), END );
			}
			break;
		case 10:
			if (record->event.pressed) {
				return MACRO( T(KC_P), T(FI_PIEN), T(KC_0), T(COMM), T(KC_0), T(KC_1), END );
			}
			break;
		case 11:
			if (record->event.pressed) {
				return MACRO( T(KC_P), T(FI_PIEN), T(KC_0), T(COMM), T(KC_0), T(KC_5), END );
			}
			break;
		case 12:
			if (record->event.pressed) {
				return MACRO( T(END), D(LSFT), T(HOME), U(LSFT), D(LCTL), T(X), U(LCTL), END );
			}
			break;
		case 13:
			if (record->event.pressed) {
				return MACRO( D(RALT), T(8), U(RALT), T(C), T(O), T(M), T(M), T(E), T(N), T(T), D(LALT), T(9), U(LALT), D(LSFT), T(DOT), U(LSFT), T(SPC), D(LSFT), T(3), U(LSFT), T(SPC), END );
			}
			break;
		case 14:
			if (record->event.pressed) {
				return MACRO( D(LSFT), D(LCTL), T(LEFT), U(LCTL), U(LSFT), T(DEL), END );
			}
			break;
		case 15:
			if (record->event.pressed) {
				return MACRO( D(LSFT), D(LCTL), T(RGHT), U(LCTL), U(LSFT), T(DEL), END );
			}
			break;
		case 16:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(HOME), U(LSFT), T(DEL), END );
			}
			break;
		case 17:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(END), U(LSFT), T(DEL), END );
			}
			break;
		case 18:
			if (record->event.pressed) {
				return MACRO( D(LCTL), T(DOWN), D(LSFT), T(UP), U(LSFT), U(LCTL), T(DEL), END );
			}
			break;
		case 19:
			if (record->event.pressed) {
				return MACRO( T(SPC), T(BSPC), END );
			}
			break;
	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {

  static uint8_t old_layer = NULL;
  uint8_t new_layer = biton32(layer_state);

  if (old_layer != new_layer) {
    switch (new_layer) {
      case 0:
        rgblight_setrgb(0x00, 0x00, 0x00);
        break;
      case 1:
        rgblight_setrgb(0x05, 0x00, 0x00);
        break;
      case 2:
        rgblight_setrgb(0x1a, 0x00, 0x00);
        break;
      case 3:
        rgblight_setrgb(0x00, 0x03, 0x05);
        break;
      case 4:
        rgblight_setrgb(0x00, 0x0d, 0x1a);
        break;
      case 5:
        rgblight_setrgb(0x05, 0x05, 0x00);
        break;
      case 6:
        rgblight_setrgb(0x00, 0x05, 0x05);
        break;
      case 7:
        rgblight_setrgb(0x00, 0x05, 0x05);
        break;
      case 8:
        rgblight_setrgb(0x00, 0x05, 0x05);
        break;
      case 9:
        rgblight_setrgb(0x03, 0x03, 0x03);
        break;
      case 10:
        rgblight_setrgb(0x00, 0x05, 0x00);
        break;
      case 13:
        rgblight_setrgb(0x03, 0x03, 0x02);
        break;
      case 14:
        rgblight_setrgb(0x03, 0x02, 0x02);
        break;
      case 15:
        rgblight_setrgb(0x33, 0x00, 0x33);
        break;
      case 16:
        rgblight_setrgb(0x03, 0x03, 0x02);
        break;
    }

    old_layer = new_layer;
  }

  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_ONE_KEY(KC_F) {
      register_code(KC_S);
      unregister_code(KC_S);
    }
    SEQ_TWO_KEYS(KC_A, KC_S) {
      register_code(KC_H);
      unregister_code(KC_H);
    }
    SEQ_THREE_KEYS(KC_A, KC_S, KC_D) {
      register_code(KC_LGUI);
      register_code(KC_S);
      unregister_code(KC_S);
      unregister_code(KC_LGUI);
    }
  }
  
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}
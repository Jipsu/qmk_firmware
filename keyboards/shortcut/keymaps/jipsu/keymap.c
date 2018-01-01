#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[TXT] = KEYMAP(
		KC_C, 		KC_F, 		KC_H, 		KC_P, 		TG(F), 		OSM_SFT, 	KC_SPC, 		FI_O, 		KC_G, 		KC_V, 		KC_R, 		KC_ESC, 	KC_DEL, 	KC_BSPC, 	
		KC_L, 		KC_I, 		KC_S, 		KC_T, 		KC_Z, 		OSM_ALT, 	KC_TAB, 		KC_U, 		KC_A, 		KC_E, 		KC_N, 		KC_B, 		FI_A, 		KC_O, 	
		KC_X, 		KC_W, 		KC_Y, 		KC_K, 					OSM_CTR, 	TG(NUM), 		KC_Q, 		KC_D, 		KC_J, 		KC_M, 					TG(NAV), 	OSL(SYM), 	
																	KC_LGUI, 	KC_ENT, 																	OSM_MEH, 	PILKKU,

	[WASD] = KEYMAP(
		KC_V, 		KC_4, 		KC_3, 		KC_2, 		KC_N, 		KC_LSFT, 	KC_1, 			-------, 	-------, 	KC_COMM, 	KC_DOT, 	TO(TXT), 	KC_VOLD, 	KC_DOWN, 	
		KC_W, 		KC_S, 		KC_A, 		KC_D, 		KC_M, 		KC_LALT, 	KC_E, 			ATAB, 		KC_TAB, 	KC_ESC, 	KC_ENT, 	TG(TXT2), 	-------, 	KC_RGHT, 	
		KC_R, 		KC_Z, 		KC_X, 		KC_U, 					KC_LCTL, 	KC_SPC, 		STEAM, 		-------, 	-------, 	-------, 				KC_VOLU, 	KC_UP, 	
																	OSL(WASD2),	KC_Q, 																		-------, 	KC_LEFT),

	[WASD2] = KEYMAP(
		KC_O, 		KC_7, 		KC_6, 		KC_5, 		KC_T, 		KC_F7, 		KC_F3, 			KC_F11, 	KC_F9, 		KC_F8, 		KC_F7, 		-------, 	-------, 	-------, 	
		_______, 	_______, 	_______, 	_______, 	KC_Y, 		KC_F6, 		KC_F2,	 		KC_F10, 	KC_F6, 		KC_F5, 		KC_F4, 		-------, 	-------, 	-------, 	
		KC_P, 		KC_0, 		KC_9, 		KC_8, 					KC_F5, 		KC_F1, 			KC_F12, 	KC_F3, 		KC_F2, 		KC_F1, 					-------, 	-------, 	
																	_______, 	KC_F4, 																		-------, 	-------),

	[CK] = KEYMAP(
		KC_X, 		KC_COMM, 	KC_DOT, 	FI_KYSY, 	KC_BSPC, 	OSM_SFT, 	KC_SPC, 		-------, 	-------, 	-------, 	-------, 	TO(TXT), 	KC_VOLD, 	KC_DOWN, 	
		KC_C, 		KC_Z, 		KC_V, 		KC_B, 		KC_N, 		OSM_ALT, 	FI_PLUS, 		ATAB, 		KC_TAB, 	KC_ESC, 	KC_ENT, 	TG(TXT2), 	-------, 	KC_RGHT, 	
		KC_ESC, 	KC_LEFT, 	KC_RGHT, 	OSL(CK2), 				OSM_CTR, 	OSL(F), 		STEAM, 		-------, 	-------, 	-------, 				KC_VOLU, 	KC_UP, 	
																	OSL(NUM), 	FI_MINS, 																	-------, 	KC_LEFT),

	[CK2] = KEYMAP(
		KC_D, 		KC_Q, 		KC_J, 		KC_U, 		KC_M, 		_______, 	_______, 		_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	
		KC_E, 		KC_I, 		KC_F, 		KC_W, 		KC_L, 		_______, 	_______, 		_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	
		KC_K, 		KC_R, 		KC_G, 		KC_U, 					_______, 	_______, 		_______, 	_______, 	_______, 	_______, 				_______, 	_______, 	
																	_______, 	_______, 																	_______, 	_______),

	[STELLARI] = KEYMAP(
		KC_DEL, 	KC_T, 		KC_H, 		KC_G, 		KC_BSPC, 	OSM_SFT, 	KC_SPC, 		-------, 	-------, 	-------, 	-------, 	TO(TXT), 	KC_VOLD, 	KC_DOWN, 	
		KC_Z, 		KC_X, 		KC_C, 		KC_V, 		KC_TAB, 	OSM_ALT, 	FI_PLUS, 		ATAB, 		KC_TAB, 	KC_ESC, 	KC_ENT, 	TG(TXT2), 	-------, 	KC_RGHT, 	
		KC_ESC, 	KC_Q, 		KC_B, 		KC_M, 					OSM_CTR, 	OSL(F), 		STEAM, 		-------, 	-------, 	-------, 				KC_VOLU, 	KC_UP, 	
																	OSL(NUM), 	FI_MINS, 																	-------, 	KC_LEFT),

	[XCOM] = KEYMAP(
		KC_2, 		KC_F2, 		KC_F3, 		KC_K, 		LALT(KC_O), KC_S, 		KC_G, 			-------, 	-------, 	-------, 	KC_HOME, 	TO(TXT), 	KC_VOLD, 	KC_DOWN, 	
		KC_ENT, 	KC_LSFT, 	KC_1, 		KC_TAB, 	KC_F1, 		KC_D, 		KC_E, 			ATAB, 		KC_TAB, 	KC_ESC, 	KC_ENT, 	TG(TXT2), 	-------, 	KC_RGHT, 	
		KC_R, 		KC_ESC, 	KC_X, 		KC_V, 					KC_W, 		KC_T, 			STEAM, 		-------, 	-------, 	-------, 				KC_VOLU, 	KC_UP, 	
																	KC_A, 		KC_Q, 																		-------, 	KC_LEFT),

	[SHOG] = KEYMAP(
		_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 		_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	
		_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 		_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	
		_______, 	_______, 	_______, 	_______, 				_______, 	_______, 		_______, 	_______, 	_______, 	_______, 				_______, 	_______, 	
																	_______, 	_______, 																	_______, 	_______),

	[SHOG2] = KEYMAP(
		_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 		_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	
		_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 		_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	
		_______, 	_______, 	_______, 	_______, 				_______, 	_______, 		_______, 	_______, 	_______, 	_______, 				_______, 	_______, 	
																	_______, 	_______, 																	_______, 	_______),

	KEYMAP(
		_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 		_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	
		_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 		_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	
		_______, 	_______, 	_______, 	_______, 				_______, 	_______, 		_______, 	_______, 	_______, 	_______, 				_______, 	_______, 	
																	_______, 	_______, 																	_______, 	_______),

	[MOUSE] = KEYMAP(
		-------, 	-------, 	-------, 	-------, 	TO(TXT), 	KC_WH_D, 	-------, 		-------, 	-------, 	-------, 	M(30), 		TO(TXT), 	-------, 	-------, 	
		KC_MS_U, 	KC_MS_D, 	KC_MS_L, 	KC_MS_R, 	-------, 	KC_WH_R, 	-------, 		KC_ACL2, 	KC_ACL1, 	KC_ACL0, 	KC_BTN1, 	-------, 	-------, 	-------, 	
		-------, 	-------, 	KC_BTN4, 	KC_BTN5, 				KC_WH_U, 	TG(NUM), 		-------, 	-------, 	KC_BTN3, 	KC_BTN2, 				TG(NAV), 	OSL(SYM), 	
																	KC_WH_L, 	-------, 																	-------, 	-------),

	[F] = KEYMAP(
		KC_F11, 	KC_F7, 		KC_F8, 		KC_F9, 		_______, 	-------, 	-------, 		KC_PAUS, 	KC_INS, 	KC_SLCK, 	RESET, 		TO(TXT), 	KC_VOLD, 	KC_DOWN, 	
		KC_F10, 	KC_F4, 		KC_F5, 		KC_F6, 		-------, 	-------, 	-------, 		TO(XCOM), 	TO(STELL), 	TO(CK), 	TO(WASD), 	TG(TXT2), 	KC_MNXT, 	KC_RGHT, 	
		KC_F12, 	KC_F1, 		KC_F2, 		KC_F3, 					-------, 	-------, 		STEAM, 		KC_RSFT, 	RGB_MOD, 	RGB_TOG, 				KC_VOLU, 	KC_UP, 	
																	-------, 	-------, 																	KC_MSTP, 	KC_LEFT),

	[TXT2] = KEYMAP(
		KC_C, 		KC_F, 		KC_H, 		KC_P, 		TO(F),	 	OSM_SFT, 	KC_SPC, 		FI_O, 		KC_G, 		KC_V, 		KC_R, 		TG(TXT2), 	KC_DEL, 	KC_BSPC, 	
		KC_L, 		KC_I, 		KC_S, 		KC_T, 		KC_Z, 		OSM_ALT, 	KC_TAB, 		KC_U, 		KC_A, 		KC_E, 		KC_N, 		KC_B, 		FI_A, 		KC_O, 	
		KC_X, 		KC_W, 		KC_Y, 		KC_K, 					OSM_CTR, 	TG(NUM), 		KC_Q, 		KC_D, 		KC_J, 		KC_M, 					TG(NAV), 	OSL(SYM), 	
																	KC_LGUI, 	KC_ENT, 																	OSM_MEH, 	KC_COMM),
		
	[NUM] = KEYMAP(
		KC_COMM, 	KC_7, 		KC_8, 		KC_9, 		-------, 	FI_PLUS, 	KC_SPC, 		KC_F11, 	KC_F9, 		KC_F8, 		KC_F7, 		-------, 	KC_T, 		KC_BSPC, 	
		KC_0, 		KC_4, 		KC_5, 		KC_6, 		KC_DOT, 	FI_KERT, 	KC_TAB, 		KC_F10, 	KC_F6, 		KC_F5, 		KC_F4, 		-------, 	KC_N, 		KC_O, 	
		OSM_CTR, 	KC_1, 		KC_2, 		KC_3, 					FI_MINS, 	_______, 		KC_F12, 	KC_F3, 		KC_F2, 		KC_F1, 					TG(NAV), 	OSL(SYM), 	
																	FI_JAKO, 	KC_ENT, 																	-------, 	-------),

	[SYM] = KEYMAP(
		FI_ISOM, 	FI_JAKO, 	FI_AALTOSV, FI_AALTOSO, FI_USD, 	_______, 	FI_KYSY, 		FI_RISU, 	FI_JA, 		FI_PROS, 	ENDASH, 	FI_GBP, 	FI_TILDE, 	FI_LAKI, 	
		FI_YHTK, 	FI_PIPE, 	FI_SULKUV, 	FI_SULKUO, 	FI_AT, 		_______, 	KC_DOT, 		AALTO, 		FI_LAINAUS, FI_HEITTOM, FI_TAVU, 	FI_EUR, 	FI_AO, 		FI_ACUTE, 	
		FI_PIEN, 	FI_KENO, 	FI_HAKASV, 	FI_HAKASO, 				_______, 	FI_HUUT, 		KC_PSCR, 	FI_PUOLPIS, FI_KAKSPIS, FI_ALAV, 				FI_UML, 	_______, 	
																	_______, 	STAB, 																		FI_CARET, 	FI_GRAVE,

	[NAV] = KEYMAP(
		DOC_END, 	PARA_UP, 	KC_HOME, 	KC_END, 	KC_PGUP, 	OSM_SFT, 	MD_COMM, 		-------, 	CUTLINE, 	CUTLINEE, 	CUTLINEH, 	REDO, 		-------, 	-------, 	
		KC_UP, 		KC_DOWN, 	KC_LEFT, 	KC_RGHT, 	KC_PGDN, 	OSM_ALT, 	MD_VIITA, 		-------, 	CUT, 		COPY, 		PASTE, 		UNDO, 		-------, 	-------, 	
		DOC_HOME, 	PARA_DN, 	WRD_LEFT, 	WRD_RGHT, 				OSM_CTR, 	-------, 		KC_CAPS, 	CUTPARA, 	DELWRD_O, 	DELWRD_V, 				_______, 	-------, 	
																	OSM_CS, 	MD_VIITL, 																	-------, 	-------)

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
				return MACRO( D(RALT), T(MINS), U(RALT), T(O), D(LSFT), T(7), U(LSFT), END );
			}
			break;
		case 5:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(RBRC), T(SPC), T(SLSH), T(RBRC), U(LSFT), T(SPC), END );
			}
			break;
		case 6:
			if (record->event.pressed) {
				return MACRO( T(DOT), T(SPC), END );
			}
			break;
		case 7:
			if (record->event.pressed) {
				return MACRO( T(COMM), T(SPC), END );
			}
			break;
		case 8:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(0), T(S), T(U), T(M), T(M), T(A), T(8), T(9), U(LSFT), T(LEFT), END );
			}
			break;
		case 9:
			if (record->event.pressed) {
				return MACRO( T(SPC), T(BSPC), END );
			}
			break;
		case 10:
			if (record->event.pressed) {
				return MACRO( T(ENT), T(ENT), T(SLSH), D(LSFT), T(J), T(P), U(LSFT), END );
			}
			break;
		case 11:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(J), U(LSFT), T(U), T(K), T(K), T(A), T(SLSH), D(LSFT), T(P), U(LSFT), T(E), T(K), T(K), T(A), T(SPC), D(LSFT), T(J), U(LSFT), T(QUOT), T(N), T(K), T(QUOT), T(L), T(QUOT), END );
			}
			break;
		case 12:
			if (record->event.pressed) {
				return MACRO( T(J), T(I), T(P), T(S), T(U), D(RALT), T(2), U(RALT), T(I), T(K), T(I), T(DOT), T(F), T(I), END );
			}
			break;
		case 13:
			if (record->event.pressed) {
				return MACRO( T(J), T(U), T(K), T(K), T(A), T(SLSH), T(P), T(E), T(K), T(K), T(A), T(DOT), T(J), T(A), T(N), T(K), T(A), T(L), T(A), D(RALT), T(2), U(RALT), T(I), T(K), T(I), T(DOT), T(F), T(I), END );
			}
			break;
		case 14:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(DOT), U(LSFT), D(RALT), T(NUBS), U(RALT), END );
			}
			break;
		case 15:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(DOT), U(LSFT), D(NUHS), D(RALT), T(NUBS), U(RALT), END );
			}
			break;
		case 16:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(DOT), T(9), U(LSFT), END );
			}
			break;
		case 17:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(DOT), T(8), D(LSFT), END );
			}
			break;
		case 18:
			if (record->event.pressed) {
				return MACRO( T(DOT), D(LSFT), T(SLSH), U(LSFT), T(DOT), END );
			}
			break;
		case 19:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(COMM), T(SLSH), T(SLSH), T(COMM), U(LSFT), END );
			}
			break;
		case 20:
			if (record->event.pressed) {
				return MACRO( T(QUOT), T(QUOT), END );
			}
			break;
		case 21:
			if (record->event.pressed) {
				return MACRO( T(O), T(O), END );
			}
			break;
		case 22:
			if (record->event.pressed) {
				return MACRO( T(END), D(LSFT), T(HOME), U(LSFT), D(LCTL), T(X), U(LCTL), END );
			}
			break;
		case 23:
			if (record->event.pressed) {
				return MACRO( D(RALT), T(8), U(RALT), T(C), T(O), T(M), T(M), T(E), T(N), T(T), D(LALT), T(9), U(LALT), D(LSFT), T(DOT), U(LSFT), T(SPC), D(LSFT), T(3), U(LSFT), T(SPC), END );
			}
			break;
		case 24:
			if (record->event.pressed) {
				return MACRO( D(LSFT), D(LCTL), T(LEFT), U(LCTL), U(LSFT), T(DEL), END );
			}
			break;
		case 25:
			if (record->event.pressed) {
				return MACRO( D(LSFT), D(LCTL), T(RGHT), U(LCTL), U(LSFT), T(DEL), END );
			}
			break;
		case 26:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(HOME), U(LSFT), T(DEL), END );
			}
			break;
		case 27:
			if (record->event.pressed) {
				return MACRO( D(LSFT), T(END), U(LSFT), T(DEL), END );
			}
			break;
		case 28:
			if (record->event.pressed) {
				return MACRO( T(END), D(LSFT), T(HOME), U(LSFT), T(DEL), END );
			}
			break;
		case 29:
			if (record->event.pressed) {
				return MACRO( D(LCTL), T(DOWN), D(LSFT), T(UP), U(LSFT), U(LCTL), T(DEL), END );
			}
			break;
		case 30:
			if (record->event.pressed) {
				return MACRO( T(BTN1), T(BTN1), END );
			}
			break;
	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {

  static uint8_t old_layer = 255;
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
      case 11:
        rgblight_setrgb(0x33, 0x00, 0x33);
        break;
      case 12:
        rgblight_setrgb(0x03, 0x03, 0x03);
        break;
      case 13:
        rgblight_setrgb(0x00, 0x05, 0x00);
        break;
      case 14:
        rgblight_setrgb(0x03, 0x03, 0x02);
        break;
      case 15:
        rgblight_setrgb(0x03, 0x02, 0x02);
        break;
    }

    old_layer = new_layer;
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
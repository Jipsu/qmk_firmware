#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[TXT] = KEYMAP(
			KC_C, 		KC_F, 		KC_H, 		KC_P, 		KC_Q, 		OSM_SFT, 	KC_SPC, 			FI_A, 		KC_G, 		KC_V, 		KC_R, 		KC_LGUI, 	OSL(NAV), 	KC_BSPC, 	
			KC_L, 		KC_I, 		KC_S, 		KC_T, 		KC_Z, 		OSM_ALT, 	KC_DOT, 			KC_U, 		KC_A, 		KC_E, 		KC_N, 		KC_B, 		TG(MOUSE), 	KC_O, 	
		KC_X, 			KC_W, 		KC_Y, 		KC_K, 					OSM_CTL, 	OSL(NUM), 		FI_O, 			KC_D, 		KC_J, 		KC_M, 					OSL(MDLOB), OSL(SYM), 	
																		KC_LEAD, 	OSL(FENT), 																		OSM_MEH, 	PILKKU),

	[WASD] = KEYMAP(
			KC_V, 		KC_4, 		KC_3, 		KC_2, 		KC_N, 		KC_LSFT, 	KC_1, 				KC_VOLD, 	KC_VOLU, 	ATAB, 		KC_ESC, 	TO(TXT), 	KC_DOWN, 	KC_DEL, 	
			KC_W, 		KC_S, 		KC_A, 		KC_D, 		KC_M, 		KC_LALT, 	KC_E, 				FI_JAKO, 	KC_TAB, 	STAB, 		KC_ENTER, 	XXXXXXX, 	KC_RGHT, 	XXXXXXX, 	
		KC_R, 			KC_Z, 		KC_X, 		KC_U, 					KC_LCTL, 	KC_SPC, 		STEAM, 			FI_KERTO, 	FI_MIINUS, 	FI_PLUS, 				KC_UP, 		XXXXXXX, 	
																		OSL(WASD2),	KC_Q, 																			KC_LEFT, 	XXXXXXX),

	[WASD2] = KEYMAP(
			KC_O, 		KC_7, 		KC_6, 		KC_5, 		KC_T, 		KC_F7, 		KC_F3, 				KC_F11, 	KC_F9, 		KC_F8, 		KC_F7, 		TO(TXT), 	_______, 	_______, 	
			_______, 	_______, 	_______, 	_______, 	KC_Y, 		KC_F6, 		KC_F2,	 			KC_F10, 	KC_F6, 		KC_F5, 		KC_F4, 		_______, 	_______, 	_______, 	
		KC_P, 			KC_0, 		KC_9, 		KC_8, 					KC_F5, 		KC_F1, 			KC_F12, 		KC_F3, 		KC_F2, 		KC_F1, 					_______, 	_______, 	
																		_______, 	KC_F4, 																			_______, 	_______),

	[CK] = KEYMAP(
			KC_X, 		KC_COMM, 	KC_DOT, 	FI_KYSY, 	KC_BSPC, 	OSM_SFT, 	KC_SPC, 			KC_VOLD, 	KC_VOLU, 	ATAB, 		KC_ESC, 	TO(TXT), 	KC_DOWN, 	KC_DEL, 	
			KC_C, 		KC_Z, 		KC_V, 		KC_B, 		KC_N, 		OSM_ALT, 	FI_PLUS, 			FI_JAKO, 	KC_TAB, 	STAB, 		KC_ENTER, 	XXXXXXX, 	KC_RGHT, 	XXXXXXX, 	
		KC_ESC, 		KC_LEFT, 	KC_RGHT, 	OSL(CK2), 				OSM_CTL, 	OSL(FENT), 		STEAM, 			FI_KERTO, 	FI_MIINUS, 	FI_PLUS, 				KC_UP, 		XXXXXXX, 	
																		OSL(NUM), 	FI_MIINUS, 																		KC_LEFT, 	XXXXXXX),

	[CK2] = KEYMAP(
			KC_D, 		KC_Q, 		KC_J, 		KC_U, 		KC_M, 		_______, 	_______, 			_______, 	_______, 	_______, 	_______, 	TO(TXT), 	_______, 	_______, 	
			KC_E, 		KC_I, 		KC_F, 		KC_W, 		KC_L, 		_______, 	_______, 			_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	
		KC_K, 			KC_R, 		KC_G, 		KC_U, 					_______, 	_______, 		_______, 		_______, 	_______, 	_______, 				_______, 	_______, 	
																		_______, 	_______, 																		_______, 	_______),

	[STEL] = KEYMAP(
			KC_DEL, 	KC_T, 		KC_H, 		KC_G, 		KC_BSPC, 	OSM_SFT, 	KC_SPC, 			KC_VOLD, 	KC_VOLU, 	ATAB, 		KC_ESC, 	TO(TXT), 	KC_DOWN, 	KC_DEL, 	
			KC_Z, 		KC_X, 		KC_C, 		KC_V, 		KC_TAB, 	OSM_ALT, 	FI_PLUS, 			FI_JAKO, 	KC_TAB, 	STAB, 		KC_ENTER, 	XXXXXXX, 	KC_RGHT, 	XXXXXXX, 	
		KC_ESC, 		KC_Q, 		KC_B, 		KC_M, 					OSM_CTL, 	OSL(FENT), 		STEAM, 			FI_KERTO, 	FI_MIINUS, 	FI_PLUS, 				KC_UP, 		XXXXXXX, 	
																		OSL(NUM), 	FI_MIINUS, 																		KC_LEFT, 	XXXXXXX),

	[XCOM] = KEYMAP(
			KC_2, 		KC_F2, 		KC_F3, 		KC_K, 		LALT(KC_O), KC_S, 		KC_G, 				KC_VOLD, 	KC_VOLU, 	ATAB, 		KC_ESC, 	TO(TXT), 	KC_DOWN, 	KC_DEL, 	
			KC_ENT, 	KC_LSFT, 	KC_1, 		KC_TAB, 	KC_F1, 		KC_D, 		KC_E, 				FI_JAKO, 	KC_TAB, 	STAB, 		KC_ENTER, 	XXXXXXX, 	KC_RGHT, 	XXXXXXX, 	
		KC_R, 			KC_ESC, 	KC_X, 		KC_V, 					KC_W, 		KC_T, 			STEAM, 			FI_KERTO, 	FI_MIINUS, 	FI_PLUS, 				KC_UP, 		XXXXXXX, 	
																		KC_A, 		KC_Q, 																			KC_LEFT, 	XXXXXXX),

	[SHOG] = KEYMAP(
			KC_F4, 		KC_F3, 		KC_F2, 		KC_F1, 		KC_BSPC, 	OSM_SFT,  	_______, 			KC_VOLD, 	KC_VOLU, 	ATAB, 		KC_ESC, 	TO(TXT), 	KC_DOWN, 	KC_DEL, 	
			KC_W, 		KC_S, 		KC_A, 		KC_D, 		KC_HOME, 	OSM_ALT,  	KC_E, 				FI_JAKO, 	KC_TAB, 	STAB, 		KC_ENTER, 	XXXXXXX, 	KC_RGHT, 	XXXXXXX, 	
		KC_G, 			LSFT(KC_2), KC_F, 		KC_R, 					OSM_CTL,  	KC_N, 			STEAM, 			FI_KERTO, 	FI_MIINUS, 	FI_PLUS, 				KC_UP, 		XXXXXXX, 	
																		OSL(SHOG2), KC_Q, 																			KC_LEFT, 	XXXXXXX),

	[SHOG2] = KEYMAP(
			LCTL(KC_B), LCTL(KC_C), LCTL(KC_M), LCTL(KC_I), KC_8, 		_______, 	_______, 			_______, 	_______, 	_______, 	_______, 	TO(TXT), 	_______, 	_______, 	
			KC_0, 		KC_4, 		KC_5, 		KC_6, 		KC_7, 		_______, 	_______, 			_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	_______, 	
		_______, 		KC_1, 		KC_2, 		KC_3, 					_______, 	_______, 		_______, 		_______, 	_______, 	_______, 				_______, 	_______, 	
																		_______, 	_______, 																		_______, 	_______),

	[TXT2] = KEYMAP(
			KC_C, 		KC_F, 		KC_H, 		KC_P, 		KC_Q, 		OSM_SFT, 	KC_SPC, 			FI_A, 		KC_G, 		KC_V, 		KC_R, 		TG(TXT2), 	OSL(NAV), 	KC_BSPC, 	
			KC_L, 		KC_I, 		KC_S, 		KC_T, 		KC_Z, 		OSM_ALT, 	KC_DOT, 			KC_U, 		KC_A, 		KC_E, 		KC_N, 		KC_B, 		TG(MOUSE), 	KC_O, 	
		KC_X, 			KC_W, 		KC_Y, 		KC_K, 					OSM_CTL, 	OSL(NUM), 		FI_O, 			KC_D, 		KC_J, 		KC_M, 					OSL(MDLOB), OSL(SYM), 	
																		KC_LEAD, 	OSL(FENT), 																		OSM_MEH, 	PILKKU),

	[NUM] = KEYMAP(
			KC_DOT, 	KC_7, 		KC_8, 		KC_9, 		XXXXXXX, 	_______, 	_______, 			KC_DOT, 	KC_9, 		KC_8, 		KC_7, 		TO(TXT), 	_______, 	_______, 	
			KC_0, 		KC_4, 		KC_5, 		KC_6, 		XXXXXXX, 	_______, 	_______, 			KC_0, 		KC_6, 		KC_5, 		KC_4, 		TG(NUM), 	_______, 	_______, 	
		OSM_CTL, 		KC_1, 		KC_2, 		KC_3, 					_______, 	OSLPOIS, 		XXXXXXX, 		KC_3, 		KC_2, 		KC_1, 					_______, 	_______, 	
																		_______, 	_______, 																		_______, 	KC_COMM),
																		
	[MOUSE] = KEYMAP(
			XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	_______, 	KC_WH_D, 			XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	TO(TXT), 	_______, 	XXXXXXX, 	
			KC_MS_U, 	KC_MS_D, 	KC_MS_L, 	KC_MS_R, 	XXXXXXX, 	_______, 	KC_WH_R, 			KC_ACL2, 	KC_ACL1, 	KC_ACL0, 	KC_BTN1, 	XXXXXXX, 	_______, 	XXXXXXX, 	
		XXXXXXX, 		XXXXXXX, 	KC_BTN4, 	KC_BTN5, 				_______, 	KC_WH_U, 		XXXXXXX, 		XXXXXXX, 	KC_BTN3, 	KC_BTN2, 				_______, 	XXXXXXX, 	
																		_______, 	KC_WH_L, 																		XXXXXXX, 	XXXXXXX),

	[SYM] = KEYMAP(
			FI_ISOM, 	FI_JAKO, 	FI_AALTOSV, FI_AALTOSO, FI_USD, 	KC_CAPS, 	FI_KYSY, 			FI_RISU, 	FI_JA, 		FI_PROS, 	ENDASH, 	FI_GBP, 	_______, 	_______, 
			FI_YHTK, 	FI_PIPE, 	FI_SULKUV, 	FI_SULKUO, 	FI_AT, 		XXXXXXX, 	_______, 			AALTO, 		FI_HEITTOM, FI_LAINAUS, FI_TAVU, 	FI_EUR, 	_______, 	_______, 
		FI_PIEN, 		FI_KENO, 	FI_HAKASV, 	FI_HAKASO, 				XXXXXXX, 	FI_HUUT, 		FI_LAKI, 		FI_PUOLPIS, FI_KAKSPIS, FI_ALAV, 				_______, 	OSLPOIS, 
																		XXXXXXX, 	XXXXXXX, 																		_______, 	_______),

	[NAV] = KEYMAP(
			DOC_END, 	PARA_UP, 	KC_HOME, 	KC_END, 	KC_PGUP, 	_______, 	_______, 			COPY, 		CUTLINE, 	CUTLINEE, 	CUTLINEH, 	TO(TXT), 	OSLPOIS, 	_______, 	
			KC_UP, 		KC_DOWN, 	KC_LEFT, 	KC_RGHT, 	KC_PGDN, 	_______, 	_______, 			PASTE, 		CUT, 		REDO, 		UNDO, 		TG(NAV), 	XXXXXXX, 	_______, 	
		DOC_HOME, 		PARA_DN, 	WRD_LEFT, 	WRD_RGHT, 				_______, 	_______, 		XXXXXXX, 		CUTPARA, 	CUTWRD_O, 	CUTWRD_V, 				_______, 	XXXXXXX, 	
																		OSM_CS, 	_______, 																		_______, 	XXXXXXX),

	[MDLOB] = KEYMAP(
			FI_GRAVE, 	FI_TILDE, 	FI_CARET, 	FI_UML, 	FI_AO, 		KC_RSFT, 	KC_INS, 			XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	TO(TXT), 	RGB_TOG, 	XXXXXXX, 	
			P0_001, 	P0_01, 		P0_05, 		MD_VIITL, 	XXXXXXX, 	KC_RALT, 	XXXXXXX, 			TO(SHOG), 	TO(XCOM), 	TO(CK), 	TO(WASD), 	KC_PSCR, 	XXXXXXX, 	XXXXXXX, 	
		FI_ACUTE, 		XXXXXXX, 	XXXXXXX, 	MD_COMM, 				KC_RCTL, 	KC_PAUS, 		RESET, 			XXXXXXX, 	TO(STEL), 	XXXXXXX, 				OSLPOIS, 	XXXXXXX, 	
																		KC_RGUI, 	XXXXXXX, 																		XXXXXXX, 	XXXXXXX),

	[FENT] = KEYMAP(
			KC_F11, 	KC_F7, 		KC_F8, 		KC_F9, 		XXXXXXX, 	_______, 	_______, 			KC_VOLD, 	KC_VOLU, 	ATAB, 		KC_ESC, 	TO(TXT), 	KC_DOWN, 	KC_DEL, 	
			KC_F10, 	KC_F4, 		KC_F5, 		KC_F6, 		XXXXXXX, 	_______, 	_______, 			FI_JAKO, 	KC_TAB, 	STAB, 		KC_ENTER, 	XXXXXXX, 	KC_RGHT, 	XXXXXXX, 	
		KC_F12, 		KC_F1, 		KC_F2, 		KC_F3, 					_______, 	_______, 		XXXXXXX, 		FI_KERTO, 	FI_MIINUS, 	FI_PLUS, 				KC_UP, 		XXXXXXX, 	
																		_______, 	OSLPOIS, 																		KC_LEFT, 	XXXXXXX)
	
};

void matrix_init_user(void) {
}

LEADER_EXTERNS();

void matrix_scan_user(void) {
	
 LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_ONE_KEY(KC_X) {
      register_code(KC_LCTL);
      register_code(KC_X);
      unregister_code(KC_X);
      unregister_code(KC_LCTL);
    }
    SEQ_ONE_KEY(KC_C) {
      register_code(KC_LCTL);
      register_code(KC_C);
      unregister_code(KC_C);
      unregister_code(KC_LCTL);
    }
    SEQ_ONE_KEY(KC_P) {
      register_code(KC_LCTL);
      register_code(KC_P);
      unregister_code(KC_P);
      unregister_code(KC_LCTL);
    }
    SEQ_ONE_KEY(KC_Z) {
      register_code(KC_LCTL);
      register_code(KC_Z);
      unregister_code(KC_Z);
      unregister_code(KC_LCTL);
    }
    SEQ_ONE_KEY(KC_Y) {
      register_code(KC_LCTL);
      register_code(KC_Y);
      unregister_code(KC_Y);
      unregister_code(KC_LCTL);
    }	
    SEQ_ONE_KEY(KC_T) {
      register_code(KC_TAB);
      unregister_code(KC_TAB);
    }
  }

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

 
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case ENDASH:
                SEND_STRING(SS_DOWN(X_LALT)SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_5)SS_TAP(X_KP_0)SS_UP(X_LALT)); // ENDASH
                return false; break;
            case AALTO:
                SEND_STRING(SS_DOWN(X_RALT)SS_TAP(X_RBRACKET)SS_UP(X_RALT)SS_TAP(X_SPACE)); // AALTO
                return false; break;
            case PILKKU:
                SEND_STRING(", "); // COMMA WITH SPACE
                return false; break;
            case OSLPOIS:
                SEND_STRING(SS_TAP(X_SPACE)SS_TAP(X_BSPACE)); // CRUDE OSL REMOVAL
                return false; break;
            case MD_VIITA:
                SEND_STRING(SS_DOWN(X_RALT)"8"SS_UP(X_RALT)SS_DOWN(X_LSHIFT)SS_DOWN(X_RALT)"8"SS_UP(X_RALT)SS_UP(X_LSHIFT)SS_TAP(X_SPACE)SS_DOWN(X_RALT)"9"SS_UP(X_RALT)SS_TAP(X_LEFT)); // ALAVIITE
                return false; break;
            case MD_VIITL:
                SEND_STRING(SS_DOWN(X_RALT)"829"SS_UP(X_RALT)SS_TAP(X_LEFT)); // LOPPUVIITE
                return false; break;
            case MD_COMM:
                SEND_STRING(SS_DOWN(X_RALT)"8"SS_UP(X_RALT)"COMMENT"SS_DOWN(X_RALT)"9"SS_UP(X_RALT)SS_TAP(X_SCOLON)" # "); // KOMMENTTI
                return false; break;
            case NUM00:
                SEND_STRING("00"); // 
                return false; break;
            case NUM000:
                SEND_STRING("000"); // 
                return false; break;
            case NUM0_0:
                SEND_STRING("0,0"); // 
                return false; break;
            case NUM0_00:
                SEND_STRING("0,00"); // 
                return false; break;
            case P0_001:
                SEND_STRING("p"SS_TAP(X_NONUS_BSLASH)"0,001"); // 
                return false; break;
            case P0_01:
                SEND_STRING("p"SS_TAP(X_NONUS_BSLASH)"0,01"); // 
                return false; break;
            case P0_05:
                SEND_STRING("p"SS_TAP(X_NONUS_BSLASH)"0,05"); // 
                return false; break;
            case CUTLINE:
                SEND_STRING(SS_TAP(X_END)SS_DOWN(X_LSHIFT)SS_TAP(X_HOME)SS_UP(X_LSHIFT)SS_LCTRL("x")); // 
                return false; break;
            case CUTLINEH:
                SEND_STRING(SS_DOWN(X_LSHIFT)SS_TAP(X_HOME)SS_UP(X_LSHIFT)SS_LCTRL("x")); // CUT LINE FROM CURSOR TO HOME
                return false; break;
            case CUTLINEE:
                SEND_STRING(SS_DOWN(X_LSHIFT)SS_TAP(X_END)SS_UP(X_LSHIFT)SS_LCTRL("x")); // CUT LINE FROM CURSOR TO END
                return false; break;
            case CUTPARA:
                SEND_STRING(SS_DOWN(X_LCTRL)SS_TAP(X_DOWN)SS_DOWN(X_LSHIFT)SS_TAP(X_UP)SS_UP(X_LSHIFT)"x"SS_UP(X_LCTRL)); // GO TO END OF PARAGRAPH, SELECT AND CUT
                return false; break;
            case CUTWRD_V:
                SEND_STRING(SS_DOWN(X_LCTRL)SS_DOWN(X_LSHIFT)SS_TAP(X_LEFT)SS_UP(X_LSHIFT)"x"SS_UP(X_LCTRL)); // SELECT WORD ON THE LEFT AND CUT
                return false; break;
            case CUTWRD_O:
                SEND_STRING(SS_DOWN(X_LCTRL)SS_DOWN(X_LSHIFT)SS_TAP(X_RIGHT)SS_UP(X_LSHIFT)"x"SS_UP(X_LCTRL)); // SELECT WORD ON THE RIGHT AND CUT
                return false; break;
        }
    }
    return true;
};

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
#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  COPY_TO_NOTEPAD,
  ACTIVATE_AURAS,
  ST_MACRO_4,
};

enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_ESCAPE,                                      KC_ESCAPE,      KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TG(3),
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TD(DANCE_0),                                    TD(DANCE_1),    KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    OSL(1),         KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      OSM(MOD_LALT),
    OSM(MOD_LSFT),  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_EQUAL,                                       KC_MINUS,       KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       TT(2),
    OSM(MOD_LCTL),  OSM(MOD_LGUI),  OSM(MOD_LALT),  KC_DELETE,      KC_BSPACE,                                                                                                      KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       OSL(2),
                                                                                                    KC_TRANSPARENT, WEBUSB_PAIR,    KC_HOME,        KC_END,
                                                                                                                    KC_HOME,        KC_PGUP,
                                                                                    KC_SPACE,       KC_SLASH,       KC_ENTER,       KC_PGDOWN,      KC_QUOTE,       KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_MINUS,
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,                                                                       KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRACKET,    KC_RBRACKET,    KC_TILD,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLASH,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EQUAL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_0,           KC_DOT,         KC_EQUAL,       KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, LCTL(KC_1),     LCTL(KC_2),     LCTL(KC_3),     LCTL(KC_4),     LCTL(KC_5),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(KC_6),     LCTL(KC_7),     LCTL(KC_8),     LCTL(KC_9),     LCTL(KC_0),     RESET,
    KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_2),    KC_MS_UP,       LALT(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_UP,    KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),KC_MS_LEFT,  KC_MS_DOWN,     KC_MS_RIGHT,    LCTL(KC_TAB),                                                                   KC_MS_BTN3,     KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_LEFT),  LCTL(KC_UP),    LCTL(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,                                                                                            KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    LED_LEVEL,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LCTRL,       KC_LGUI,        KC_LALT,        KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    ST_MACRO_1,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    ACTIVATE_AURAS, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(300) SS_TAP(X_T));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ENTER) SS_DELAY(10) SS_TAP(X_SLASH) SS_DELAY(10) SS_TAP(X_H) SS_DELAY(10) SS_TAP(X_I)
                  SS_DELAY(10) SS_TAP(X_D) SS_DELAY(10) SS_TAP(X_E) SS_DELAY(10) SS_TAP(X_O) SS_DELAY(10)
                  SS_TAP(X_U) SS_DELAY(10) SS_TAP(X_T)  SS_DELAY(10) SS_TAP(X_ENTER));
    }
    break;
    /* poe copy and paste an item */
    case COPY_TO_NOTEPAD:
    if (record->event.pressed) {
      /* copy an item */
      SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_C))) SS_DELAY(100));
      /* open a new text file */
      SEND_STRING(SS_LALT(SS_TAP(X_TAB)) SS_DELAY(100));
      register_code16(KC_MS_BTN2);
      unregister_code16(KC_MS_BTN2);
      SEND_STRING(SS_DELAY(100) SS_TAP(X_UP) SS_DELAY(10) SS_TAP(X_UP) SS_DELAY(10) SS_TAP(X_RIGHT) SS_DELAY(10)
                  SS_TAP(X_UP) SS_DELAY(10) SS_TAP(X_UP) SS_DELAY(10) SS_TAP(X_UP) SS_DELAY(100) SS_TAP(X_ENTER)
                  SS_DELAY(50) SS_TAP(X_ENTER) SS_DELAY(50) SS_TAP(X_ENTER) SS_DELAY(300) SS_LCTL(SS_TAP(X_V))
                  SS_DELAY(50) SS_LCTL(SS_TAP(X_W)) SS_DELAY(50) SS_TAP(X_ENTER) SS_DELAY(100)
                  SS_LALT(SS_TAP(X_TAB)));
    }
    break;
    case ACTIVATE_AURAS:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_Q)) SS_DELAY(50) SS_LCTL(SS_TAP(X_W)) SS_DELAY(50) SS_LCTL(SS_TAP(X_E))
                  SS_DELAY(50) SS_LCTL(SS_TAP(X_R)) SS_DELAY(50) SS_LCTL(SS_TAP(X_T)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_V)) SS_DELAY(100) SS_LCTL(SS_TAP(X_W)) SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {
  uint8_t layer = biton32(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
  SINGLE_TAP = 1,
  SINGLE_HOLD,
  DOUBLE_TAP,
  DOUBLE_HOLD,
  DOUBLE_SINGLE_TAP,
  MORE_TAPS
};

static tap dance_state[3];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
  if (state->count == 1) {
    if (state->interrupted || !state->pressed) return SINGLE_TAP;
    else return SINGLE_HOLD;
  } else if (state->count == 2) {
    if (state->interrupted) return DOUBLE_SINGLE_TAP;
    else if (state->pressed) return DOUBLE_HOLD;
    else return DOUBLE_TAP;
  }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
  if(state->count == 3) {
    tap_code16(LSFT(KC_9));
    tap_code16(LSFT(KC_9));
    tap_code16(LSFT(KC_9));
  }
  if(state->count > 3) {
    tap_code16(LSFT(KC_9));
  }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
  dance_state[0].step = dance_step(state);
  switch (dance_state[0].step) {
    case SINGLE_TAP: register_code16(LSFT(KC_9)); break;
    case SINGLE_HOLD: register_code16(LSFT(KC_LBRACKET)); break;
    case DOUBLE_TAP: register_code16(KC_LBRACKET); break;
    case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_9)); register_code16(LSFT(KC_9));
  }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[0].step) {
    case SINGLE_TAP: unregister_code16(LSFT(KC_9)); break;
    case SINGLE_HOLD: unregister_code16(LSFT(KC_LBRACKET)); break;
    case DOUBLE_TAP: unregister_code16(KC_LBRACKET); break;
    case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_9)); break;
  }
  dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
  if(state->count == 3) {
    tap_code16(LSFT(KC_0));
    tap_code16(LSFT(KC_0));
    tap_code16(LSFT(KC_0));
  }
  if(state->count > 3) {
    tap_code16(LSFT(KC_0));
  }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
  dance_state[1].step = dance_step(state);
  switch (dance_state[1].step) {
    case SINGLE_TAP: register_code16(LSFT(KC_0)); break;
    case SINGLE_HOLD: register_code16(LSFT(KC_RBRACKET)); break;
    case DOUBLE_TAP: register_code16(KC_RBRACKET); break;
    case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_0)); register_code16(LSFT(KC_0));
  }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[1].step) {
    case SINGLE_TAP: unregister_code16(LSFT(KC_0)); break;
    case SINGLE_HOLD: unregister_code16(LSFT(KC_RBRACKET)); break;
    case DOUBLE_TAP: unregister_code16(KC_RBRACKET); break;
    case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_0)); break;
  }
  dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
  if(state->count == 3) {
    tap_code16(LALT(KC_LEFT));
    tap_code16(LALT(KC_LEFT));
    tap_code16(LALT(KC_LEFT));
  }
  if(state->count > 3) {
    tap_code16(LALT(KC_LEFT));
  }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
  dance_state[2].step = dance_step(state);
  switch (dance_state[2].step) {
    case SINGLE_TAP: register_code16(LALT(KC_LEFT)); break;
    case DOUBLE_TAP: register_code16(LALT(KC_W)); break;
    case DOUBLE_HOLD: register_code16(LCTL(KC_W)); break;
    case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_LEFT)); register_code16(LALT(KC_LEFT));
  }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
  wait_ms(10);
  switch (dance_state[2].step) {
    case SINGLE_TAP: unregister_code16(LALT(KC_LEFT)); break;
    case DOUBLE_TAP: unregister_code16(LALT(KC_W)); break;
    case DOUBLE_HOLD: unregister_code16(LCTL(KC_W)); break;
    case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_LEFT)); break;
  }
  dance_state[2].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
  [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
  [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
};


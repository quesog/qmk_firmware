#include QMK_KEYBOARD_H

#define ____

// Caps is escape when tapped or Ctrl when held
#define MG_SPCFN MT(MO(1), KC_SPC)

// Caps is escape when tapped or Ctrl when held
#define MG_CAPS MT(MOD_LCTL, KC_ESC)

// Ctrl-Alt-Delete
#define MG_CAD  LALT(LCTL(KC_DEL))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_default(
    KC_MUTE, KC_GRV,    KC_1,    KC_2,    KC_3,  KC_4,  KC_5,   KC_6,             KC_7,   KC_8,      KC_9,    KC_0, KC_MINS,  KC_EQL, KC_BSPC,    ____
    KC_VOLU,   ____   KC_TAB,    KC_Q,    KC_W,  KC_E,  KC_R,   KC_T,             KC_Y,   KC_U,      KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
    KC_VOLD,   ____  MG_CAPS,    KC_A,    KC_S,  KC_D,  KC_F,   KC_G,             KC_H,   KC_J,      KC_K,    KC_L, KC_SCLN, KC_QUOT,  KC_ENT,    ____
    KC_PGUP,   ____  KC_LSFT,    KC_Z,    KC_X,  KC_C,  KC_V,   KC_B,             KC_N,   KC_M,   KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,    ____     ____
    KC_PGDN,   ____  KC_LCTL, KC_LGUI, KC_LALT, MO(2), MO(1), KC_SPC,             KC_SPC, ____       ____  KC_RALT, KC_RGUI,  KC_APP, KC_RCTL     ____
  ),

  [1] = LAYOUT_default(
     MG_CAD, KC_TRNS, KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,   KC_F6,     KC_F7,   KC_F8,      KC_F9,   KC_F10,   KC_F11,   KC_F12,   KC_DEL,   ____
    KC_TRNS,   ____   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,
    KC_TRNS,   ____   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,   KC_LEFT, KC_DOWN,    KC_UP, KC_RIGHT,  KC_TRNS,  KC_TRNS,  KC_TRNS,   ____
    KC_TRNS,   ____   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    ____     ____
    KC_TRNS,   ____   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS,  ____       ____    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS    ____
  ),

  [2] = LAYOUT_default(
    KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS, KC_PSLS,  KC_PAST,  KC_KP_MINUS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   ____
    KC_TRNS,   ____   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,   KC_KP_7, KC_KP_8,  KC_KP_9,   KC_KP_PLUS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,
    KC_TRNS,   ____   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,   KC_KP_4, KC_KP_5,  KC_KP_6,   KC_KP_PLUS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   ____
    KC_TRNS,   ____   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,   KC_KP_1, KC_KP_2,  KC_KP_3,  KC_KP_ENTER,  KC_TRNS,  KC_TRNS,    ____     ____
    KC_TRNS,   ____   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,      KC_0,  ____       ____      KC_KP_DOT,  KC_TRNS,  KC_TRNS,  KC_TRNS    ____
  ),

  [3] = LAYOUT_default(
    KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   ____
    KC_TRNS,   ____   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,
    KC_TRNS,   ____   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   ____
    KC_TRNS,   ____   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    ____     ____
    KC_TRNS,   ____   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,   KC_TRNS,  ____       ____    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS    ____
  )
};

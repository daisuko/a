#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = KEYMAP( GRV,    1,    2,    3,    4,    5,    6,    7,    8,    9,    0, MINS,  EQL,       \
                TAB,    Q,    W,    E,    R,    T,    Y,    Y,    U,    I,    O,    P, LBRC, RBRC, \
               LCTL,    A,    S,    D,    F,    G,    H,    J,    K,    L, SCLN, QUOT, BSLS,       \
               LSFT,    Z,    X,    C,    V,    B,    B,    N,    M, COMM,  DOT, SLSH,             \
                                 LALT, LGUI,  FN0,              ENT, RGUI, RALT),
  [1] = KEYMAP(TRNS,   F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10,  F11,  F12,       \
               TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   UP,  ESC, TRNS, \
               TRNS, TRNS, TRNS, TRNS, RGHT, TRNS, BSPC, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,       \
               TRNS, TRNS, TRNS, TRNS, TRNS, LEFT, LEFT, DOWN,  ENT, TRNS, TRNS, TRNS,             \
                                 TRNS, TRNS, TRNS,             TRNS, TRNS, TRNS),
};
const action_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_TAP_KEY(1, KC_SPC),
};

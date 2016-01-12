#include "keymap_common.h"
// Bondwell DE
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(
        ESC,      F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, CAPS, NLCK, SLCK,            \
        1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, HOME, PSCR,         \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC, PGUP, FN0,          \
        LCTL, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT, PGDN, INS,          \
        LSFT, Z    ,X,   C,   V,   B,   N,   M,  COMM,DOT, SLSH,RSFT, UP,  END, DEL,          \
        RALT,NONUS_HASH,                SPC,                  NUBS,   LEFT,DOWN,RGHT),
    /* 1: media keys */
    KEYMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, PWR,SLEP,WAKE,          \
         GRV,TRNS,TRNS,TRNS,TRNS,TRNS,   7,   8,   9,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     \
        TRNS,TRNS,  UP,TRNS,TRNS,TRNS,TRNS,   4,   5,   6,SLSH,TRNS,TRNS,TRNS,TRNS,     \
        TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,   1,   2,   3,RBRC,TRNS,TRNS,TRNS,TRNS,     \
        TRNS,TRNS,TRNS,TRNS,CALC,TRNS,TRNS,   0,TRNS,TRNS,TRNS,TRNS,VOLU,MUTE,TRNS,     \
        LALT, GRV,               TRNS,               BSLS,     TRNS,VOLD,TRNS),
};
const uint16_t PROGMEM fn_actions[] = {
    /* QWERTZ Layout */
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
};

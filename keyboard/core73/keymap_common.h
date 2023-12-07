#pragma once

#include <stdint.h>
#include "keymap.h"
#include "config.h"

extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const action_t fn_actions[];

#define KEYMAP( \
  K000,       K001, K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C,       K00D, K00E, K00F, \
  K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D,       K20E, K20F, K30F, \
  K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K30A, K30B, K30C, K30D,       K30E, K40E, K40F, \
  K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K40A, K40B,       K40C,                         \
  K500,       K501, K502, K503, K504, K505, K506, K507, K508, K509, K50A,       K50C,             K50E,       \
  K600, K601, K602,                   K605,                   K609, K60A, K60B, K60C,       K60D, K60E, K60F  \
) { \
  { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K00A,  K00B,  K00C,  K00D,  K00E,  K00F },  \
  { K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K20A,  K20B,  K20C,  K20D,  K20E,  K20F },  \
  { K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K30A,  K30B,  K30C,  K30D,  K30E,  K30F },  \
  { K400,  K401,  K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K40A,  K40B,  K40C,  KC_NO, K40E,  K40F },  \
  { K500,  K501,  K502,  K503,  K504,  K505,  K506,  K507,  K508,  K509,  K50A,  KC_NO, K50C,  KC_NO, K50E,  KC_NO }, \
  { K600,  K601,  K602,  KC_NO, KC_NO, K605,  KC_NO, KC_NO, KC_NO, K609,  K60A,  K60B,  K60C,  K60D,  K60E,  K60F }   \
}

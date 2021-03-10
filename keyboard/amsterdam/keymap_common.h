/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

/**
 * 键盘矩阵基配置文件
 * 
 * 定义各个按键的位置，方便编写Keymap
 */
#pragma once

#include <stdint.h>
#include "keymap.h"
#include "config.h"

extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const action_t fn_actions[];

#define KEYMAP( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19,      K1B, \
  K20,      K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, \
  K30, K31,      K33,      K35,      K37, K38, K39, K3A, K3B  \
) { \
  { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B }, \
  { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   KC_NO, K1B }, \
  { K20,   KC_NO, K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   K2B }, \
  { K30,   K31,   KC_NO, K33,   KC_NO, K35,   KC_NO, K37,   K38,   K39,   K3A,   K3B }  \
}

#define KEYMAP_4X11A( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K3A, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19,      K1A, \
  K20,      K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, \
  K30, K31,      K32,      K34,      K35, K36, K37, K38, K39  \
) { \
  { K00, K01, K02, K03,   K04, K05, K06, K07, K08, K09, K0A }, \
  { K10, K11, K12, K13,   K14, K15, K16, K17, K18, K19, K1A }, \
  { K20, K21, K22, K23,   K24, K25, K26, K27, K28, K29, K2A }, \
  { K30, K31, K32, KC_NO, K34, K35, K36, K37, K38, K39, K3A }  \
}

#define KEYMAP_4X11B( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K1A, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19,      K2A, \
  K20,      K21, K22, K23, K24, K25, K26, K27, K28, K29, K3A, \
  K30, K31,      K32,      K34,      K35, K36, K37, K38, K39  \
) { \
  { K00, K01, K02, K03,   K04, K05, K06, K07, K08, K09, K0A }, \
  { K10, K11, K12, K13,   K14, K15, K16, K17, K18, K19, K1A }, \
  { K20, K21, K22, K23,   K24, K25, K26, K27, K28, K29, K2A }, \
  { K30, K31, K32, KC_NO, K34, K35, K36, K37, K38, K39, K3A }  \
}

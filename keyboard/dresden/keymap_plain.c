/*
Copyright (C) 2018,2019 Jim Jiang <jim@lotlab.org>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "keymap_common.h"
#include "keyboard_fn.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  KEYMAP(
    KC_LEFT, KC_UP,
    KC_DOWN, KC_RGHT,
    KC_VOLD, KC_VOLU, KC_FN0),

  KEYMAP(
    KC_HOME, KC_PGUP,
    KC_PGDN, KC_END,
    KC_BRTD, KC_BRTI, KC_TRNS)
};

const action_t fn_actions[] = {
  ACTION_LAYER_TOGGLE(1),
};

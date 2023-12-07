#include "keymap_common.h"
#include "keyboard_fn.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  KEYMAP(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,             KC_ENT,
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_CAPS, KC_UP,   KC_RSFT,
    KC_LCTL, KC_LALT,          KC_LGUI,          KC_SPC,           KC_FN0,  KC_FN1,  KC_LEFT, KC_DOWN, KC_RGHT),

  KEYMAP(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLS,
    KC_CAPS, KC_INS,  KC_HOME, KC_PGUP, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_SCLN, KC_QUOT,          KC_TRNS,
    KC_TRNS,          KC_DEL,  KC_END,  KC_PGDN, KC_TRNS, KC_COMM, KC_DOT,  KC_SLSH, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS,          KC_TRNS,          KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

  KEYMAP(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BRTD, KC_BRTI, KC_BTN1, KC_BTN3,          KC_BTN2,
    KC_TRNS,          KC_PSCR, KC_SLCK, KC_PAUS, KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_WH_D, KC_MS_U, KC_WH_U,
    KC_TRNS, KC_TRNS,          KC_TRNS,          KC_TRNS,          KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R)
};

const action_t fn_actions[] = {
  ACTION_LAYER_MOMENTARY(1),
  ACTION_LAYER_MOMENTARY(2),
  // F + J                开机/唤醒
  // LShift + RShift + H  输出剩余电量
  // LShift + RShift + P  待机/睡眠
  // LShift + RShift + M  切换有线/蓝牙
  // LShift + RShift + Q  切换蓝牙通道1
  // LShift + RShift + W  切换蓝牙通道2
  // LShift + RShift + E  切换蓝牙通道3
  // LShift + RShift + R  开启蓝牙广播
  // LShift + RShift + B  进入蓝牙刷机模式
  // LShift + RShift + O  清空绑定数据
  // LShift + RShift + I  重置键盘
};

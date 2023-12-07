#include "keymap_common.h"
#include "keyboard_fn.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  KEYMAP(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,             KC_ENT,
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_SLSH, KC_RSFT, KC_FN2,
    KC_LCTL, KC_LGUI, KC_LALT,          KC_TRNS, KC_FN1,                    KC_FN0,           KC_RGUI, KC_DEL),

  KEYMAP(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_FN3,  KC_FN4,  KC_EQL,  KC_MINS, KC_BSLS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_SCLN, KC_QUOT,          KC_TRNS,
    KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_COMM, KC_DOT,  KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS),

  KEYMAP(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_4,    KC_5,    KC_6,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
    KC_TRNS,          KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS),

  KEYMAP(
    KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, KC_TRNS,
    KC_TRNS, KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_RGHT,          KC_TRNS,
    KC_TRNS,          KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_TRNS, KC_TRNS, KC_DOWN, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,                   KC_TRNS,          KC_TRNS, KC_TRNS)

  // KC_CAPS
  // KC_PSCR, KC_SLCK, KC_PAUS,
  // KC_INS,  KC_HOME, KC_PGUP,
  // KC_DEL,  KC_END,  KC_PGDN,
};

const action_t fn_actions[] = {
  ACTION_LAYER_TAP_KEY(1, KC_SPC),
  ACTION_LAYER_TAP_KEY(2, KC_SPC),
  ACTION_LAYER_MOMENTARY(3),
  ACTION_MODS_KEY(MOD_LSFT, KC_9), // (
  ACTION_MODS_KEY(MOD_LSFT, KC_0), // )
  // F + J                开机/唤醒
  // LShift + RShift + H  输出剩余电量
  // LShift + RShift + P  待机/睡眠
  // LShift + RShift + M  切换有线/蓝牙
  // LShift + RShift + Q  切换蓝牙通道1
  // LShift + RShift + W  切换蓝牙通道2
  // LShift + RShift + E  切换蓝牙通道3
  // LShift + RShift + R  发送蓝牙广播
  // LShift + RShift + B  进入蓝牙刷机模式
  // LShift + RShift + O  清空绑定数据
  // LShift + RShift + I  重置键盘
};

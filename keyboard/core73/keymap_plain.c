#include "keymap_common.h"
#include "keyboard_fn.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  KEYMAP(
    KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,           KC_PSCR, KC_SLCK, KC_PAUS,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_INS,  KC_HOME,  KC_PGUP,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_DEL,  KC_END,   KC_PGDN,
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
    KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,                   KC_UP,
    KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_FN0,  KC_RALT, KC_MENU, KC_RCTL,          KC_LEFT, KC_DOWN, KC_RGHT),

  KEYMAP(
    KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,
    KC_FN1,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,
    KC_FN2,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
    KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,                   KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS),

};

const action_t fn_actions[] = {
  /* Poker Layout */
  ACTION_LAYER_MOMENTARY(1),         // to Fn overlay
  ACTION_FUNCTION(SWITCH_DEVICE),    // switch between usb and ble
  ACTION_FUNCTION(KEYBOARD_CONTROL), // sleep

  /*
  ACTION_LAYER_MOMENTARY(1),
  ACTION_LAYER_TOGGLE(2),
  ACTION_LAYER_TAP_KEY(3, KC_SPC),
  ACTION_FUNCTION_OPT(KEYBOARD_CONTROL, CONTROL_BOOTLOADER),
  ACTION_FUNCTION_OPT(KEYBOARD_CONTROL, CONTROL_SLEEP),
  ACTION_FUNCTION_OPT(KEYBOARD_CONTROL, CONTROL_NKRO),
  ACTION_FUNCTION_OPT(KEYBOARD_CONTROL, CONTROL_BATTERY_PERCENTAGE),
  ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_USB),
  ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_BLE_0),
  ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_BLE_1),
  ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_BLE_2),
  ACTION_FUNCTION_OPT(SWITCH_DEVICE, SWITCH_DEVICE_BLE_REBOND),
  ACTION_MODS_KEY(MOD_LSFT, KC_GRV),   // ~
  ACTION_MODS_KEY(MOD_LSFT, KC_1),     // !
  ACTION_MODS_KEY(MOD_LSFT, KC_2),     // @
  ACTION_MODS_KEY(MOD_LSFT, KC_3),     // #
  ACTION_MODS_KEY(MOD_LSFT, KC_4),     // $
  ACTION_MODS_KEY(MOD_LSFT, KC_5),     // %
  ACTION_MODS_KEY(MOD_LSFT, KC_6),     // ^
  ACTION_MODS_KEY(MOD_LSFT, KC_7),     // &
  ACTION_MODS_KEY(MOD_LSFT, KC_8),     // *
  ACTION_MODS_KEY(MOD_LSFT, KC_9),     // (
  ACTION_MODS_KEY(MOD_LSFT, KC_0),     // )
  ACTION_MODS_KEY(MOD_LSFT, KC_MINS),  // _
  ACTION_MODS_KEY(MOD_LSFT, KC_EQL),   // +
  ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),  // {
  ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),  // }
  ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),  // "
  ACTION_MODS_KEY(MOD_LSFT, KC_BSLS),  // |
  */

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

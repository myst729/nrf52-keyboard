/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2019 Jim Jiang <jim@lotlab.org>

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

#pragma once

#include <stdint.h>

/* USB 和蓝牙的显示参数 */
#define VENDOR_ID 0xDE29 /* USB VID */
#define PRODUCT_ID 0xD704 /* USB PID */
#define CONF_VENDOR_ID 0x9A29 /* 配置项目内显示的VendorID */
#define CONF_PRODUCT_ID 0x9704 /* 配置项目内显示的ProductID */
#define DEVICE_VER 0x0004 /* 硬件版本 */
#define MANUFACTURER "Leo Deng" /* 硬件制造商，用于蓝牙显示 */
#define PRODUCT "Dresden" /* 硬件名称，用于USB和蓝牙显示 */
// #define MACADDR_SEPRATOR "_" /* 蓝牙名称后地址的分隔符。若不设置则不显示蓝牙名称后面的地址 */

/* USB HID report parameter */
#define KEYBOARD_EPSIZE 8 /* 键盘上传端点大小，请不要修改 */
#define NKRO_EPSIZE 28 /* 键盘NKRO端点大小，请不要修改 */

// 定义Bootmagic按键
#define BOOTMAGIC_KEY_SALT KC_F
#define BOOTMAGIC_KEY_BOOT KC_J /* 开机 */
#define BOOTMAGIC_KEY_BOOT_TRAP KC_PPLS
#define BOOTMAGIC_KEY_BOOT_TRAP2 KC_PMNS
#define BOOTMAGIC_KEY_ERASE_BOND KC_PAST /* 删除所有绑定 */

// 键盘省电参数
#define SLEEP_SLOW_TIMEOUT 30 // 键盘闲置多久后转入慢速扫描模式 (s)
#define SLEEP_OFF_TIMEOUT 300 // 键盘闲置多久后转入自动关机 (s)
#define KEYBOARD_SCAN_INTERVAL 1 // 键盘最小时间单位TICK (ms)
#define KEYBOARD_FAST_SCAN_INTERVAL 10 // 通常模式下，多久扫描一次键盘 (ms)
#define KEYBOARD_SLOW_SCAN_INTERVAL 100 // 慢速模式下，多久扫描一次键盘 (ms)
#define LED_AUTOOFF_TIME 10 /* LED自动熄灭时长(s)，设为0则不自动熄灭 */

// 键盘额外功能
// #define DYNAMIC_TX_POWER /* 启用自动发射功率调整 */
// #define PASSKEY_REQUIRED /* 需要输入配对码 */
// #define ENABLE_WATCHDOG /* 启用看门狗 */
#define HIGH_TX_POWER /* 更改发射功率到+4dBm */
#define MULTI_DEVICE_SWITCH /*启用多设备切换 */
#define KEYMAP_STORAGE /* 启用keymap存储 */
// #define MACRO_BLOCKING_MODE /* 在宏播放时禁用其他按键输入 */
#define MACRO_STORAGE /* 启用宏存储功能 */
#define CONFIG_STORAGE /* 启用配置存储功能 */
// #define BUTTONLESS_DFU /* 启用免按钮DFU */
// #define DEBUG_SKIP_PWRON_CHECK /* 直接开机而跳过开机条件检测，用于调试 */

/* TMK固件内置功能 */
/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT
// #define NO_ACTION_MACRO
// #define NO_ACTION_FUNCTION

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
// #define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) )

// LED 配置
// #define LED_CAPS 28
// #define LED_NUM 22
// #define LED_SCLK 23
// #define LED_POSITIVE // LED上拉驱动，即二极管的正极接IO口。注释掉代表下拉驱动，即二极管的正极接电源正极
// #define LED_NO_DEINIT // 不要deinit端口，可以避免部分IO灯光无法关闭的问题

// Bootloader 指示灯
// #define LED_DFU_INIT 22
// #define LED_DFU_START 23
// #define LED_DFU_FINISH 24
// #define LED_DFU_POSITIVE // LED上拉驱动

// 多用途 Bootloader 按钮
// #define NRF_BL_DFU_MULTI_ROLE_BTN 21

// WS2812 RGB 配置
// #define RGBLED_NUM 0 // 8
// #define RGB_DI_PIN 10 // 10
// #define RGBLIGHT_ANIMATIONS
// #define RGB_PWR_PIN 20 // P-mos
// #define RGB_PWR_PIN_REVERSE 20 // N-mos

// 启用 LED 状态灯
// #define LED_STATUS_BLE 23 // 蓝牙连接指示灯
// #define LED_STATUS_USB 24 // USB连接状态指示灯
// #define LED_STATUS_CHARGING 25 // 充电指示灯
// #define LED_BLE_CHANNEL1 3
// #define LED_BLE_CHANNEL2 8
// #define LED_BLE_CHANNEL3 9

// 独立硬件按钮
#define POWER_BUTTON 3

// USB UART 传输配置
#define HAS_USB // 启用与CH554的通信支持
#define UART_RXD 8 // UART_RX 口 IO
#define UART_TXD 9 // UART_TX 口 IO
// #define UART_DET 19 // UART 检测引脚，若此脚被拉低，则说明USB正在工作。若不配置则使用RX口作为检测引脚
#define UART_BAUDRATE NRF_UART_BAUDRATE_115200 // 通信波特率，请不要修改
#define CH55X_FREQ_SYS 24000000

// 电量检测配置
#define BATTERY_ADC_PIN NRF_SAADC_INPUT_AIN0 // 电量检测引脚 Pin 2

// 充电检测配置
#define PIN_CHARGING !UCC1 // CH554的充电检测。当UCC1拉低时表示正在充电。若不配置则禁用USB下发充电事件
#define PIN_STANDBY !UCC2 // CH554的充电检测。当UCC2拉低时表示充电完成。若不配置则只使用PIN_CHARGING作为是否充电的检测标志

// 按键阵列配置
#define MATRIX_ROWS 3 /* 硬件阵列行数 */
#define MATRIX_COLS 3 /* 硬件阵列列数 */
static const uint8_t row_pin_array[MATRIX_ROWS] = { 18, 19, 13 };
static const uint8_t column_pin_array[MATRIX_COLS] = { 22, 21, 23 };
#define COL_IN // 键盘阵列的二极管方向是从ROW->COL
// #define ROW_IN // 键盘阵列的二极管方向是从COL->ROW

/* define if matrix has ghost */
// #define MATRIX_HAS_GHOST /* 按键阵列是否出现Ghost Key，若没有加二极管则需要启用这个项目 */

#define DEBOUNCE 5 /* 硬件消抖次数，设置为0则不消抖 */
#define MATRIX_SCAN_DELAY_CYCLE 48 /* 按键扫描等待IO稳定的延时时长 */

// 板载调试器设置
// #define SWD_CLK_IO T2EX
// #define SWD_CLK_MASK bT2EX
// #define SWD_CLK_PORT P1
// #define SWD_DAT_IO T2
// #define SWD_DAT_MASK bT2
// #define SWD_DAT_PORT P1

// 旋钮配置
#define ROTARY_ENCODER_A 12 // 编码器A脚IO
#define ROTARY_ENCODER_B 24 // 编码器B脚IO
#define ROTARY_ENCODER_NEG 2,0 // 负向旋转映射到键盘的按键行列
#define ROTARY_ENCODER_POS 2,1 // 正向旋转映射到键盘的按键行列

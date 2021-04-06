#pragma once

#include <stdint.h>

/* USB 和蓝牙的显示参数 */
#define VENDOR_ID 0xDE29 /* USB VID */
#define PRODUCT_ID 0xD706 /* USB PID */
#define CONF_VENDOR_ID 0x9A29 /* 配置项目内显示的VendorID */
#define CONF_PRODUCT_ID 0x9702 /* 配置项目内显示的ProductID */
#define DEVICE_VER 0x0002 /* 硬件版本 */
#define MANUFACTURER "Leo Deng" /* 硬件制造商，用于蓝牙显示 */
#define PRODUCT "Dimple BLE" /* 硬件名称，用于USB和蓝牙显示 */

/* USB HID report parameter */
#define KEYBOARD_EPSIZE 8 /* 键盘上传端点大小，请不要修改 */
#define NKRO_EPSIZE 28 /* 键盘NKRO端点大小，请不要修改 */

// 定义Bootmagic按键
#define BOOTMAGIC_KEY_BOOT KC_U /* 开机 */
#define BOOTMAGIC_KEY_ERASE_BOND KC_E /* 删除所有绑定 */

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

/* key combination for command */
#define IS_COMMAND() ( keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) )

// LED 配置
#define LED_CAPS 25
#define LED_NUM 24
// #define LED_SCLK 23
#define LED_POSITIVE // LED上拉驱动，即二极管的正极接IO口。注释掉代表下拉驱动，即二极管的正极接电源正极
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
#define POWER_BUTTON 23 // 3

// USB UART 传输配置
#define HAS_USB // 启用与CH554的通信支持
#define UART_RXD 27 // UART_RX 口 IO
#define UART_TXD 26 // UART_TX 口 IO
// #define UART_DET 19 // UART 检测引脚，若此脚被拉低，则说明USB正在工作。若不配置则使用RX口作为检测引脚
#define UART_BAUDRATE NRF_UART_BAUDRATE_115200 // 通信波特率，请不要修改
#define CH55X_FREQ_SYS 24000000

// 电量检测配置
#define BATTERY_ADC_PIN NRF_SAADC_INPUT_AIN0 // 电量检测引脚 Pin 2

// 充电检测配置
#define PIN_CHARGING !UCC1 // CH554的充电检测。当UCC1拉低时表示正在充电。若不配置则禁用USB下发充电事件
#define PIN_STANDBY !UCC2 // CH554的充电检测。当UCC2拉低时表示充电完成。若不配置则只使用PIN_CHARGING作为是否充电的检测标志

// 按键阵列配置
#define MATRIX_ROWS 4 /* 硬件阵列行数 */
#define MATRIX_COLS 12 /* 硬件阵列列数 */
static const uint8_t row_pin_array[MATRIX_ROWS] = { 7, 6, 5, 4 };
static const uint8_t column_pin_array[MATRIX_COLS] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 30, 29 };
#define COL_IN // 键盘阵列的二极管方向是从ROW->COL
// #define ROW_IN // 键盘阵列的二极管方向是从COL->ROW

/* define if matrix has ghost */
// #define MATRIX_HAS_GHOST /* 按键阵列是否出现Ghost Key，若没有加二极管则需要启用这个项目 */

#define DEBOUNCE 5 /* 硬件消抖次数，设置为0则不消抖 */
#define MATRIX_SCAN_DELAY_CYCLE 48 /* 按键扫描等待IO稳定的延时时长 */

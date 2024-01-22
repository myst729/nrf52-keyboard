#pragma once

#include <stdint.h>

/* Device */
#define VENDOR_ID 0xDE29 /* USB VID */
#define PRODUCT_ID 0xD809 /* USB PID */
#define CONF_VENDOR_ID 0x9A29 /* 配置项目内显示的VendorID */
#define CONF_PRODUCT_ID 0x9809 /* 配置项目内显示的ProductID */
#define DEVICE_VER 0x0001 /* 硬件版本 */
#define MANUFACTURER "Leo Deng" /* 硬件制造商，用于蓝牙显示 */
#define PRODUCT "Paddle" /* 硬件名称，用于USB和蓝牙显示 */
#define DEVICE_BLE_APPEARANCE BLE_APPEARANCE_HID_KEYBOARD
#define MACADDR_SEPRATOR '_' /* 蓝牙名称后地址的分隔符。若不设置则不显示蓝牙名称后面的地址 */

/* USB */
#define HAS_USB // 启用与CH554的通信支持
#define UART_RXD 4 // UART_RX IO
#define UART_TXD 5 // UART_TX IO
#define UART_BAUDRATE NRF_UART_BAUDRATE_115200 // 通信波特率，请不要修改
#define KEYBOARD_EPSIZE 8 /* 键盘上传端点大小，请不要修改 */
#define NKRO_EPSIZE 28 /* 键盘NKRO端点大小，请不要修改 */

/* Matrix */
#define MATRIX_ROWS 5 /* 硬件阵列行数 */
#define MATRIX_COLS 6 /* 硬件阵列列数 */
static const uint8_t row_pin_array[MATRIX_ROWS] = { 25, 30, 29, 27, 26 };
static const uint8_t column_pin_array[MATRIX_COLS] = { 3, 31, 28, 23, 20, 19 };
#define ROW_IN // 键盘阵列的二极管方向是从COL->ROW
#define DEBOUNCE 5 /* 硬件消抖次数，设置为0则不消抖 */
#define MATRIX_SCAN_DELAY_CYCLE 48 /* 按键扫描等待IO稳定的延时时长 */

/* Encoder */
#define ROTARY_ENCODER_A 22 // 编码器A脚IO
#define ROTARY_ENCODER_B 24 // 编码器B脚IO
#define ROTARY_ENCODER_NEG 0,0 // 负向旋转映射到键盘的按键行列
#define ROTARY_ENCODER_POS 0,1 // 正向旋转映射到键盘的按键行列
#define LOW_POWER_QDEC_TICKS 100 // 定义低功耗模式下旋转编码器每隔多少ms扫描一次，不写则不使用低功耗模式

/* Battery */
#define BATTERY_ADC_PIN NRF_SAADC_INPUT_AIN0 // 电量检测引脚 Pin 2
#define PIN_CHARGING !UCC1 // CH554的充电检测。当UCC1拉低时表示正在充电。若不配置则禁用USB下发充电事件
#define PIN_STANDBY !UCC2 // CH554的充电检测。当UCC2拉低时表示充电完成。若不配置则只使用PIN_CHARGING作为是否充电的检测标志
#define LOW_POWER_LED_PIN 13

/* Power Saving */
#define SLEEP_SLOW_TIMEOUT 30 // 键盘闲置多久后转入慢速扫描模式 (s)
#define SLEEP_OFF_TIMEOUT 300 // 键盘闲置多久后转入自动关机 (s)
#define KEYBOARD_SCAN_INTERVAL 1 // 键盘最小时间单位TICK (ms)
#define KEYBOARD_FAST_SCAN_INTERVAL 10 // 通常模式下，多久扫描一次键盘 (ms)
#define KEYBOARD_SLOW_SCAN_INTERVAL 100 // 慢速模式下，多久扫描一次键盘 (ms)
#define LED_AUTOOFF_TIME 10 // LED自动熄灭时长(s)，设为0则不自动熄灭
#define HIGH_TX_POWER // 更改发射功率到+4dBm

/* Extra Features */
#define MULTI_DEVICE_SWITCH /*启用多设备切换 */
#define ENABLE_WATCHDOG /* 启用看门狗 */
#define KEYMAP_STORAGE /* 启用keymap存储 */
#define MACRO_STORAGE /* 启用宏存储功能 */
#define CONFIG_STORAGE /* 启用配置存储功能 */

/* Command Key */
#define IS_COMMAND() (keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)))

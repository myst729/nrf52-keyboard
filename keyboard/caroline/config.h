#pragma once

#include <stdint.h>

/* Device */
#define VENDOR_ID 0xDE29 /* USB VID */
#define PRODUCT_ID 0xD703 /* USB PID */
#define CONF_VENDOR_ID 0x9A29 /* 配置项目内显示的VendorID */
#define CONF_PRODUCT_ID 0x9703 /* 配置项目内显示的ProductID */
#define DEVICE_VER 0x0001 /* 硬件版本 */
#define MANUFACTURER "Leo Deng" /* 硬件制造商，用于蓝牙显示 */
#define PRODUCT "Caroline" /* 硬件名称，用于USB和蓝牙显示 */
#define DEVICE_BLE_APPEARANCE BLE_APPEARANCE_HID_KEYBOARD
// #define MACADDR_SEPRATOR '_' /* 蓝牙名称后地址的分隔符。若不设置则不显示蓝牙名称后面的地址 */

/* Key Matrix */
#define MATRIX_ROWS 4 /* 硬件阵列行数 */
#define MATRIX_COLS 12 /* 硬件阵列列数 */
static const uint8_t row_pin_array[MATRIX_ROWS] = { 22, 20, 12, 3 };
static const uint8_t column_pin_array[MATRIX_COLS] = { 4, 5, 6, 7, 8, 18, 19, 9, 11, 25, 29, 28 };
#define ROW_IN // 键盘阵列的二极管方向是从COL->ROW
// #define COL_IN // 键盘阵列的二极管方向是从ROW->COL
// #define MATRIX_HAS_GHOST /* 按键阵列是否出现Ghost Key，若没有加二极管则需要启用这个项目 */
#define DEBOUNCE 5 /* 硬件消抖次数，设置为0则不消抖 */
#define MATRIX_SCAN_DELAY_CYCLE 48 /* 按键扫描等待IO稳定的延时时长 */
// #define LOCKING_SUPPORT_ENABLE /* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
// #define LOCKING_RESYNC_ENABLE /* Locking resynchronize hack */
// #define MACRO_BLOCKING_MODE /* 在宏播放时禁用其他按键输入 */

/* Bootmagic & Bootcheck */
#define BOOTMAGIC_KEY_SALT KC_F
#define BOOTMAGIC_KEY_BOOT KC_J /* 开机 */
#define BOOTMAGIC_KEY_BOOT_TRAP KC_PPLS
#define BOOTMAGIC_KEY_BOOT_TRAP2 KC_PMNS
#define BOOTMAGIC_KEY_ERASE_BOND KC_PAST /* 删除所有绑定 */

/* Command Key */
#define IS_COMMAND() (keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)))

/* Power Saving */
#define SLEEP_SLOW_TIMEOUT 30 // 键盘闲置多久后转入慢速扫描模式 (s)
#define SLEEP_OFF_TIMEOUT 300 // 键盘闲置多久后转入自动关机 (s)
#define KEYBOARD_SCAN_INTERVAL 1 // 键盘最小时间单位TICK (ms)
#define KEYBOARD_FAST_SCAN_INTERVAL 10 // 通常模式下，多久扫描一次键盘 (ms)
#define KEYBOARD_SLOW_SCAN_INTERVAL 100 // 慢速模式下，多久扫描一次键盘 (ms)
#define LED_AUTOOFF_TIME 10 // LED自动熄灭时长(s)，设为0则不自动熄灭
// #define DYNAMIC_TX_POWER // 启用自动发射功率调整
#define HIGH_TX_POWER // 更改发射功率到+4dBm
// #define DCDC_ENABLED // 启用DC-DC以降低功耗

/* Extra Features */
#define MULTI_DEVICE_SWITCH /*启用多设备切换 */
// #define PASSKEY_REQUIRED /* 需要输入配对码 */
#define ENABLE_WATCHDOG /* 启用看门狗 */
#define KEYMAP_STORAGE /* 启用keymap存储 */
#define MACRO_STORAGE /* 启用宏存储功能 */
#define CONFIG_STORAGE /* 启用配置存储功能 */
// #define BUTTONLESS_DFU /* 启用免按钮DFU */
// #define NRF_BL_DFU_MULTI_ROLE_BTN 21 // 多用途 Bootloader 按钮
// #define POWER_BUTTON 3 // 独立硬件按钮
// #define DEBUG_SKIP_PWRON_CHECK // 直接开机而跳过开机条件检测，用于调试

/* LEDs */
#define LED_CAPS 30
// #define LED_NUM 31
// #define LED_SCLK 20
// #define LED_POSITIVE // LED上拉驱动，即二极管的正极接IO口。注释掉代表下拉驱动，即二极管的正极接电源正极
// #define LED_NO_DEINIT // 不要deinit端口，可以避免部分IO灯光无法关闭的问题

/* Bootloader LEDs */
// #define LED_DFU_INIT 30
// #define LED_DFU_START 31
// #define LED_DFU_FINISH 20
// #define LED_DFU_POSITIVE // LED上拉驱动

/* WS2812 RGB */
// #define RGB_DI_PIN 21
// #define RGBLED_NUM 4
// #define RGBLIGHT_ANIMATIONS
// #define RGB_PWR_PIN 20 // P-mos
// #define RGB_PWR_PIN_REVERSE 20 // N-mos

/* Three LEDs Status */
// #define LED_STATUS_BLE 30 // 蓝牙连接指示灯
// #define LED_STATUS_USB 31 // USB连接状态指示灯
// #define LED_STATUS_CHARGING 20 // 充电指示灯
// #define LED_BLE_CHANNEL1 BIT_LED_BLE
// #define LED_BLE_CHANNEL2 BIT_LED_USB
// #define LED_BLE_CHANNEL3 BIT_LED_CHARGING

/* Simple RGB Status */
#define LED_RGB_R 15 // 红色引脚
#define LED_RGB_G 14 // 绿色引脚
#define LED_RGB_B 13 // 蓝色引脚
// #define LED_RGB_CC // 是否为共阴LED

/* USB */
#define HAS_USB // 启用与CH554的通信支持
#define UART_RXD 26 // UART_RX IO
#define UART_TXD 27 // UART_TX IO
// #define UART_DET 19 // UART 检测引脚，若此脚被拉低，则说明USB正在工作。若不配置则使用RX口作为检测引脚
#define UART_BAUDRATE NRF_UART_BAUDRATE_115200 // 通信波特率，请不要修改
// #define CH55X_FREQ_SYS 24000000
#define KEYBOARD_EPSIZE 8 /* 键盘上传端点大小，请不要修改 */
#define NKRO_EPSIZE 28 /* 键盘NKRO端点大小，请不要修改 */

/* Battery */
#define BATTERY_ADC_PIN NRF_SAADC_INPUT_AIN0 // 电量检测引脚 Pin 2
#define PIN_CHARGING !UCC1 // CH554的充电检测。当UCC1拉低时表示正在充电。若不配置则禁用USB下发充电事件
#define PIN_STANDBY !UCC2 // CH554的充电检测。当UCC2拉低时表示充电完成。若不配置则只使用PIN_CHARGING作为是否充电的检测标志

/* Internal RC for Raytac MDBT42Q */
#define NRFX_CLOCK_CONFIG_LF_SRC 0
#define CLOCK_CONFIG_LF_SRC 0
#define NRF_SDH_CLOCK_LF_SRC 0
#define NRF_SDH_CLOCK_LF_ACCURACY 1
#define NRF_SDH_CLOCK_LF_RC_CTIV 16
#define NRF_SDH_CLOCK_LF_RC_TEMP_CTIV 2
#define APP_TIMER_CONFIG_RTC_FREQUENCY 0 // RTC预分频器: [0] 32768Hz, [1] 16384Hz, [3] 8192Hz, [7] 4096Hz, [15] 2048Hz, [31] 1024Hz

/* Onboard CMSIS DAP */
// #define SWD_CLK_IO T2EX
// #define SWD_CLK_MASK bT2EX
// #define SWD_CLK_PORT P1
// #define SWD_DAT_IO T2
// #define SWD_DAT_MASK bT2
// #define SWD_DAT_PORT P1

/* Disable Action Features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT
// #define NO_ACTION_MACRO
// #define NO_ACTION_FUNCTION

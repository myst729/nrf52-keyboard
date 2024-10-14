# 此工程的根目录
ROOT_DIR := ../..

# 主控芯片类型：可选 nrf52810 或 nrf52832
NRF_CHIP := nrf52832

# 特殊目录控制
SDK_ROOT := $(ROOT_DIR)/SDK
TEMPLATE_PATH := $(ROOT_DIR)/template
APP_MAIN_DIR := $(ROOT_DIR)/application/main
TMK_CORE_DIR := $(ROOT_DIR)/tmk/tmk_core
USB_SOURCE_DIR := $(ROOT_DIR)/usb
APP_PROJ_DIR := $(APP_MAIN_DIR)/project
APP_SRC_DIR := $(APP_MAIN_DIR)/src
INC_FOLDERS += .

# 配置文件文件名
CONFIG_H = config.h
CONFIG_H_DIR = .
SRC_FILES += keymap_plain.c

# 功能选项：更多可配置项目，请参考doc目录下的相应文档
BOOTMAGIC_ENABLE = no   # 启用Bootmagic
BOOTCHECK_ENABLE = yes  # 启用Bootcheck
EXTRAKEY_ENABLE = yes   # 启用媒体键功能
MOUSEKEY_ENABLE = no    # 启用鼠标键功能
USB_6KRO_ENABLE = yes   # 启用USB的六键无冲功能
NKRO_ENABLE = yes       # 启用USB的全键无冲功能
COMMAND_ENABLE = yes    # 启用调试和配置的命令
RGBLIGHT_ENABLE = no    # 启用RGB灯带
ONE_RGB_LED = no        # 启用RGB指示灯
THREE_LED_STATUS = no   # 启用键盘运行状态灯
LEDMAP = no             # 启用可配置LED状态灯
ONBOARD_CMSIS_DAP = yes # 启用板载调试器
NRF52_DISABLE_FPU = yes # 禁用FPU

purge:
	-rm -rf $(OUTPUT_DIR)

go: purge ch554 package merge_bootloader_all

include $(APP_PROJ_DIR)/kbd.mk
include $(USB_SOURCE_DIR)/usb.mk

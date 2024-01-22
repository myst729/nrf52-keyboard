#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#include "main.h"
#include "action.h"
#include "action_util.h"
#include "ble_keyboard.h"
#include "keyboard_battery.h"
#include "keyboard_evt.h"
#include "nrf.h"
#include "nrf_delay.h"
#include "nrf_gpio.h"

void check_battery_percentage() {
    char percentage = battery_info.percentage;
    if (percentage < 20) {
        nrf_gpio_cfg_output(LOW_POWER_LED_PIN);
        nrf_gpio_pin_clear((uint32_t)LOW_POWER_LED_PIN);
    } else {
        nrf_gpio_cfg_output(LOW_POWER_LED_PIN);
        nrf_gpio_pin_set((uint32_t)LOW_POWER_LED_PIN);
    }
}

void rgb_led_event_handler(enum user_event event, void* arg) {
    switch (event) {
        case USER_EVT_BATTERY_INFO_REFRESH:
            check_battery_percentage();
            break;
        default:
            break;
    }
}

EVENT_HANDLER(rgb_led_event_handler);

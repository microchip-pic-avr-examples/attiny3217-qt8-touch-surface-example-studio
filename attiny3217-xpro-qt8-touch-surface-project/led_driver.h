/*
 * led_driver.h
 *
 * Created: 18-09-2017 11:45:02
 *  Author: I41681
 */

#ifndef LED_DRIVER_H_
#define LED_DRIVER_H_

#include "touch.h"

/* Set ENABLE_LED macro to enable led guided touch response when a sensor is touched.
 * default value ZERO: KRONO GESTURE ENABLE
 */
#define ENABLE_LED 0u

#if ENABLE_LED == 1u

#include <atmel_start.h>

#define SLAVE_ADDR 0x20

#define LED_HOR 0
#define LED_VER 1

#define LED_RIGHT 1
#define LED_LEFT 0
#define LED_UP 1
#define LED_DOWN 0

void init_led_driver(void);
void led_gpio_update(uint8_t data, uint8_t ver_or_hor);
void led_decode_position(void);
void led_reset(void);
void led_blink_scroll(void);
void led_init_pwm(void);
void led_process(void);
void led_scroll(uint8_t hor, uint8_t hor_dir, uint8_t ver, uint8_t ver_dir);
void led_decode_gesture(void);
void led_scroll_callback(void);
void led_update_time(void);
void led_blink(uint8_t);
void led_process_position_mode(void);

#define led_turn_on_dual_led() led_dual_touch = 1
#define led_turn_off_dual_led() led_dual_touch = 0

#endif

#endif /* LED_DRIVER_H_ */

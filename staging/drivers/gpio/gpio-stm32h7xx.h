#ifndef GPIO_STM32H7XX_H
#define GPIO_STM32H7XX_H

#include "gpio.h"
#include <stddef.h>
#include <stdint.h>

#define GPIO_STM32H7XX_PIN_COUNT 16

struct GPIO_STM32H7XX;

struct gpio {
    /*@temp@*/ struct GPIO_STM32H7XX *base;
    uint32_t mask;
    bool invert;
};

int gpio_stm32h7xx_init(/*@out@*/ struct gpio *ctx, int base, size_t pin);

/* Runtime calls:
 * int gpio_setup(struct gpio *ctx, struct gpio_settings *settings);
 * void gpio_write(struct gpio *ctx, bool value);
 * bool gpio_read(struct gpio *ctx);
 * void gpio_toggle(struct gpio *ctx);
 */

#endif

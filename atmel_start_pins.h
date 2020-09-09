/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <hal_gpio.h>

// SAMD51 has 14 pin functions

#define GPIO_PIN_FUNCTION_A 0
#define GPIO_PIN_FUNCTION_B 1
#define GPIO_PIN_FUNCTION_C 2
#define GPIO_PIN_FUNCTION_D 3
#define GPIO_PIN_FUNCTION_E 4
#define GPIO_PIN_FUNCTION_F 5
#define GPIO_PIN_FUNCTION_G 6
#define GPIO_PIN_FUNCTION_H 7
#define GPIO_PIN_FUNCTION_I 8
#define GPIO_PIN_FUNCTION_J 9
#define GPIO_PIN_FUNCTION_K 10
#define GPIO_PIN_FUNCTION_L 11
#define GPIO_PIN_FUNCTION_M 12
#define GPIO_PIN_FUNCTION_N 13

#define PA01 GPIO(GPIO_PORTA, 1)
#define PA08 GPIO(GPIO_PORTA, 8)
#define PA09 GPIO(GPIO_PORTA, 9)
#define PA10 GPIO(GPIO_PORTA, 10)
#define PA11 GPIO(GPIO_PORTA, 11)
#define PA16 GPIO(GPIO_PORTA, 16)
#define PA17 GPIO(GPIO_PORTA, 17)
#define PA18 GPIO(GPIO_PORTA, 18)
#define PA24 GPIO(GPIO_PORTA, 24)
#define PA25 GPIO(GPIO_PORTA, 25)
#define PB10 GPIO(GPIO_PORTB, 10)
#define PB11 GPIO(GPIO_PORTB, 11)
#define CARD_DETECT_0 GPIO(GPIO_PORTB, 12)
#define WRITE_PROTECT_0 GPIO(GPIO_PORTB, 13)
#define TTINIT0 GPIO(GPIO_PORTB, 22)

// LEDs
#define PB04GREEN GPIO(GPIO_PORTB, 4)
#define PB05RED GPIO(GPIO_PORTB, 5)

// TO_CTTC1
#define LPEW0 GPIO(GPIO_PORTB, 15)
#define TTEOTA0 GPIO(GPIO_PORTA, 13)
#define CARTWE0 GPIO(GPIO_PORTA, 12)

// TO_CTTC2
#define RDDATA0 GPIO(GPIO_PORTA, 16)
#define RDCLK0 GPIO(GPIO_PORTA, 17)
#define DATDET0 GPIO(GPIO_PORTA, 19)
#define TTBOTA0 GPIO(GPIO_PORTA, 18)

// TO_CTTC3
#define RWDINGA0 GPIO(GPIO_PORTA, 21)
#define TOR0 GPIO(GPIO_PORTB, 17)
#define TIMA0 GPIO(GPIO_PORTA, 20)
#define TTRDY0 GPIO(GPIO_PORTA, 22)

// FROM CTTC1
#define WTA00 GPIO(GPIO_PORTB, 6)
#define RTA00 GPIO(GPIO_PORTB, 7)
#define WTA10 GPIO(GPIO_PORTB, 8)
#define RTA10 GPIO(GPIO_PORTB, 9)
#define WRENAB0 GPIO(GPIO_PORTA, 4)
#define WRDATA GPIO(GPIO_PORTA, 5)
#define TTREWC0 GPIO(GPIO_PORTA, 6)
#define MANEN0 GPIO(GPIO_PORTA, 7)

// FROM CTTC2
#define TTINIT0 GPIO(GPIO_PORTB, 22)
#define TTSEL0 GPIO(GPIO_PORTB, 23)
#define TTSR0 GPIO(GPIO_PORTA, 27)
#define TTFR0 GPIO(GPIO_PORTB, 31)
#define TTSF0 GPIO(GPIO_PORTB, 0)
#define TTMSPT0 GPIO(GPIO_PORTB, 1)
#define TTFF0 GPIO(GPIO_PORTB, 2)

#define STORAGEBUTTON GPIO(GPIO_PORTB, 14)

#endif // ATMEL_START_PINS_H_INCLUDED

// Header files
#include <stdio.h>
#include "driver/gpio.h"
#include <rom/ets_sys.h>// For ets_delay_us

#define builtin_led GPIO_NUM_2 //defining a macro for GPIO pin number 2

void app_main(void)
{
    // Since we will use the build in LED on ESP32.
    // This Led is on GPIO 2 of ESP32. and the mode is output (because we need the give the power to LED).

    gpio_set_direction(builtin_led, GPIO_MODE_OUTPUT); //This Function is used to set the direction of the GPIO.
    while (1)
    {
        gpio_set_level(builtin_led, 1); // To turn On the LED

        printf("The led is now ON\n");
        ets_delay_us(1000000); // delay of 1 second (1,000,000 microseconds)

        gpio_set_level(builtin_led, 0); // To turn Off the LED

        printf("The led is now OFF\n");
        ets_delay_us(1000000);

    }
}
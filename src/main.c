// Copyright (C) 2023 Zubax Robotics

#include "platform.h"

#include <stdio.h>
#include <string.h>
#include <util/delay.h>

#define BUFFER_SIZE 256  // Buffer size for reading serial data

int main(void)
{
    bool led_state = false;
    platform_init();
    while (true)
    {
        // Report on the current state
        char buffer[BUFFER_SIZE];
        snprintf(buffer, BUFFER_SIZE, "Current state of the LED: %s\r\n", led_state ? "ON" : "OFF");
        platform_serial_write(strlen(buffer), buffer);

        // Process the incoming data. There may be many bytes accumulated in the buffer.
        while (true)
        {
            const int16_t rx = platform_serial_read();
            if (rx < 0)
            {
                break;
            }
            const char c = (char) rx;
            if (c == 'A')
            {
                led_state = true;
            }
            if (c == 'B')
            {
                led_state = false;
            }
        }

        // Set the LED
        platform_led(led_state);

        _delay_ms(1000);
    }

    return 0;
}
// Copyright (C) 2023 Zubax Robotics

#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

void platform_init(void);

void platform_led(const bool on);

/// Make sure to kick the watchdog at least once every 8 seconds!
void platform_kick_watchdog(void);

/// The call is non-blocking unless the buffer is full. Transmission is interrupt-driven.
void platform_serial_write(const size_t size, const void* const data);
/// The call is non-blocking. Returns -1 if the buffer is empty, otherwise the byte value in the range [0, 255].
int16_t platform_serial_read(void);

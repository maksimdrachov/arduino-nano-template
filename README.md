# Arduino Nano Bare-Metal Project Template

This template is meant to serve as a starting point for writing bare-metal firmware for Arduino Nano.

Instead of using the API provided by Arduino IDE, we rely on the AVR-GCC toolchain.
You can check if it's installed on your computer by running the following:

```
avr-gcc --version
```

If you don't have it installed:

```
sudo apt-get update
sudo apt-get install gcc-avr binutils-avr avr-libc gdb-avr avrdude
```

`make` can be used for executing the most commonly required functionality.

- to build: `make all`
- to flash: `make dude`
- to test: `make execute_test`
- to format: `make format`
- assess size of the project: `make size`/`make sizex`

## Documentation

- Standard C libraries: https://en.cppreference.com/w/c/header.html
- AVR-GCC: https://www.nongnu.org/avr-libc/user-manual/modules.html
- Atmega328P datasheet: see `docs/`



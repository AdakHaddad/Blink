# MuqtadaPijarBlink

## Description

MuqtadaPijarBlink is a simple library for controlling LED blinking with configurable intervals. It is designed for easy integration into Arduino projects.

## Installation

1. Download the library from the [GitHub repository](https://github.com/AdakHaddad/MuqtadaPijarBlink).
2. Extract the downloaded file.
3. Copy the extracted folder into your Arduino `libraries` directory.

## Usage

Include the library in your sketch and use the `blink` function.

// Melakukan blink dengan interval default (500ms on, 500ms off)
blink(LED_PIN);

    // Melakukan blink dengan interval 200ms nyala dan 300ms mati
    blink(LED_PIN, 200, 300);

    // Blink dengan interval yang sama untuk nyala dan mati (500ms)
    blink(LED_PIN, 500);

    // Blink cepat (100ms nyala, 100ms mati)
    blink(LED_PIN, "fast");

    // Blink lambat (1000ms nyala, 1000ms mati)
    blink(LED_PIN, "slow");

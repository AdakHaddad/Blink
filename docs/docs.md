# MuqtadaPijarBlink

## Description

MuqtadaPijarBlink is a simple library for controlling LED blinking with configurable intervals. It is designed for easy integration into Arduino projects.

## Installation

1. Download the library from the [GitHub repository](https://github.com/AdakHaddad/MuqtadaPijarBlink).
2. Extract the downloaded file.
3. Copy the extracted folder into your Arduino `libraries` directory.

## Usage

Include the library in your sketch and use the `blink` function.

```cpp

//Default (500ms on, 500ms off)
blink(LED_PIN);

    // interval 200ms on dan 300ms off
    blink(LED_PIN, 200, 300);

    // on/off every 500ms
    blink(LED_PIN, 500);

    // Fast (t00ms on, 100ms off)
    blink(LED_PIN, "fast");

    // Slow (1000ms on, 1000ms off)
    blink(LED_PIN, "slow");
```

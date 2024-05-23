#ifndef MuqtadaPijarBlink_h
#define MuqtadaPijarBlink_h

#include "Arduino.h"
void blink(int pin);                                  // default
void blink(int pin, int duration);                    // Blink dengan interval
void blink(int pin, int onInterval, int offInterval); // Blink dengan on/off interval terpisah
void blink(int pin, const char *speed);               // Blink dengan parameter speed ("fast" / "slow")

#endif

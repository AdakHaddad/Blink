#include "MuqtadaPijarBlink.h"

void blink(int pin) // default
{
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
  delay(500);
}
// Blink dengan interval yang sama
void blink(int pin, int duration)
{
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  delay(duration);
  digitalWrite(pin, LOW);
  delay(duration);
}

// Blink dengan on/off interval yang berbeda
void blink(int pin, int onInterval, int offInterval)
{
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  delay(onInterval);
  digitalWrite(pin, LOW);
  delay(offInterval);
}

// Blink dengan parameter speed
void blink(int pin, const char *speed)
{
  pinMode(pin, OUTPUT);
  if (strcmp(speed, "fast") == 0)
  {
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin, LOW);
    delay(100);
  }
  else if (strcmp(speed, "slow") == 0)
  {
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(pin, LOW);
    delay(1000);
  }
  else
  {
    blink(pin);
  }
}

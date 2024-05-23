#include <MuqtadaPijarBlink.h>

const int LED_PIN = 2; // Pin yang terhubung dengan LED

void setup()
{
    // No setup code required
}

void loop()
{

    // Blink lambat (1000ms nyala, 1000ms mati)
    blink(LED_PIN, "slow");
}

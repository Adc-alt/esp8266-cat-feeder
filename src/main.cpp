#include <Arduino.h>

#define LED_GPIO 2 // GPIO 2 is typically the built-in LED on ESP8266

void setup()
{
    pinMode(LED_GPIO, OUTPUT);
}

void loop()
{
    digitalWrite(LED_GPIO, HIGH);
    delay(1000);
    digitalWrite(LED_GPIO, LOW);
    delay(1000);
}

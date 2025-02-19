#include <Arduino.h>

uint8_t esp32Led = LED_BUILTIN; // LED_BUILTIN

void setup()
{
    Serial.begin(115200);

    pinMode(esp32Led, OUTPUT);
}

void loop()
{
    digitalWrite(esp32Led, HIGH);
    delay(1000);
    digitalWrite(esp32Led, LOW);
    delay(1000);
}

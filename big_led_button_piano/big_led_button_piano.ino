#include "Keyboard.h"

#define BUTTONS 8

int keys[BUTTONS] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i'};
int pins[BUTTONS] = {2, 3, 4, 5, 6, 7, 9, 10};

void setup()
{
    for (int i = 0; i < BUTTONS; i++) pinMode(pins[i], INPUT_PULLUP);
    Keyboard.begin();
}

void loop()
{
    for (int i = 0; i < BUTTONS; i++)
    {
        if (digitalRead(pins[i]))
        {
            Keyboard.press(keys[i]);
        }
        else
        {
            Keyboard.release(keys[i]);
        }
    }
}

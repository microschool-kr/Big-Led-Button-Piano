#include "Keyboard.h"

#define AKEY 97
#define SKEY 115
#define DKEY 100
#define FKEY 102
#define GKEY 103
#define HKEY 104
#define JKEY 106
#define KKEY 107

#define BUTTONS 8

int keys[BUTTONS] = {AKEY, SKEY, DKEY, FKEY, GKEY, HKEY, JKEY, KKEY};
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

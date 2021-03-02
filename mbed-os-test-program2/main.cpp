#include "mbed.h"

DigitalOut myLED(LED1);
DigitalOut myLED2(Led3);

void Led(DigitalOut &ledpin);

int main()
{
    myLed=1;
    myLED2=1;
    while (true)
    {
        Led(myLED);
        Led(myLED2);
    }
}
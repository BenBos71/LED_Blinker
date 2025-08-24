#include <iostream>

#include "LED.hpp"
#include "Blinker.hpp"

int main()
{
    LED_Blinker::LED led;
    LED_Blinker::Blinker blinker(led);
    
    blinker.setBlinkInterval(500); // Set blink interval to 500 ms
    blinker.toggleLED(); // Toggle LED state
    blinker.toggleLED(); // Toggle LED state again
}
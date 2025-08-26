#include <iostream>
#include <chrono>

#include "LED.hpp"
#include "Blinker.hpp"

using namespace std;
using namespace chrono;
using namespace LED_Blinker;

int main()
{
    LED led;
    Blinker blinker(led);
    short interval;

    cout << "What blink interval (in ms) do you want to set? ";
    cin >> interval;
    
    blinker.setBlinkInterval((milliseconds)interval);

    auto start = high_resolution_clock::now();

    while (true)
    {
        if (blinker.checkBlinkInterval((milliseconds)interval, start))
        {
            start = high_resolution_clock::now();
            cout << "[" << duration_cast<milliseconds>(start.time_since_epoch()).count() << "]";
            blinker.toggleLED();
        }
    }

}
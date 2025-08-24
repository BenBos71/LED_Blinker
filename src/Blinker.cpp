#include "Blinker.hpp"
#include <iostream>

LED_Blinker::Blinker::Blinker(LED_Blinker::LED &a_Led) : m_Led(a_Led)
{
    std::cout << "Blinker is created and associated with an LED." << std::endl;
};

void LED_Blinker::Blinker::setBlinkInterval(short a_IntervalMs)
{
    m_BlinkIntervalMs = a_IntervalMs;
    std::cout << "Blink interval set to " << m_BlinkIntervalMs << " ms." << std::endl;
};

void LED_Blinker::Blinker::toggleLED()
{
    if (m_Led.isOn()) {
        m_Led.toggleOff();
    } else {
        m_Led.toggleOn();
    }
    std::cout << "LED state toggled." << std::endl;
};
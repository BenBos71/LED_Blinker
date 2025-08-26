#include "Blinker.hpp"
#include <iostream>

LED_Blinker::Blinker::Blinker(LED_Blinker::LED &a_Led) : m_Led(a_Led)
{
};

void LED_Blinker::Blinker::setBlinkInterval(milliseconds a_IntervalMs)
{
    m_BlinkIntervalMs = a_IntervalMs;
};

void LED_Blinker::Blinker::toggleLED()
{
    if (m_Led.isOn()) {
        m_Led.toggleOff();
    } else {
        m_Led.toggleOn();
    }
};

bool LED_Blinker::Blinker::checkBlinkInterval(milliseconds a_intervalMs, steady_clock::time_point a_intervalStart) const
{
    return high_resolution_clock::now() - a_intervalStart == a_intervalMs;
};
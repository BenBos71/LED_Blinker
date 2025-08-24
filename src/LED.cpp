#include "LED.hpp"
#include <iostream>

LED_Blinker::LED::LED() : m_State(false) {
    std::cout << "LED is created and initialized to OFF state." << std::endl;
};

void LED_Blinker::LED::toggleOn()
{
    std::cout << "LED is turned ON." << std::endl;
    m_State = true;
};

void LED_Blinker::LED::toggleOff()
{
    std::cout << "LED is turned OFF." << std::endl;
    m_State = false;
};

bool LED_Blinker::LED::isOn() const
{
    return m_State;
};
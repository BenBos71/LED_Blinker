#pragma once

#include "LED.hpp"

#include <chrono>

using namespace std::chrono;

namespace LED_Blinker
{
    class Blinker
    {
        public:
            Blinker(LED_Blinker::LED&);
            void setBlinkInterval(milliseconds a_intervalMs);
            void toggleLED();
            bool checkBlinkInterval(milliseconds a_intervalMs, 
                steady_clock::time_point a_intervalStart) const;
        private:
            milliseconds m_BlinkIntervalMs;
            LED_Blinker::LED &m_Led;
    };
} // namespace LED_Blinker

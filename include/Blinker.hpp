#pragma once

#include "LED.hpp"

namespace LED_Blinker
{
    class Blinker
    {
        public:
            Blinker(LED_Blinker::LED&);
            void setBlinkInterval(short);
            void toggleLED();
        private:
            short m_BlinkIntervalMs;
            LED_Blinker::LED &m_Led;
    };
} // namespace LED_Blinker

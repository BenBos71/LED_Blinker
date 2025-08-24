#pragma once

namespace LED_Blinker
{
    class LED
    {
        public:
            LED();
            void toggleOn();
            void toggleOff();
            bool isOn() const;
        private:
            bool m_State;
    };
} // namespace LED_Blinker

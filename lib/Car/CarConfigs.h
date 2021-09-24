#ifndef Car_configs_h
#define Car_configs_h

#include <Arduino.h>

namespace PortConfigs {
    const byte ULTRA_PORTS[] = { 7, 6 };
    const byte INFRAS_PORTS[] = { 15, 2, 4 };
    const byte PWM_CHANNELS[] = { 0, 1 };
    const byte ENGINES_PORTS[2][3] = {{ 27, 26, 25 }, { 13, 12, 14 }};
}

namespace OtherConfigs {
    const char *const INFRA_NAMES[] = { "LEFT", "CENTER", "RIGHT" };
    const unsigned short int DELAY_FRONT_CURVE = 300;
    const byte NORMAL_SPEED = 25;
    const byte RUN_SPEED = 70;
    const byte SPIN_SPEED = 40;
}

#endif

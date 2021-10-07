#ifndef Car_configs_h
#define Car_configs_h

#include <Arduino.h>

namespace PortConfigs {
    const byte ULTRA_PORTS[2] = { 16, 17 };
    const byte INFRAS_PORTS[3] = { 4, 2, 15 };
    const byte PWM_CHANNELS[2] = { 0, 1 };
    const byte ENGINES_PORTS[2][3] = {{ 13, 12, 14 }, { 27, 26, 25 }};
}

namespace OtherConfigs {
    const unsigned short int INFRAS_COMPARERS[3] = { 1000, 400, 1000 };
    const char *const INFRA_NAMES[3] = { "LEFT", "CENTER", "RIGHT" };
    const unsigned short int DELAY_FRONT_CURVE = 300;
    const byte NORMAL_SPEED = 25;
    const byte RUN_SPEED = 70;
    const byte SPIN_SPEED = 40;
    const bool LOG = true;
}

#endif

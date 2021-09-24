#ifndef Car_configs_h
#define Car_configs_h

#include <Arduino.h>

namespace PortConfigs {
    const byte ultra_ports[] = { 7, 6 };
    const byte infras_ports[] = { 15, 2, 4 };
    const byte pwm_channels[] = { 0, 1 };
    const byte engines_ports[2][3] = {{ 27, 26, 25 }, { 13, 12, 14 }};
}

namespace OtherConfigs {
    const char *const infras_names[] = { "LEFT", "CENTER", "RIGHT" };
    const unsigned short int delay_front_curve = 300;
    const byte normal_speed = 25;
    const byte run_speed = 70;
    const byte spin_speed = 40;
}

#endif

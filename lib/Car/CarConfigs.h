#ifndef Car_configs_h
#define Car_configs_h

#include <Arduino.h>

namespace PortConfigs {
    const byte ultra_ports[] = { 7, 6 };
    const byte infras_ports[] = { A0, A2, A1 };
    const byte left_engines_ports[] = { 11, 10 };
    const byte right_engines_ports[] = { 5, 9 };
}

namespace OtherConfigs {
    const char *const infras_names[] = { "Left", "Center", "Right" };
    const unsigned short int delay_front_curve = 250;
    const byte normal_speed = 25;
    const byte spin_speed = 40;
}

#endif

#ifndef ao_ct
#define ao_ct

#include <iostream>

class astro_object {
protected:
    float mass;
    float volume;
    float temperature;
public:
    astro_object();
    float get_mass();
    float get_temperature();
    float get_density();
};

#endif
#ifndef p_ct
#define p_ct

#include "astro_object.hpp"
#include <iostream>

class Planet: public astro_object{
protected:
    float t_day;
    float T_year;
    float Sun_distance;
    float diameter;
    float satellite_number;
    bool atmosphere;
    bool Solar_system;
public:
    Planet();
    float get_volume();
    float orbital_speed();
    float own_rotation_speed();
};

#endif
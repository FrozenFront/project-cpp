#include <Planet.hpp>

Planet::Planet(float d, float s, float t, float T, float n, bool a, bool b, float m, float temp): astro_object(m, temp){
    diameter = d;
    Sun_distance = s;
    t_day = t;
    T_year = T;
    satellite_number = n;
    atmosphere = a;
    Solar_system = b;
}

float Planet::get_volume(){
    return(4 * 3.14 * (diameter/2) * (diameter/2) * (diameter/2) / 3);
}

float Planet::orbital_speed(){
    if (Solar_system == true)
        return(2 * 3.14 * Sun_distance / T_year);
        return 0;
}

float Planet::own_rotation_speed(){
    return(2* 3.14 / t_day);
}

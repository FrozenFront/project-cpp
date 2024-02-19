#include <Universe.hpp>

Universe::Universe(float a, float r, float m, float T): astro_object(m, T){
    age = a;
    radius = r;
}

float Universe::get_age(){
    return(age);
}

float Universe::get_radius(){
    return(radius);
}

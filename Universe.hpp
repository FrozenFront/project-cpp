#ifndef u_ct
#define u_ct

#include "astro_object.hpp"
#include <iostream>

class Universe: public astro_object{
protected:
    float age;
    float radius;
public:
    Universe();
    float get_age();
    float get_radius();
};

#endif
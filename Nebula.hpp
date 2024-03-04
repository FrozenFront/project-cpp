#ifndef n_ct
#define n_ct

#include "astro_object.hpp"
#include <iostream>

class Nebula: public astro_object{
protected:
    float concentration;
    char* type;
public:
    Nebula();
    float get_particle_number();
};

#endif
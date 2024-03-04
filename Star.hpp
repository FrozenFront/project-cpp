#ifndef s_ct
#define s_ct

#include "Universe.hpp"
#include <iostream>
#include <math.h>

class Star: public Universe{
protected:
    float luminosity;
public:
    Star();
    void get_type();
};

#endif
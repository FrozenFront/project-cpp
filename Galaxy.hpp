#ifndef g_ct
#define g_ct

#include "Star.hpp"
#include <iostream>
#include <math.h>

class Galaxy: public Star{
protected:
    float thickness_of_disk;
public:
    Galaxy();
    float get_removal_rate (float R);
    float get_rot_speed();
};

#endif
#ifndef ns_ct
#define ns_ct

#include "astro_object.hpp"
#include <iostream>
#include <math.h>

class NeutronStar : public astro_object {
protected: 
	float radius;
public:
	NeutronStar();
	float barkDensity();
	float kerVolume();
};

#endif
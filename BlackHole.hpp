#ifndef bh_ct
#define bh_ct

#include "astro_object.hpp"
#include <iostream>
#include <math.h>

class BlackHole : public astro_object {
protected:
	char massType;
public:
	BlackHole();
	void getmassType();
};

#endif
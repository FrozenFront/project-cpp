#ifndef c_ct
#define c_ct

#include "astro_object.hpp"
#include <iostream>

class Comet : public astro_object {
protected: 
	bool tailExists;
	float nucPer;

public: 
	Comet();
	bool hasTail();
	float getCoreMass();
	float crustVolume();  
};

#endif
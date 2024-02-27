#ifndef a_ct
#define a_ct

#include "astro_object.hpp"
#include <iostream>

class Asteroid: public astro_object {
protected:
	char chemEl[8];
	char spectralClass;
	bool emitsLight;
	float radius;
	float gravitation;
public: 
	Asteroid();
	char spectralClassType();
	void getSpectralClassType();
	float getGravitation();
	bool hasLight();

};

#endif
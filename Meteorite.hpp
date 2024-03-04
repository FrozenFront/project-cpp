#ifndef m_ct
#define m_ct

#include "astro_object.hpp"
#include <iostream>
#include <math.h>

class Meteorite: public astro_object {
protected: 
	float speed;
	char regmaForm[16];
public:
	Meteorite();
	float getEnergy();
	void getregmaForm();
};

#endif
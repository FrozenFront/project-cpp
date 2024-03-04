#ifndef q_ct
#define q_ct

#include "astro_object.hpp"
#include <iostream>

class Quazar : public astro_object {
protected:
	char type[32];
	int type_class;
public:
	Quazar();
	void get_qTraits();
};

#endif
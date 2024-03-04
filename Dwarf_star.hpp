#ifndef ds_ct
#define ds_ct

#include "Star.hpp"
#include <iostream>

class dwarf_star: public Star{
public:
    void get_true_colour();
    void get_visible_colour();
};

#endif
#include <Star.hpp>

Star::Star(float L, float a, float r, float m, float T): Universe(a, r, m, T){
    luminosity = L;
}

void Star::get_type(){
    if (radius > 6950000000 and radius < 6950000000 and luminosity > 3.827 * 10260 and luminosity < 3.827 * 1026000)
        std::cout << 'Giant';
    if (mass > 2 * pow(10, 30) * 0.012 and mass < 2 * pow(10, 30) * 0.0767)
       std::cout << 'Dwarf';
}

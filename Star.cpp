#include "Star.hpp"
using namespace std;

Star::Star(){
    cout << "Set luminosity: " << "\n";
    cin >> luminosity;
}

void Star::get_type(){
    if (radius > 6950000000 and radius < 6950000000 and luminosity > 3.827 * 10260 and luminosity < 3.827 * 1026000)
        std::cout << 'Giant';
    if (mass > 2 * pow(10, 30) * 0.012 and mass < 2 * pow(10, 30) * 0.0767)
       std::cout << 'Dwarf';
}

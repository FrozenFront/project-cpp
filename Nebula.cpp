#include <Nebula.hpp>

Nebula::Nebula(float c, float m, float T): astro_object(m, T){
    concentration = c;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> *(type + i);
}

float Nebula::get_particle_number() {
    std::cin >> volume;
    return(volume * concentration);
}

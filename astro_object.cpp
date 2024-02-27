#include "astro_object.hpp"
using namespace std;

astro_object::astro_object(){
    cout << "Set the mass: " << "\n";
    cin >> mass;
    cout << "Set the temperature: " << "\n";
    cin >> temperature;
}

float astro_object::get_mass(){
    std::cout << 'Mass: ' << mass;
    return(mass);
}

float astro_object::get_temperature(){
    std::cout << 'Temperature: ' << temperature;
    return(temperature);
}

float astro_object::get_density(){
    std::cin >> volume;
    std::cout << 'Average density: ' << mass / volume;
    return(mass / volume);
}

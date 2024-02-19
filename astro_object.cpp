#include <astro_object.hpp>

astro_object::astro_object(float m, float T){
    mass = m;
    temperature = T;
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

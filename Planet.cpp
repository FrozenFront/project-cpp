#include "Planet.hpp"

Planet::Planet(){
    // diameter = d;
    std::cout << "Set diametre: " << "\n";
    std::cin >> diameter;
    // Sun_distance = s;
    std::cout << "Set sun distance: " << "\n";
    std::cin >> Sun_distance;
    // t_day = t;
    std::cout << "Set time of day: " << "\n";
    std::cin >> t_day;
    // T_year = T;
    std::cout << "Set time of year: " << "\n";
    std::cin >> T_year;
    // satellite_number = n;
    std::cout << "Set satellite number: " << "\n";
    std::cin >> satellite_number;
    // atmosphere = a;
    std::cout << "Atmosphere? 1 - true or 0 - false" << "\n";
    std::cin >> atmosphere;
    // Solar_system = b;
    std::cout << "Solar_system? 1 - true or 0 - false" << "\n";
    std::cin >> Solar_system;
}

float Planet::get_volume(){
    return(4 * 3.14 * (diameter/2) * (diameter/2) * (diameter/2) / 3);
}

float Planet::orbital_speed(){
    if (Solar_system == true)
        return(2 * 3.14 * Sun_distance / T_year);
        return 0;
}

float Planet::own_rotation_speed(){
    return(2* 3.14 / t_day);
}

#include <Dwarf_star.hpp>

void dwarf_star::get_true_colour(){
    if (temperature > 30000 and temperature < 60000)
        std::cout << 'Blue';
    if (temperature > 10000 and temperature < 30000)
        std::cout << 'White-Blue';
    if (temperature > 7500 and temperature < 10000)
        std::cout << 'White';
    if (temperature > 6000 and temperature < 7500)
        std::cout << 'Yellow-white';
    if (temperature > 5000 and temperature < 6000)
        std::cout << 'Yellow';
    if (temperature > 3500 and temperature < 5000)
        std::cout << 'Orange';
    if (temperature > 2000 and temperature < 3500)
        std::cout << 'Red';
}

void dwarf_star::get_visible_colour(){
    if (temperature > 30000 and temperature < 60000)
        std::cout << 'Blue';
    if (temperature > 10000 and temperature < 30000)
        std::cout << 'White-blue and white';
    if (temperature > 7500 and temperature < 10000)
        std::cout << 'White';
    if (temperature > 6000 and temperature < 7500)
        std::cout << 'White';
    if (temperature > 5000 and temperature < 6000)
        std::cout << 'Yellow';
    if (temperature > 3500 and temperature < 5000)
        std::cout << 'Yellow-orange';
    if (temperature > 2000 and temperature < 3500)
        std::cout << 'Orange-red';
}

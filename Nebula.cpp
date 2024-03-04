#include "Nebula.hpp"
using namespace std;

Nebula::Nebula(){
    cout << "Set concentration: " << "\n";
    cin >> concentration;
    cout << "Set the length of type: " << "\n";
    int n;
    cin >> n;
    cout << "Set type: " << "\n";
    for (int i = 0; i < n; i++)
        std::cin >> *(type + i);
}

float Nebula::get_particle_number() {
    return(volume * concentration);
}

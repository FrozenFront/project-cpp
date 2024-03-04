#include "Universe.hpp"
using namespace std;

Universe::Universe(){
    // age = a;
    // radius = r;
    cout << "Set age: " << "\n";
    cin >> age;
    cout << "Set radius: " << "\n";
    cin >> radius;
}

float Universe::get_age(){
    return(age);
}

float Universe::get_radius(){
    return(radius);
}

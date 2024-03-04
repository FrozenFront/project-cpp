#include "Galaxy.hpp"
using namespace std;

Galaxy::Galaxy(){
    // thickness_of_disk = td;
    cout << "Set thickness of disk: " << "\n";
    cin >> thickness_of_disk;

}

float Galaxy::get_removal_rate (float R){
    return(2.2 * pow(10,-18) * R);
}

float Galaxy::get_rot_speed(){
    return(pow(mass * 6.67 * pow(10,-11) / radius / 2,0.5));
}

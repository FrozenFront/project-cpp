#include <Galaxy.hpp>

Galaxy::Galaxy(float td, float L, float a, float r, float m, float T): Star(L, a, r, m, T){
    thickness_of_disk = td;
}

float Galaxy::get_removal_rate (float R){
    return(2.2 * pow(10,-18) * R);
}

float Galaxy::get_rot_speed(){
    return(pow(mass * 6.67 * pow(10,-11) / radius / 2,0.5));
}

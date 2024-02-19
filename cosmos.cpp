#include <iostream>
#include <vector>
#include <cmath>
#include "cosmos.hpp"

using namespace std;
astro_object::astro_object(float m, float v, float T) {
	mass = m;
	volume = v;
	temperature = T;
}
void astro_object::get_mass() {
	cout << "Mass: " << mass;
	return mass;
}
void astro_object::get_volume() {
	cout << "Volume: " << volume;
	return volume;
}
void astro_object::get_temp() {
	cout << "Temperature " << temperature;
	return temperature; 
}
float astro_object::get_density() {
	cin >> volume;
	cout << "Average density: " << m / volume;
	return m / volume;
}

Comet::Comet(bool t, float n) {
	tailExists = t;
	nucPer = n;
}
bool Comet::hasTail() {
	return tailExists;
}
float Comet::getCoreMass() {
	return mass * nuclearPercentage / 100;
}

float Comet::crustVolume() {
	return 1.25 * volume;
}

Asteroid::Asteroid(char c, char s, bool e, float r, float g) {
	chemEl = c;
	spectralClass = s;
	emitsLight = e;
	radius = r;
	gravitation = g;
}
char Asteroid::spectralClassType(char chemEl) {
	if (chemEl == "Carbon") {
		return "C";
	}
	else if (chemEl == "Silicium") {
		return "S";
	}
	else {
		return "M";
	}
}
void Asteroid::getSpectralClassType() {
	cout << spectralClassType(chemEl) << endl;
}
float Asteroid::getGravitation() {
	return 6.67 * mass / radius;
}
bool Asteroid::hasLight() {
	return emitsLight;
}

Meteorite::Meteorite(float s, char r) {
	speed = s;
	energy = e;
	regmaForm = r;
}
float Meteorite::getEnergy() {
	return mass * pow(speed, 2) / 2;
}
void Meteorite::regmaForm() {
	cout << regmaForm << endl; 
}

BlackHole::BlackHole(char m) {
	massType = m;
}
char BlackHole::massType{
	if (mass <= 2 * pow(10, 30)) {
		return "Near-solar class";
	}
	else {
		return "Massive class";
	}
}

Quazar::Quazar(char t) {
	type = t;
}
void Quazar::get_qTraits() {
	if (type == "Merging galaxies") {
		cout << "gas-rich galaxies collide" << endl;
	}
	else if (type == "Starburst") {
		cout << "dust-obscured star formation" << endl;
	}
	else if (type == "Blue quazar") {
		cout << "evolved jets weak winds" << endl;
	}
	else if (type == "Red quazar") {
		cout << "young jets strong winds" << endl;
	}
	else if (type == "Early-type galaxy") {
		cout << "dormant galaxy" << endl;
	}
}

NeutronStar::NeutronStar(float r) {
	radius = r;
}

float NeutronStar::barkDensity() {
	return get_density() * 0.4;
}
float NeutronStar::kerVolume() {
	return 4 / 3 * 3.14 * pow(radius, 3) * 0.3;
}

int main() {
	return 0;
}

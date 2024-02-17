#include <iostream>
#include <vector>
#include <cmath>
#include "cosmos.hpp"

using namespace std;
astro_object(float m, float v, float T) {
	mass = m;
	volume = v;
	temperature = T;
}
void get_mass() {
	cout << "Масса: " << mass;
	return mass;
}
void get_volume() {
	cout << "Объём: " << volume;
	return volume;
}
void get_temp() {
	cout << "Температура: " << temperature;
	return temperature; 
}
float get_density() {
	cin >> volume;
	cout << "Средняя плотность: " << m / volume;
	return m / volume;
}

Comet(bool t, float n) {
	tailExists = t;
	nucPer = n;
}
bool hasTail() {
	return tailExists;
}
float getCoreMass() {
	return mass * nuclearPercentage / 100;
}

float crustVolume() {
	return 1.25 * volume;
}

Asteroid(char c, char s, bool e, float r, float g) {
	chemEl = c;
	spectralClass = s;
	emitsLight = e;
	radius = r;
	gravitation = g;
}
char spectralClassType(char chemEl) {
	if (chemEl == "Углерод") {
		return "C";
	}
	else if (chemEl == "Кремний") {
		return "S";
	}
	else {
		return "M";
	}
}
void getSpectralClassType() {
	cout << spectralClassType(chemEl) << endl;
}
float getGravitation() {
	return 6.67 * mass / radius;
}
bool hasLight() {
	return emitsLight;
}

Meteorite(float s, char r) {
	speed = s;
	energy = e;
	regmaForm = r;
}
float getEnergy() {
	return mass * pow(speed, 2) / 2;
}
void regmaForm() {
	cout << regmaForm << endl; 
}

BlackHole(char m) {
	massType = m;
}
char massType{
	if (mass <= 2 * pow(10, 30)) {
		return "Околосолнечный класс";
	}
	else {
		return "Массивный класс";
	}
}
#include<Meteorite.hpp>
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

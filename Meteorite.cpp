#include "Meteorite.hpp"
using namespace std;

Meteorite::Meteorite() {
	cout << "Set speed: " << "\n";
	cin >> speed;
	for (int i=0;i<16;i++) regmaForm[i] = 0;
	cout << "Set regma Form: " << "\n";
	cin >> regmaForm;	
}
float Meteorite::getEnergy() {
	return mass * pow(speed, 2) / 2;
}
void Meteorite::getregmaForm() {
	cout << regmaForm << endl; 
}

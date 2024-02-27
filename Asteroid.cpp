#include "Asteroid.hpp"
using namespace std;
Asteroid::Asteroid() {
	// chemEl = c;
	for(int i=0; i<8;i++) chemEl[i] = 0;
	cout << "Set the Elements without point: " << "\n";
	cin >> chemEl;
	// spectralClass = s;
	cout << "Set spectral Class: " << "\n";
	cin >> spectralClass;
	// emitsLight = e;
	cout << "Emitc light? 1 - True, 0 - False" << "\n";
	cin >> emitsLight;
	// radius = r;
	cout << "Set radius: " << "\n";
	cin >> radius;
	// gravitation = g;
	cout << "Set gravitation: " << "\n";
	cin >> gravitation;
}
char Asteroid::spectralClassType() {
	if (chemEl == "Carbon00") {
		return 'C';
	}
	else if (chemEl == "Silicium") {
		return 'S';
	}
	else {
		return 'M';
	}
}
void Asteroid::getSpectralClassType() {
	cout << spectralClassType() << endl;
}
float Asteroid::getGravitation() {
	return 6.67 * mass / radius;
}
bool Asteroid::hasLight() {
	return emitsLight;
}

#include<Asteroid.hpp>
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

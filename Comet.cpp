#include "Comet.hpp"
using namespace std;

Comet::Comet() {
	// tailExists = t;
	cout << "Exists tail? 1 - true, 0 - false. " << "\n";
	cin >> tailExists;
	// nucPer = n;
	cout << "Set nuclear Percentage: " << "\n";
	cin >> nucPer;
}
bool Comet::hasTail() {
	return tailExists;
}
float Comet::getCoreMass() {
	return mass * nucPer / 100;
}

float Comet::crustVolume() {
	return 1.25 * volume;
}

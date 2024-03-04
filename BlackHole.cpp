#include "BlackHole.hpp"
using namespace std;

BlackHole::BlackHole() {
	cout << "Set mass Type: (N - near-solar or M - massive)" << "\n";
	cin >> massType;
	// massType = m;
};
void BlackHole::getmassType(){
	if (mass <= 2 * pow(10, 30)) {
		cout << 'Near-solar class';
	}
	else {
		cout << 'Massive class';
	}
};

#include "Quazar.hpp"
using namespace std;
Quazar::Quazar() {
	for (int i=0;i<32;i++) type[i] = 0;
	cout << "Set type: " << "\n";
	cin >> type;
	if (type[0] == 'M') type_class = 1;
	if (type[0] == 'S') type_class = 2;
	if (type[0] == 'B') type_class = 3;
	if (type[0] == 'R') type_class = 4;
	if (type[0] == 'E') type_class = 5;		
}
void Quazar::get_qTraits() {
	if (type_class == 1) {
		cout << "gas-rich galaxies collide" << endl;
	}
	else if (type_class == 2) {
		cout << "dust-obscured star formation" << endl;
	}
	else if (type_class == 3) {
		cout << "evolved jets weak winds" << endl;
	}
	else if (type_class == 4) {
		cout << "young jets strong winds" << endl;
	}
	else if (type_class == 5) {
		cout << "dormant galaxy" << endl;
	}
}

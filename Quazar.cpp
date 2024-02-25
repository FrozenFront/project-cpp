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

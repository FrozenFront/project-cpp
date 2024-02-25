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

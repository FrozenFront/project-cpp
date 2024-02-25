Comet::Comet(bool t, float n) {
	tailExists = t;
	nucPer = n;
}
bool Comet::hasTail() {
	return tailExists;
}
float Comet::getCoreMass() {
	return mass * nuclearPercentage / 100;
}

float Comet::crustVolume() {
	return 1.25 * volume;
}

NeutronStar::NeutronStar(float r) {
	radius = r;
}

float NeutronStar::barkDensity() {
	return get_density() * 0.4;
}
float NeutronStar::kerVolume() {
	return 4 / 3 * 3.14 * pow(radius, 3) * 0.3;
}

#include "NeuronStar.hpp"
NeutronStar::NeutronStar() {
	std::cout << "Set redius: "<< "\n";
	std::cin >> radius;
}

float NeutronStar::barkDensity() {
	return get_density() * 0.4;
}
float NeutronStar::kerVolume() {
	return 4 / 3 * 3.14 * pow(radius, 3) * 0.3;
}

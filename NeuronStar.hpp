class NeutronStar : public astro_object {
protected: 
	float radius;
public:
	NeutronStar(float r);
	float barkDensity();
	float kerVolume();
};

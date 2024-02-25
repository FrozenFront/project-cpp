class Meteorite: public astro_object {
protected: 
	float speed;
	char regmaForm;
public:
	Meteorite(float s, char r);
	float getEnergy();
	void regmaForm();
};

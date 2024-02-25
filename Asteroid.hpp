class Asteroid: public astro_object {
protected:
	char chemEl;
	char spectralClass;
	bool emitsLight;
	float radius;
	float gravitation;
public: 
	Asteroid(char c, char s, bool e, float r, float g);
	char spectralClassType(char chemEl);
	void getSpectralClassType();
	float getGravitation();
	bool hasLight();

};

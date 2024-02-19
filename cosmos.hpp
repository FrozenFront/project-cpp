class astro_object {
protected:
	float m;
	float volume;
	float tempreture;
public:
	astro_object(float m, float v, float T);
	void get_mass();
	void get_volume();
	void get_temperature();
	void get_density();
};
class Comet : public astro_object {
protected: 
	bool tailExists;
	float nucPer;

public: 
	Comet(bool t, float n);
	bool hasTail();
	float getCoreMass();
	float crustVolume();  
}
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

class Meteorite: public astro_object {
protected: 
	float speed;
	char regmaForm;
public:
	Meteorite(float s, char r);
	float getEnergy();
	void regmaForm();
};

class BlackHole : public asto_object {
protected:
	char massType;
public:
	BlackHole(char m);
	char massType();
};

class Quazar : public astro_object {
protected:
	char type;
public:
	Quazar(char t);
	void get_qTraits();
};

class NeutronStar : public astro_object {
protected: 
	float radius;
public:
	NeutronStar(float r);
	float barkDensity();
	float kerVolume();
};

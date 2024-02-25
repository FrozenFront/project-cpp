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

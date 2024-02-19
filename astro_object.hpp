class astro_object {
protected:
    float mass;
    float volume;
    float temperature;
public:
    astro_object(float m, float T);
    float get_mass();
    float get_temperature();
    float get_density();
};

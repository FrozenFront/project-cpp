class Nebula: public astro_object{
protected:
    float concentration;
    char* type;
public:
    Nebula(float c, float m, float T);
    float get_particle_number();
};

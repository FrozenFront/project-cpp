class Universe: public astro_object{
protected:
    float age;
    float radius;
public:
    Universe(float a, float r, float m, float T);
    float get_age();
    float get_radius();
};

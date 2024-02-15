class astro_object {
protected:
    float mass;
    float volume;
    float temperature;
public:
    astro_object(float m, float v, float T);
    void get_mass();
    void get_volume();
    void get_temperature();
    void get_density();
};

class Universe: public astro_object{
protected:
    float age;
    float radius;
public:
    Universe(float a, float r);
    float get_age();
    float get_radius();
};

class Planet: public astro_object{
protected:
    float t_day;
    float T_year;
    float Sun_distance;
    float diameter;
    float satellite_number;
    bool atmosphere;
    bool Solar_system;
public:
    Planet(float d, float s, float t, float T, float n, bool a, bool b);
    float get_volume();
    float orbital_speed();
    float own_rotation_speed();
};

class Star: public Universe{
protected:
    float luminosity;
public:
    Star(float L);
    void get_type();
};

class Galaxy: public Star{
protected:
    float thickness_of_disk;
public:
    Galaxy(float td);
    float get_removal_rate (float R);
    float get_rot_speed();
};

class Nebula: public astro_object{
protected:
    float concentration;
    char* type;
public:
    Nebula(float c);
    float get_particle_number();
};

class dwarf_star: public Star{
public:
    void get_true_colour();
    void get_visible_colour();
};

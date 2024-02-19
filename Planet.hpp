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
    Planet(float d, float s, float t, float T, float n, bool a, bool b, float m, float temp);
    float get_volume();
    float orbital_speed();
    float own_rotation_speed();
};

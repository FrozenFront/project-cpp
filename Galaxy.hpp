class Galaxy: public Star{
protected:
    float thickness_of_disk;
public:
    Galaxy(float td, float L, float a, float r, float m, float T);
    float get_removal_rate (float R);
    float get_rot_speed();
};

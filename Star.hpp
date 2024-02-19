class Star: public Universe{
protected:
    float luminosity;
public:
    Star(float L, float a, float r, float m, float T);
    void get_type();
};

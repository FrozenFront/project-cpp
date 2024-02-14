class astro_object {
protected:
    float mass;
    float volume;
    float temperature;
public:
    astro_object(float m, float v, float T){
        mass = m;
        volume = v;
        temperature = T;
    }
    void get_mass(){
    cout << 'Mass: ' << mass;
    }
    void get_volume(){
    cout << 'Volume: ' << volume;
    }
    void get_temperature(){
    cout << 'Temperature: ' << temperature;
    }
    void get_density(){
    cout << 'Average density: ' << m / v;
    }
};

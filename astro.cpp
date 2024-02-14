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
    cout << 'Масса объекта: ' << mass;
    }
    void get_volume(){
    cout << 'Объём объекта: ' << volume;
    }
    void get_temperature(){
    cout << 'Средняя температура объекта: ' << temperature;
    }
    void get_density(){
    cout << 'Средняя плотность объекта: ' << m / v;
    }
};

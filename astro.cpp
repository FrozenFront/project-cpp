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
    cout << '����� �������: ' << mass;
    }
    void get_volume(){
    cout << '����� �������: ' << volume;
    }
    void get_temperature(){
    cout << '������� ����������� �������: ' << temperature;
    }
    void get_density(){
    cout << '������� ��������� �������: ' << m / v;
    }
};

#pragma once
#include <Figuras/Figura.hpp>

class Circulo : public Figura
{
private:
    float radio;
public:
    Circulo(float radio) {
        this->radio = radio;
    }
    ~Circulo() {}
    float LeerArea() override{
        return 3.14159 * radio * radio;
    }
    float LeerPerimetro() override{
        return 2 * 3.14159 * radio;
    }
};

#pragma once
#include <Figuras/Figura.hpp>

class Triangulo : public Figura 
{
private:
    float altura;
    float base;
    float lado1, lado2;
public:
    Triangulo(float altura, float base, float lado1, float lado2) {
        this->altura=altura;
        this->base=base;
        this->lado1=lado1;
        this->lado2=lado2;
    }
    ~Triangulo() {}
    float LeerArea() override{
        return (base * altura)/2;
    }
    float LeerPerimetro() override{
        return lado1 + lado2+ base;
    }
};
#pragma once 
class Figura
{
private:
    
public:
    Figura() {}
    ~Figura() {}
    virtual float LeerArea() = 0;
    virtual float LeerPerimetro() = 0;
};
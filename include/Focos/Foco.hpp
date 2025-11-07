#pragma once
#include <EstadoFoco.hpp>
class Foco
{
private:
    bool estado;
public:
    Foco() { //Constructor

    }
    ~Foco() { //Destructor

    } 
    void Encender(void){
        estado = true;
    }
    void Apagar(void){
        estado = false;
    }
    EstadoFoco MostrarEstado(){
        return estado;
    }
};
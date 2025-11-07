#pragma once
#include <Foco.hpp>
#include <iostream>
using namespace std;
class Serie
{
private:
    bool estado;
    Foco focos[10];
public:
    Serie() {}
    ~Serie() {}
    void Encender(void){
        for (int i = 0; i < 10; i++)
        {
            focos[i].Encender();
        }
        
    }
    void Apagar(void){
        for (int i = 0; i < 10; i++)
        {
            focos[i].Apagar();
        }
        
    }
    void MostrarEstado(){
        for (int i = 0; i < 10; i++)
        {
            cout << focos[i].MostrarEstado();
        }
        cout << endl;
    }
};
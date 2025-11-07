#include <Foco.hpp>
#include <Serie.hpp>
#include <iostream>
#include <linalg.h>
using namespace std;

int main(int argc, char const *argv[])
{
    Foco foquito;
    foquito.Apagar();
    foquito.Encender();
    cout<<foquito.MostrarEstado() << endl;

    Foco foco2;
    foco2.Encender();
    cout<<foco2.MostrarEstado() << endl;  
    
    Serie s1;
    s1.Encender();
    s1.MostrarEstado();
    return 0;
}

#include <iostream>
#include <Figuras/Figura.hpp>
#include <Figuras/Cuadrado.hpp>
#include <Figuras/Circulo.hpp>
#include <Figuras/Triangulo.hpp>
using namespace std;

int main(int argc, char const *argv[])
{
    Figura *f;
    f = new Cuadrado(4);
    cout << "Area: " << f->LeerArea() << endl;
    cout << "Perimetro: " << f->LeerPerimetro() << endl;

    f = new Circulo(4);
    cout << "Area: " << f->LeerArea() << endl;
    cout << "Perimetro: " << f->LeerPerimetro() << endl;

    f = new Triangulo(2, 5, 2, 5);
    cout << "Area: " << f->LeerArea() << endl;
    cout << "Perimetro: " << f->LeerPerimetro() << endl;
    return 0;   
}

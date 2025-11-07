#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<sizeof(int)<<endl;
    cout<<sizeof(char)<<endl;
    cout<<sizeof(long)<<endl;
    cout<<sizeof(bool)<<endl;
    cout<<sizeof(double)<<endl; 
     cout<<sizeof(byte)<<endl;

    bool A;
    cout<<"Direccion A: "<<&A<<endl;

  //  cout<<malloc(4)<<endl;

    void* direccion = malloc(4);
    cout<<direccion<<endl; // Contenido de la direccion
    cout<<&direccion<<endl; // Ubicacion de la direccion
    cout<<sizeof(direccion)<<endl; // Tamaño
    int lista[4];
    cout<<lista<<endl;
    lista[0]=1;
    lista[1]=2;
    lista[2]=3;
    lista[3]=4;
    cout<<lista[0]<<endl;
    cout<<&lista[0]<<endl;
    cout<<lista+1<<endl;
    cout<<*(lista+1)<<endl;
    return 0;
}

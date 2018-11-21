#include <iostream>

using namespace std;

int main()
{
    int tabla;
    int limite;
    int contador = 1;
    int operacion = 0;
    cout << "tabla de multiplicar" << endl;
    cout<<"Ingrese el numero de la tabla : "<<endl;
    cin>>tabla;
    cout<<"Ingrese el limite de la tabla: "<<endl;
    cin>>limite;
    while(contador <= limite){

        operacion = tabla * contador;
        cout << tabla <<" * " <<contador <<" = " << operacion << endl;
        contador = contador + 1;
    }

    return 0;
}

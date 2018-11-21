#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int opcion;
    int suma;
    int multiplicacion;
    cout<<"Ingrese el primer valor: "<<endl;
    cin>>a;
    cout<<"Ingrese el segundo valor: "<<endl;
    cin>>b;
    cout<<"Ingrese el tercer valor: "<<endl;
    cin>>c;
    cout<<"Ingrese una opcion: "<<endl;
    cin>>opcion;
    switch(opcion){
    case 1:
        suma = a+b+c;
        cout<<endl;
        cout<<"Su suma es: "<< suma <<endl;
        break;
    case 2:
        multiplicacion = a * b * c;
        cout<<endl;
        cout<<"Su multiplicacion es: "<< multiplicacion <<endl;
        break;
    default:
        cout<<" No hay nada que mostrar. "<<endl;
        cout<<" Ingrese un caso entre 1 o 2. "<<endl;
    }
    return 0;
}

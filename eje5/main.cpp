#include <iostream>

using namespace std;

int main()
{
    cout << "EJEMPLO DE SWITCH" << endl;
    int dia_semana;
    cout<<"Ingrese el dia de la semana: "<<endl;
    cin>>dia_semana;
    switch(dia_semana){
    case 1:
        cout<<"Su dia es Lunes. "<<endl;
        break;
    case 2:
        cout<<"Su dia es Martes. "<<endl;
        break;
    case 3:
        cout<<"Su dia es Miercoles. "<<endl;
        break;
    case 4:
        cout<<"Su dia es Jueves. "<<endl;
        break;
    case 5:
        cout<<"Su dia es Viernes. "<<endl;
        break;
    case 6:
        cout<<"Su dia es Sabado. "<<endl;
        break;
    case 7:
        cout<<"Su dia es Domingo. "<<endl;
        break;
    default:
        cout<<" No hay dia que mostar......."<<endl;
        cout<<"...Ingrese un valor entre..."<<endl;
        cout<<"1 y 7"<<endl;
      }
    return 0;
}

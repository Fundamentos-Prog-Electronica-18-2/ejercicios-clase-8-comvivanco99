#include <iostream>

using namespace std;

int main()
{
    int numero;
    int limite;
    int opcion;
    int operacion=0;
    int contador=1;
    cout<<"Ingrese el numero de la tabla : "<<endl;
    cin>>numero;
    cout<<"Ingrese el limite de la tabla: "<<endl;
    cin>>limite;
    cout<<"Ingrese la opcion: "<<endl;
    cin>>opcion;
    if(opcion==1){
         while(contador <= limite){
             operacion = numero * contador;
             cout << numero  <<" * " <<contador <<" = " << operacion << endl;
             contador = contador + 1;
        }
    }else{
            if(opcion==2){
                 while(contador <= limite){
                    operacion = numero  + contador;
                    cout << numero  <<" + " <<contador <<" = " << operacion << endl;
                    contador = contador + 1;
                    }
            }else{
                  cout<<" Opcion Incorrecta. "<<endl;
            }
            }
return 0;
        }




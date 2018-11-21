#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nombre;
    string apellido;
    int edad;
    cout<<"Ingrese su Nombre y Apellido: "<<endl;
    cin>>nombre>>apellido;
    cout<<"Ingrese su edad: "<<endl;
    cin>>edad;
    if(edad < 10){
        cout<< nombre<<" "<<apellido<<endl;
        cout<< "con "<< edad << " anos " <<endl;
        cout<<"Pertenece a Basica. "<<endl;
    }else{
        if((edad>=10) && (edad<=14)){
                cout<<nombre << " " <<apellido<<" tiene "<< edad<<endl;
                cout<<"Pertenece al Basica Superior."<<endl;
        }else{
             if ((edad>=14) && (edad<=17)){
                cout<<nombre<<" "<<apellido<<" tiene "<< edad<<endl;
                cout<<"Pertenece Al Bachillerato unificado. "<<endl;
              }else{
                 cout<<"Edad fuera de rango. "<<endl;
              }
             }
          }
return 0;
}

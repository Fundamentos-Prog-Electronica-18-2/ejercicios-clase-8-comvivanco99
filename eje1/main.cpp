#include <iostream>

using namespace std;

int main()
{
    double a=10;
    double b=2.4;
    double resultado=0;
    cout << "Resoluci�n de una ecuaci�n de primer grado" << endl;
    if(a!=0){
        resultado = -b/a;
        cout << "El resultado es :" << resultado << endl;
    }else{
        if(b!=0){
            cout << "soluci�n imposible"<< endl;
        }else{
            cout << "soluci�n indeterminda"<< endl;
        }
    }
    return 0;
 }

#include <iostream>

using namespace std;

int main()
{
    double a=10;
    double b=2.4;
    double resultado=0;
    cout << "Resolución de una ecuación de primer grado" << endl;
    if(a!=0){
        resultado = -b/a;
        cout << "El resultado es :" << resultado << endl;
    }else{
        if(b!=0){
            cout << "solución imposible"<< endl;
        }else{
            cout << "solución indeterminda"<< endl;
        }
    }
    return 0;
 }

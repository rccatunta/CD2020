#include <iostream>
using namespace std;

// Para mandar parámetros por referencia debemos colocar un &a al lado de la variable

void cambio(int &a,int &b) {
    int aux = a;
    a = b;
    b = aux;
}

int main() {
    int a=8;
    int b=17;
    cout<<"Valores al inicio" << endl;
    cout<<"a=" << a << endl;
    cout<<"b=" << b << endl;
    cambio(a,b);
    cout<<"Valores despues del cambio" << endl;
    cout<<"a=" << a << endl;
    cout<<"b=" << b << endl;
    return 0;
}
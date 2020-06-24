#include <iostream>

using namespace std;

float pi = 3.141592; // Esta es una variable global existe en todo el programa y puede ser accesado desde cualquier función.

int suma10(int x) {
    cout<< a << endl; // Esta linea tendra error ya que la variable a no existe en este contexto.
    cout<<"pi en la funcion "<< pi << endl;
    return x + 10;
}

int main() {
    int a = 10;

    for(int i=0; i<10; i++) {
        cout<<a<<endl;
    }
    cout<< i << endl; // Esta linea tendra error ya que la variable i no existe en este contexto

    cout<< x << endl; // Esta linea tendra erro ya que la variable x no existe en este contexto

    suma10(a);

    cout<<"pi en main "<< pi << endl;
    return 0;
}

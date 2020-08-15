#include <iostream>
#include <vector> // Libreria para usar vectores
using namespace std;
int main(){
    vector<int> v; // Creamos un vector vacio
    vector<int> v2(10); // Creamos un vector de int de tamaño 10
                          // con 10 espacios vacios
    vector<int> v3(15,5); // Creamos un vector de enteros de tamaño 5
                          // con 5s en cada una de sus posiciones
    vector<int> v4(v3); // Creamos un vector copia de v3 que se llama v4
    //ACCESO
    v2[0]=10;
    v2[1]=9;
    v2[2]=8;
    v2[3]=7;
    v2[4]=6;
    v2[5]=5;
    v2[6]=4;
    v2[7]=3;
    v2[8]=2;
    v2[9]=1;
    cout<<"Primer elemento "<<v2.front()<<endl;
    cout<<"Ultimo elemento "<<v2.back()<<endl;
    cout<<"Quinto elemento "<<v2[4]<<endl;
    return 0;
}

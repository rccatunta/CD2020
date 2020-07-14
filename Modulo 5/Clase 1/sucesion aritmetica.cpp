#include <iostream>

using namespace std;

int main(){
    int a=8; // Primer termino de la sucesion
    // Imprimir los primeros n terminos de una sucesion
    int n;// n es cuantos terminos de la sucesion queremos mostrar
    cin>>n;
    // Generacion de la sucesion - Forma 1 sin usar i
    for(int i=0;i<n;i++){ // for que hace n vueltas
        cout<<a<<" ";
        a=a+3;
    }
    cout<<endl;
    // Generacion de la sucesion - Forma 2 usando i
    for(int i=0;i<n;i++){ // for que hace n vueltas
        cout<<8+(i*3)<<" ";
    }
    return 0;
}

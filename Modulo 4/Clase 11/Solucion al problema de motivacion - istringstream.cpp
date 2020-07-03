#include <iostream>
#include <sstream>// Libreria necesaria para usar istringstream
using namespace std;

int main(){
    string linea;
    int num;
    // cin>>linea; cin no funciona para leer lineas
    getline(cin,linea);
    istringstream S(linea);// Creado un istringstream llamado S que obtendra los valores de linea
    int suma=0;
    while(S>>num){
        suma=suma+num;
    }
    cout<<suma<<endl;
    return 0;
}

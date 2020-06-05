#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string s; // string vacio
    string t="pepe"; // string con contenido pepe
    string r(5,'B'); // string con contenido BBBBB
    cout<<r<<endl;
    s="juanito";
    t="";
    cout<<s.size()<<endl; // Imprimira 7
    cout<<t.size()<<endl; // Imprimira 0
    string frase = "bla ble bli blo blu";
    int pos = frase.find("bli"); // pos es igual a la posición donde se encontró bli, en este caso 8
    int pos2 = frase.find("Bla"); // pos es igual a -1 porque no encontro la palabra
    int pos3 = frase.find('b'); // pos sera igual a 0 porque la primera letra b esta ahi.
    frase = "Creadores Digitales 2020";
    //substr(pos,largo)
    cout<<frase.substr(10,9)<<endl; // Imprimira Digitales
    cout<<frase.substr(10)<<endl; // Imprimira Digitales 2020
    return 0;
}

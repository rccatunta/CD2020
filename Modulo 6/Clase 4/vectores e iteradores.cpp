#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string>v;
    v.push_back("Sein");
    v.push_back("Adriana");
    v.push_back("Edwin");
    v.push_back("Ignacio");
    v.push_back("Nicolas");
    //Creamos un iterador
    vector<string>::iterator it;
    it = v.begin();
    cout<< &it <<endl; // Esto imprimira una direccion de memoria
    cout<< *it <<endl; // Imprimira el inicio del vector

    it++;// Esto mueve el iterador una posicion a la derecha
    cout<< *it <<endl;

    it=it+3; // Esto mueve el iterador 3 posiciones a la derecha
    cout<< *it <<endl;

    it=it-2; // Esto mueve el iterador 2 posiciones a la izquierda
    cout<< *it <<endl;

    // For imprime el contenido del vector con iteradores
    for(it=v.begin();it!=v.end();it++){
        cout<< *it <<" ";
    }
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"El tamanio de mi vector es "<<v.size()<<endl;
    // resize cambia el tamanio de un vector
    v.resize(20,77); // Aumentar el tamanio del vector a 20 y si crea nuevas
                     // casillas les pondra 77
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"El tamanio de mi vector es "<<v.size()<<endl;
    // resize tambien sirve para poder borrar algunos elementos
    v.resize(12,200);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"El tamanio de mi vector es "<<v.size()<<endl;
    return 0;
}

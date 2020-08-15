#include <iostream>
#include <vector> // Libreria para usar vectores
using namespace std;
int main(){
    vector<int> v;
    if(v.empty()){ // empty nos dice si el vector vacio
        cout<<"El vector esta vacio"<<endl;
    }
    else{
        cout<<"El vector no esta vacio"<<endl;
        cout<<"Tiene tamanio "<<v.size()<<endl; // size nos devuelve el tamaño del vector
    }
    // INSERTAR
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(15);
    v.push_back(278);
    v.push_back(-81);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // BORRAR
    v.pop_back();
    v.pop_back();
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.clear();
    cout<<v.size()<<endl;
    return 0;
}

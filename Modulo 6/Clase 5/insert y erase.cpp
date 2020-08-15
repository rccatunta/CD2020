#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(8);
    v.push_back(6);
    v.push_back(2);
    v.push_back(8);
    v.push_back(9);
    cout<<"Vector antes de insertar"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //Insertar
    v.insert(v.begin()+2,7);
    cout<<"Vector despues de insertar"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //Borrar
    v.erase(v.begin()+3);
    cout<<"Vector despues de borrar"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}

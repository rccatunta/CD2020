#include <iostream>
using namespace std;

int main(){
    // en los pair importa el orden
    pair<string,int> p1;
    pair<int,string> p2;
    // first hace referencia al primer elemento
    p1.first="Rodrigo";
    // second hace referencia al segundo elemento
    p1.second=13;
    cout<<"Nombre:"<<p1.first<<endl;
    cout<<"Edad:"<<p1.second<<endl;
    // 2da forma de introducir datos a un pair
    p2=make_pair(21,"Rodo");
    cout<<"Nombre:"<<p2.second<<endl;
    cout<<"Edad:"<<p2.first<<endl;
    // Comparando pairs
    pair<int,int> a,b;
    a=make_pair(5,3);
    b=make_pair(5,2);
    //Imprime el pair menor
    if(a<b){
        cout<<a.first<<" "<<a.second<<endl;
    }
    else{
        cout<<b.first<<" "<<b.second<<endl;
    }
    return 0;
}

#include <iostream>
#include <set> // set => conjunto
using namespace std;

int main(){
    set<int>conj;
    conj.insert(1);
    conj.insert(14);
    conj.insert(7);
    conj.insert(56);
    conj.insert(3);
    conj.insert(8);
    conj.insert(124);
    conj.insert(56);//Repetido
    //ITERADORES
    set<int>::iterator it;
    //IMPRIME EL CONTENIDO DEL SET
    for(it=conj.begin();it!=conj.end();it++){
        cout<< *it <<" ";
    }
    cout<<endl;
    //BORRADO
    conj.erase(1);
    conj.erase(14);

    for(it=conj.begin();it!=conj.end();it++){
        cout<< *it <<" ";
    }
    cout<<endl;

    //OPERACIONES
    //COUNT
    cout<<"El 5 aparece "<<conj.count(5)<<" veces"<<endl;
    cout<<"El 124 aparece "<<conj.count(124)<<" veces"<<endl;
    //FIND
    if(conj.find(7)!=conj.end()){
        cout<<"El 7 esta en el conjunto"<<endl;
    }
    else{
        cout<<"El 7 no esta en el conjunto"<<endl;
    }
    if(conj.find(100)!=conj.end()){
        cout<<"El 100 esta en el conjunto"<<endl;
    }
    else{
        cout<<"El 100 no esta en el conjunto"<<endl;
    }
    //LOWER_BOUND
    //El limite inferior de x es el primer numero mayor o igual a x
    cout<<"El limite inferior de 7 es "<<*conj.lower_bound(7)<<endl;
    cout<<"El limite inferior de 56 es "<<*conj.lower_bound(56)<<endl;
    cout<<"El limite inferior de 10 es "<<*conj.lower_bound(10)<<endl;
    //UPPER BOUND
    //El limite superior de x es el primer numero mayor a x
    cout<<"El limite superior de 7 es "<<*conj.upper_bound(7)<<endl;
    cout<<"El limite superior de 56 es "<<*conj.upper_bound(56)<<endl;
    cout<<"El limite superior de 10 es "<<*conj.upper_bound(10)<<endl;

    //CAPACIDAD
    cout<<"El tamanio del set es "<<conj.size()<<endl;
    //CLEAR
    conj.clear(); // Borra todos los elementos del conjunto
    cout<<"El tamanio del set es "<<conj.size()<<endl;
    return 0;
}

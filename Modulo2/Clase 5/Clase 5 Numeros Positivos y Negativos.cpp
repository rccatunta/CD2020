//Por las leyes de la matematica un numero puede ser una de las siguientes 3 opciones
//a) Positivo
//b) Negativo
//c) Cero
//El programa nos dira si un numero es Positivo, Negativo o Cero
#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    if(num<0){
        cout<<"Negativo"<<endl;
    }
    else{
        if(num>0){
            cout<<"Positivo"<<endl;
        }
        else{
            cout<<"Cero"<<endl;
        }
    }
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int num;//Creando la variable num de tipo entero
    cin>>num;//Pidiendo un numero
    //Estoy guardando ese numero en la variable num
    if(num>5){//if(Pregunta)
        //Se ejecutara cuando se cumpla la condicion
        cout<<"El numero es mayor a 5"<<endl;
    }
    else{//Si no se cumple la condicion
        //Se ejecutara cuando NO se cumpla la condicion
        cout<<"El numero es menor o igual a 5"<<endl;
    }
    return 0;
}

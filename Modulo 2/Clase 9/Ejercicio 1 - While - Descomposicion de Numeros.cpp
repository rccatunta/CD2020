//Programa que saca los digitos de un numero
//Descomposicion Numerico
#include <iostream>
using namespace std;
int main(){
    int num;//Creando la variable num de tipo entero
    int digito;//Creando la variaable que guardara a los digitos
    cin>>num;//Pidiendo el numero
    //Proceso para sacar los digitos del numero
    while(num>0){//Mientras el numero sea mayor a 0 <-> Mientras el numero tenga digitos
        digito=num%10;//Sacando el digito
        cout<<digito<<endl;//Imprimiendo el digito
        num=num/10;//Actualizamos el numero
    }
    return 0;
}

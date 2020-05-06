#include <iostream>
using namespace std;
int main(){
    int num;
    int fuerza=0;
    cin>>num;//Pedimos el numero del que se desea saber la fuerza
    while(num>0){//Ciclo que saca los digitos de un numero
        int digito=num%10;
        if(digito%2 == 0){//Preguntando si el digito es par
            fuerza=fuerza+digito;//Acumulando la fuerza
        }
        num=num/10;
    }
    cout<<fuerza<<endl;
    return 0;
}

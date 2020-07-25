#include <iostream>

using namespace std;

int main(){
    int num;
    while(cin>>num){ // Para multiples casos de prueba, EOF, Hasta Fin de Archivo
        int suma=0;
        while(num>0){
            int digito = num%10; // Con modulo 10 sacamos el digito
            suma = suma + digito;
            num = num/10; // Actualizamos el valor de num
        }
        cout<<suma<<endl;
    }
    return 0;
}

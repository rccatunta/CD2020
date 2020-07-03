#include <iostream>

using namespace std;

int contar_digitos(int num){
    if(num==0){ // Caso base
        return 0;
    }
    return 1+contar_digitos(num/10); // Funcion recursiva
}

int main(){
    cout<<contar_digitos(41232)<<endl;
    return 0;
}

//Programa que dice si un numero es capicua o no
//Un numero es capicua si se lee igual de ambos lados
//Ej. 2112 88588 123321 11 2
#include <iostream>
using namespace std;
int main(){
    int num;//Creando la variable num de tipo entero
    int digito;//Creando la variaable que guardara a los digitos
    int numv=0;//numv guardara el numero volcado (dado la vuelta)
    int copia_num;//Guardara una copia del numero
    cin>>num;//Pidiendo el numero
    copia_num = num;//Guardando la copia del numero
    //Proceso para sacar los digitos del numero
    while(num>0){//Mientras el numero sea mayor a 0 <-> Mientras el numero tenga digitos
        digito=num%10;//Sacando el digito
        //Pegar el digito al numero volcado
        numv=numv*10+digito;//Pegamos el digito al numero volcado
        num=num/10;//Actualizamos el numero
    }
    if(numv==copia_num){//Si el numero original es igual al numero dado la vuelta
        //Si es igual es CAPICUA
        cout<<"ES CAPICUA"<<endl;
    }
    else{
        //Si no, no es CAPICUA
        cout<<"NO ES CAPICUA"<<endl;
    }
    return 0;
}

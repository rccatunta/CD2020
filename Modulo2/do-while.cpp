#include <iostream>
using namespace std;
int main(){
    string contra;
    int intentos=0;
    do{
      if(intentos>0){
        cout<<"Contrasenia incorrecta"<<endl;
        cout<<"Ya intentaste "<<intentos<<" veces"<<endl;
      }
      if(intentos>=3){
        cout<<"Superaste el limite de intentos"<<endl;
        return 0; // TERMINAR EL PROGRAMA
      }
      cout<<"Ingrese la contrasenia"<<endl;
      cin>>contra;
      intentos++;
    }while(contra!="shrek");//Mientras la contrasenia no sea shrek
    //se repite el ciclo
    cout<<"Ingreso Correcto"<<endl;
    return 0;
}

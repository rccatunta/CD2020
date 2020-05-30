#include <iostream>
using namespace std;
int main(){
    string palabra; // Creamos el string
	while(cin>>palabra){ // Pedimos el string
        int tam = palabra.size(); // Obtenemos su tamaño
        cout<<"La palabra ingresada tiene "<<tam<<" letras"<<endl;
        for(int i=0;i<tam;i++){
            cout<<palabra[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

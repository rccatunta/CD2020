#include <iostream>
using namespace std;
int main(){
    string palabra; // Creamos el string
	while(cin>>palabra){ // Pedimos el string
		int tam = palabra.size(); // Obtenemos su tamaño
		cout<<palabra.size()<<endl;
		// Contamos las vocales
		int cant_vocales = 0; // En esta variable se contaran las vocales
		for(int i=0;i<tam;i++){// Recorremos todas las letras
			char letra=palabra[i];
			if(letra=='a' or letra=='e' or letra=='i' or letra=='o' or letra=='u'){
				cant_vocales = cant_vocales + 1;
			}
		}
		cout<<"La palabra tiene "<<cant_vocales<<" vocales"<<endl;
	}
    return 0;
}

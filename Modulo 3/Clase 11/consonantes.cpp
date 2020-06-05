#include <iostream>
using namespace std;
int main(){
    string palabra; // Creamos el string
	while(cin>>palabra){ // Pedimos el string
		int tam = palabra.size(); // Obtenemos su tamaño
		// Contamos las vocales
		int cant_consonantes = 0; // En esta variable se contaran las vocales
		for(int i=0;i<tam;i++){// Recorremos todas las letras
			char letra=palabra[i];
			if(letra=='a' or letra=='e' or letra=='i' or letra=='o' or letra=='u'){
				continue;
			}
			else{
                cant_consonantes = cant_consonantes + 1;
			}
		}
		cout<<cant_consonantes<<endl;
	}
    return 0;
}

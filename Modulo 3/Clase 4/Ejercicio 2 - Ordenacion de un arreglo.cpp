#include <iostream>
using namespace std;
int main(){
	int tam = 10;
	int arreglo[tam] = {3, 0, 1, 8, 7, 2, 5, 4, 6, 9};
	//En la linea de arriba se presento una nueva forma de declarar arreglos

	//Comenzamos el ORDENAMIENTO BURBUJA
	//Ordenara el arreglo en forma ascendente
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam-1;j++){
			if(arreglo[j]>arreglo[j+1]){//Significa que esta mal ordenado
				//Intercambiamos los valores
				int aux = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = aux;
			}
		}
	}

	//Imprimimos el arreglo ya ordenado
	for(int i=0;i<tam;i++){
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
}

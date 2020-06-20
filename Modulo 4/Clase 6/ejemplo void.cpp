#include <iostream>
using namespace std;

// Esta funcion no devuelve nada
void imprimir_arreglo(int arreglo[], int tam) {
	for(int i=0;i<tam;i++){
		cout<<arreglo[i]<< " ";
	}
	cout<<endl;
}

int main(){
	int a[7] = {8,5,3,1,2,3,0};
	imprimir_arreglo(a,7);
	int b[10] = {14,7,2,3,10,18,11,1,0,2};
	imprimir_arreglo(b,10);
	return 0;
}

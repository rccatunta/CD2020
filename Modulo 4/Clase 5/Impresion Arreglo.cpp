#include <iostream>
using namespace std;

void imprimir_arreglo(int arreglo[], int tam) {
	for(int i=0;i<tam;i++){
		cout<<arreglo[i]<< " ";
	}
	cout<<endl;
}

int main(){
	int a[7] = {8,5,3,1,2,3,0};
	imprimir_arreglo(a,7);
	return 0;
}
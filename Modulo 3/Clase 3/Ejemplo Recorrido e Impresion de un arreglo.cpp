#include <iostream>
using namespace std;
int main(){
	int N[7]; // Arreglo de tamaño 7
	//Rellenamos el arreglo, esta es una forma no optima de realizar el rellenado, tambien toma en cuenta que puedes utilizar un for para llenarlo.
	N[0] = 4;
	N[1] = 6;
	N[2] = -1;
	N[3] = 0;
	N[4] = 9;
	N[5] = -14;
	N[6] = 10;
	//Recorremos e imprimimos el vector
	for(int i=0;i<7;i++){//El final siempre debe ser el tamaño del arreglo
		cout<<"N["<<i<<"] = "<<N[i]<<endl;
	}
}

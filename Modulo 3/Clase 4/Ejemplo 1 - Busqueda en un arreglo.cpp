#include <iostream>
using namespace std;
int main(){
	int N;
	cin>>N; //Pedimos N
	int arreglo[N];// Creamos un arreglo de tamaño N
	// Llenamos el arreglo con los datos que introduzca el usuario
	for(int i=0;i<N;i++){
		cin>>arreglo[i];
	}
	// Buscamos el número 15 dentro del arrego (La busqueda que se realiza en este codigo se llama busqueda lineal, existen otros tipos de busqueda)
	bool encontrado = false;
	for(int i=0;i<N;i++){
		if(arreglo[i] == 15){
			encontrado = true;
		}
	}
	if(encontrado == true){
		cout<<"El 15 esta en el arreglo"<<endl;
	}
	else{
		cout<<"El 15 no esta en el arreglo"<<endl;
	}
}

#include <iostream>
#include <algorithm> //--> Libreria para ordenar
using namespace std;
int main(){
	int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	sort(arr,arr+N);// Funcion de Ordenamiento
	//Tiene dos parametros
	//El primero es el arreglo
	//El segundo es el arreglo mas el tamaño
	for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
	}
	cout<<endl;
}

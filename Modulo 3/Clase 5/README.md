# Clase 5
## Forma Óptima de Ordenar un arreglo en C++
Para poder ordenar un arreglo en C++ primero debemos añadir la libreria `#include <algorithm>` con esta libreria podremos usar la función de ordenamiento que tiene C++.
```cpp
#include <iostream>
#include <algorithm> // Libreria necesaria para ordenar

using namespace std;

int main(){
	// Creamos el arreglo
	int arr[10] = {3,5,1,0,8,9,2,6,4,7};
	// Imprimimos el arreglo sin ordenar
	cout<<"ARREGLO SIN ORDENAR"<<endl;
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	// Funcion para ordenar el arreglo
	sort(arr,arr+10);
	// Imprimimos el arreglo ordenado
	cout<<"ARREGLO ORDENADO"<<endl;
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
```
# Clase 7
## Repaso de Arreglos
### Llenado de un Arreglo desde el Teclado
Un ejercicio muy comun es el de llenar un arreglo mediante datos ingresados por el usuario desde teclado, para eso hacemos uso de un for y de la instrucción *cin*.
```cpp
int main(){
	// Paso 1 Pedimos el tamaño del arreglo
	int N;
	cin>>N; 
	// Paso 2 Creamos el arreglo de tamaño N
	int arreglo[N];
	// Paso 3 Hacemo un ciclo que llene el arreglo
	for(int i=0;i<N;i++){
		cin>>arreglo[i];// Pedimos cada casilla del arreglo
	}
}
```
### Impresion de un Arreglo
Se realizará la impresión de un arreglo mediante un ciclo for que recorra todos sus índices.
```cpp
int main(){
	int a[7] = {4,8,6,2,3,1,10};
	for(int i=0;i<7;i++){
		cout<<a[i]<<" ";// Se imprime un espacio despues de cada elemento
	}
	cout<<endl;// Este ultimo endl es requerido en los jueces virtuales
}
```
### Recorrido de un Arreglo
Como ya te diste cuenta puedes recorrer un arreglo de cualquier forma que te imagines, siempre y cuando puedas representar ese recorrido con un for. <br>
En el ejemplo se muestra el recorrido e impresion de un arreglo desde su última posición hasta la primera.
```cpp
int main(){
	int a[7] = {4,8,6,2,3,1,10};
	for(int i=7-1;i>=0;i--){
		cout<<a[i]<<" ";// Se imprime un espacio despues de cada elemento
	}
	cout<<endl;// Este ultimo endl es requerido en los jueces virtuales	
}
```
### Ordenar un Arreglo
```cpp
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
}
```
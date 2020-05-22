# Clase 6
## Repaso de Arreglos
### Necesidad y Definición de un arreglo
Los arreglos son necesarios pues nos brindan un nombre común para una gran cantidad de variables, que deseamos que tengan el mismo nombre. <br>
Por ejemplo si quisieramos declarar 5 variables, sin utilizar arreglos hariamos algo asi. <br>
```cpp
int a0, a1, a2, a3, a4;
```
Sin embargo el uso de arreglos hace esto de forma más óptima. 
```cpp
int a[5];
```
Finalmente recuerda que un arreglo es *Una estructura de datos que agrupa un conjunto de variables del mismo tipo por medio de subindices*.
### Asignación de Valores en un Arreglo
Para asignar los valores a un arreglo hacemos uso de los **[]** que nos indicaran a que posición del arreglo queremos acceder. Cada posición del arreglo sirve como una variable y tiene el mismo comportamiento.
```cpp
int main(){
	int a[5];
	a[0] = 6;
	a[1] = -2;
	a[2] = 3;
	a[3] = -1;
	a[4] = 4;
	cout<<a[3]<<endl; // Esto imprimira un -1
	cout<<a[0]+a[4]<<endl; // Esto imprimira un 10
}
```
Excepcionalmente se puede llenar un arreglo de la siguiente forma tambien. 
```cpp
int main(){
	int a[5] = {6,-2,3,-1,4};
	// Este arreglo tiene el mismo contenido que el del ejemplo anterior.
}
```
### Llenado de un Arreglo
En esta sección analizaremos como llenar un arreglo mediante la utilización de un ciclo.
```cpp
int main(){
	// Necesitamos un arreglo de tamaño 10 que contenga 0s
	int a[10];
	for(int i=0;i<10;i++){ // Recorremos los indices
		a[i]=0; // Llenamos cada posicion del arreglo
	}
}
```
```cpp
int main(){
	// Necesitamos un arreglo de tamaño 100 que contenga los numeros del 0 al 99
	int a[100];
	for(int i=0;i<100;i++){ // Recorremos los indices
		a[i]=i; // Llenamos cada posicion del arreglo
	}
}
```
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
	for(int i=7;i>=0;i--){
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
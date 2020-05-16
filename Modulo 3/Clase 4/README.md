# Clase 4
### Ejercicio 1
Lee un número entero y realiza un programa que ponga el número leido en la primera posición del arreglo y en la siguiente posición ponga el doble que en la posición previa. El arreglo debe tener tamaño 5.<br>
**ENTRADA** <br>
La primera linea de entrada contiene un número entero *v* que sera el primer valor que se pondra en el arreglo. <br>
**SALIDA** <br>
Debes imprimir el contenido del arreglo<br>
**EJEMPLO**<br>

Entrada  | Salida
------------- | -------------
5 | 5 <br> 10 <br> 20 <br> 40 <br> 80 <br>
1 | 1 <br> 2 <br> 4 <br> 8 <br> 16 <br>

### Ejemplo 1 - Búsqueda en un Arreglo
El siguiente programa lee un número *N* del usuario, posteriormente realiza el pedido de *N* números enteros diferentes, y los coloca en el arreglo. Finalmente busca el número 15 en el arreglo.
```cpp
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
	if(encontrado){
		cout<<"El 15 esta en el arreglo"<<endl;
	}
	else{
		cout<<"El 15 no esta en el arreglo"<<endl;
	}
}
```
### Ejercicio 2
Leer un número *N* del usuario, luego crea un arreglo de tamaño *N*, pide al usuario *N* números. Luego pidele al usuario un número *x*. Finalmente indica si es que el número *x* esta en el arreglo que creaste junto al usuario.<br>
**ENTRADA** <br>
La primera linea de entrada contiene un número entero *N*, en la segunda linea siguen *N* números enteros que seran el contenido del arreglo. Finalmente en la tercera linea estará lee el número *x* que es el número que debes buscar. <br>
**SALIDA** <br>
Debes imprimir **SI** en caso de que *x* este en el arreglo y **NO** en caso contrario.<br>
**EJEMPLO**<br>

Entrada  | Salida
------------- | -------------
5 <br> 8 5 9 7 -1 <br> 9 | SI
7 <br> 3 7 -9 7 -2 -1 10 <br> 0 | NO

#### Pregunta de Razonamiento
Crees que si en el problema anterior los primeros dos números de entrada fueran *N* y *x* ¿necesitarias utilizar un arreglo?

### Ejemplo 2
En muchas ocasiones es común el problema acerca de ordenar los elementos de un arreglo, esto nos sirve para una infinidad de casos y ejercicios. El siguiente codigo muestra un método de ordenación de varios existentes. <br>
Un ejemplo didáctico acerca de algoritmos de ordenamiento se da en el canal de YouTube [AlgoRythmics](https://www.youtube.com/user/AlgoRythmics/videos). <br>
En particular en el código presentado a continuación, se analizara el metodo de ordenacion **Bubble Sort**, que se puede traducir como [Ordenamiento Burbuja](https://www.youtube.com/watch?v=lyZQPjUT5B4).
```cpp
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
```
#### Pregunta de Razonamiento
¿Qué parte del codigo cambiarias si es que quieres ordenar el arreglo en forma descendente?
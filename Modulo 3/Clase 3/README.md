## Arreglos
### Definición
Los **arreglos** son una colección de variables del mismo tipo, accesibles a través de un índice. Llamaremos **casilla** a cualquiera de las variables individuales que componen un arreglo.
Un arreglo se puede ver como <br>
<img src="img/array1.png" width="300">
>El **arreglo** de la imagen se llama **a** y agrupa a **8** variables(casillas), que comienzan a numerarse del 0 al 7

### Declaración
<img src="img/array2.png" width="300">

```cpp
#include <iostream>
using namespace std;
int main(){
	int enteros[10]; //Declara un arreglo de tamaño 10 de tipo entero
	float numeros[4]; //Declara un arreglo de tamaño 4 de tipo flotante
	int tam;
	cin>>tam;
	int datos[tam]; //Declarara un arreglo de tamaño tam de tipo entero
}
```

### Como Usar Arreglos
```cpp
#include <iostream>
using namespace std;
int main(){
	int enteros[10]; //Declara un arreglo de tamaño 10 de tipo entero
	// Al inicio los arreglos comienzan sin valores en sus casillas
	//Para acceder a una casilla hacemos
	enteros[0] = 8; // Ahora la casilla 0 del arreglo tendra el valor de 8
	enteros[1] = -7; // Ahora la casilla 1 del arreglo tendra el valor de -7
	cout<<enteros[0]<<endl; 
}
```

### Ejemplo de Clase 1 - Impresión y Recorrido de un Arreglo
El siguiente programa realiza el recorrido e impresión de un arreglo de tamaño 7
```cpp
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
```

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
### Ejemplo de Clase 2 - Búsqueda en un Arreglo
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
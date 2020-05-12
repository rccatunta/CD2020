# Clase 2 
## Estructuras de Datos 
### ¿Qué es una estructura de datos?
- Es una forma de organizar un conjunto de datos.
- Una estructura de datos nos facilita la manipulación de datos.
- Cada estructura tiene sus propias ventajas y desventajas
- Elegir una estructura adecuadamente puede ser un parte crucial de la resolucion de un problema.

### Clasificación de las Estructuras de Datos
#### Estructuras de Datos Estáticas
+ Se caracterizan por no poder cambiar su tamaño a lo largo del programa.
+ El tamaño se define una vez y este no puede cambiar.
+ Los ejemplos mas usuales son:
    + Arreglos
    + Matrices

#### Estructuras de Datos Dinámicas
+ Se caracterizan por poder cambiar su tamaño a lo largo del programa.
+ Son comunmente implementadas mediante librerias STL.
+ Los ejemplos mas usuales son:
    + Vectores
    + Mapas
    + Conjuntos
    + Colas
    + Pilas
__________
## Arreglos
### Definición
Los **arreglos** son una colección de variables del mismo tipo, accesibles a través de un índice. Llamaremos **casilla** a cualquiera de las variables individuales que componen un arreglo.
Un arreglo se puede ver como <br>
<img src="https://ibb.co/8jc6dpG" width="300">
>El **arreglo** de la imagen se llama **a** y agrupa a **8** variables(casillas), que comienzan a numerarse del 0 al 7

### Declaración
<img src="https://ibb.co/ZXwnPWd" width="300">

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

### Ejemplo Práctico
El profesor Angel ha decidido medir las estaturas de sus estudiantes, el tiene *N* estudiantes en su curso. Al profesor Angel le gusta mucho la estadística y quiere saber cuantos de sus estudiantes tienen alturas por encima del promedio de todos los estudiantes. <br>
**ENTRADA** <br>
La primera linea de entrada contiene *N*  que representa el número de estudiantes que tiene el profesor Angel. Le siguen *N* numeros reales positivos que representan las estatutars de los estudiantes en metros. <br>
**SALIDA** <br>
Debes imprimir un número entero que representa la cantidad de alumnos que tienen estaturas por encima del promedio.<br>
**EJEMPLO**<br>

Entrada  | Salida
------------- | -------------
5 <br> 1.74 1.84 1.69 1.70 1.54  | 2
7 <br> 1.65 1.74 1.89 1.91 1.57 1.80 1.68  | 3

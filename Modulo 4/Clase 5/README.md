# Clase 5
## Ejercicios con Funciones
### Ejemplo 1
Realizar una funcion que dados dos números enteros indique la suma de ambos.
```cpp
#include <iostream>

using namespace std;

int suma(int a, int b){
	int s=a+b;
	return s;
}

int main(){
	int x,y;
	cin>>x>>y;
	cout<<suma(x,y)<<endl;
}
```
### Ejercicio 1
En base al ejemplo 1 realiza, 3 funciones mas, que realicen la resta, la multiplicación y la división.
```cpp
int resta(int a,int b)
int multiplicacion(int a, int b)
int division(int a, int b)
```
### Ejemplo 2
Realizar una función que dada una edad indique si esa persona es o no mayor de edad.
```cpp
#include <iostream>

using namespace std;

bool mayor_edad(int edad){
	if(edad>=18){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int edad;
	cout<<"Ingrese su edad"<<endl;
	cin>>edad;
	if(mayor_edad(edad)){
		cout<<"Usted es mayor de edad"<<endl;
	}
	else{
		cout<<"Usted no es mayor de edad"<<endl;
	}
}
```
### Ejercicio 2
Realizar una funcion con la siguiente cabecera, que pueda obtener el resultado de elevar el primer número al segundo.
```cpp
int potencia(int a, int b)
```
### Ejemplo 3
Un buen ejemplo de las funciones se da cuando queremos imprimir un arreglo, sabemos que esta tarea es repetitiva, asi que podemos simplificarla con una funcion.

En esta ocasión tambien veremos un nuevo tipo de funciones, las funciones sin retorno, estos son tambien llamados métodos. Para realizar una función sin retorno se debe incluir a **void** como tipo de retorno, void es sinónimo de vacío.
```cpp
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
```
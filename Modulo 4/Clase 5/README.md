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

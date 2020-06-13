# Clase 4 - Funciones
## ¿Qué es una función?
Un programa que resuelve un ejercicio o problema sencillo es muy corto, sin embargo, mientras mas complejos y tediosos se vuelven los ejercicos o problemas nuestros programas se vuelven cada vez más y más complejos.

Es por eso que los creadores de lenguajes de programación crearon las **funciones**, y con esto se inicio un nuevo **paradigma**(modelo) de programación.

>Este nuevo paradigma de programación consiste en dividir un problema complejo en pequeños subproblemas para simplificarlo.

Ahora que ya entendemos para que sirven las funciones podemos entender que son:
>Una función es un segmento de código separado del bloque principal, que puede ser invocado en cualquier momento desde este o desde otro módulo.

En otras ramas de la ciencia (matemática, física, química, sistemas industriales, electrónica, etc.) tambien existen funciones. Las funciones en otras ciencias, son en esencia, parecidas a las que se manejan en programación. Todas estas funciones pueden simplificarse en el siguiente diagrama:

<img src="funcion.jpg" width="400">

El diagrama anterior muestra 3 claros componentes
- Entrada
- Función
- Salida
En base a estos componentes crearemos nuestras propias funciones.

## Funciones de Librerías
En clases pasadas, hemos usado algunas funciones sin saber lo que en realidad realizaban por detras. En esta clase descubriremos 5 funciones nuevas que nos ayudaran a comprender como trabajan las funciones.
### Función min(x,y)
Esta funcion nos devolvera el **mínimo** entre dos números **x** y **y**
```cpp
int main(){
	int x,y;
	cin>>x>>y;
	cout<<"El menor es "<<min(x,y)<<endl;
}
```
### Función max(x,y)
Esta funcion nos devolvera el **máximo** entre dos números **x** y **y**
```cpp
int main(){
	int x,y;
	cin>>x>>y;
	cout<<"El mayor es "<<max(x,y)<<endl;
}
```
### Funcion sqrt(x) - Raíz Cuadrada
Esta función nos devlverá la **raíz cuadrada del número x**. Esta función en particular necesita la libreria *cmath*.
```cpp
#include <iostream>
#include <cmath>

using namespace std;
int main(){
	double x;
	cin>>x;
	cout<<"La raiz cuadrada es "<<sqrt(x)<<endl;
}
```
### Funcion abs(x) - Valor Absoluto
Esta función nos devolverá **el valor absoluto del número x**, x debe ser entero. Esta función en particular necesita la libreria *cmath*.
```cpp
#include <iostream>
#include <cmath>

using namespace std;
int main(){
	double x;
	cin>>x;
	cout<<"El valor absoluto
	es "<<abs(x)<<endl;
}
```
### Funcion pow(a,b) - Potenciación
Esta función nos devolverá el resultado de **elevar *a* a *b***. Esta función particular necesita la libreria *cmath*.
```cpp
#include <iostream>
#include <cmath>

using namespace std;
int main(){
	double a,b;
	cin>>a>>b;
	cout<<a<<" elevado a "<<b<<" es "<<pow(a,b)<<endl;
}
```
## Creando nuestras propias funciones
### Creación de Funciones
<img src="funcion2.png" width="500">

### Invocación de Funciones
<img src="funcion3.png" width="500">
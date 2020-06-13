# Clase 3 - Repaso de Strings
## Accediendo a las posiciones de un string
```cpp
int main(){
	string palabra;
	cin>>palabra;
	// Recorremos el string
	// Los strings se recorren como un arreglo
	for(int i=0;i<palabra.size();i++){
		cout<<"Letra "<<i<<" es "<<palabra[i]<<endl;
	}
}
```
## Trabajando con código ASCII
El código ASCII no sólo nos ayuda a escribir caracteres que no se encuentran en nuestro teclado. Seguramente alguna vez has escrito ``Alt + 64`` y de esa forma has podido escribir ``@``. El código ASCII es mas extenso. Una tabla completa se puede ver en [Tabla de Código ASCII](https://elcodigoascii.com.ar/). <br>
Ahora veremos un ejemplo del uso de Código ASCII.
### Ejemplo 1
Se desea convertir una palabra que esta completamente en MAYÚSCULAS a minúsculas.
```cpp
int main(){
	string palabra;
	cin>>palabra;
	// Recorrer la palabra
	for(int i=0;i<palabra.size();i++){
		// Obtener el código ASCII de cada letra
		int ascii = int(palabra[i]);
		int minuscula = ascii+32;
		char letra_minuscula = char(minuscula);
		palabra[i] = letra_minuscula;
	}
	cout<<palabra<<endl;
}
```
### Ejercicio 1 (Para el Estudiante)
Se desea convertir una palabra que esta completamente en minúsculas a MAYÚSCULAS.
## Funciones útiles
Como habrás notado en los ejercicios anteriores muchas veces puede ser complicado hacer la conversión entre MAYÚSCULAS y minúsculas. Para esto se ha creado una libreria que nos facilita esta tarea.
### tolower - Conversión a minúsculas
```cpp
#include <iostream>
#include <ctype.h> // Libreria necesaria para usar tolower
using namespace std;
int main(){
	// Este ejercicio convertira el contenido de una palabra a minusculas
	string palabra;
	cin>>palabra;
	// Recorremos la palabra
	for(int i=0;i<palabra.size();i++){
		palabra[i] = tolower(palabra[i]);// tolower solo funciona con letras
	}
	cout<<palabra<<endl;
}
```
### toupper - Conversión a MAYÚSCULAS
```cpp
#include <iostream>
#include <ctype.h> // Libreria necesaria para usar toupper
using namespace std;
int main(){
	// Este ejercicio convertira el contenido de una palabra a MAYÚSCULAS
	string palabra;
	cin>>palabra;
	// Recorremos la palabra
	for(int i=0;i<palabra.size();i++){
		palabra[i] = toupper(palabra[i]);// toupper solo funciona con letras
	}
	cout<<palabra<<endl;
}
```
## Uso de ASCII para validaciones
En el siguiente ejemplo se muestra la solución al problema [PASSWORD SEGURO](https://jv.umsa.bo/problem.php?id=1965).
```cpp
int main(){
	string contra;
	cin>>contra; // Pedimos la contraseña
	bool segura = false;
	// Vemos por la primera letra
	// Obtenemos el ASCII de la primera letra
	int primera = int(contra[0]);
	if(primera>=48 and primera<=57){// Mediante el ASCII podemos ver si es un numero
		// Ahora analizamos la ultima letra 
		// Obtenemos el ASCII de la ultima letra
		int ultima = int(contra[contra.size()-1]);
		if(ultima>=48 and ultima<=57){
			segura = true;
		}

	}
	if(segura){
		cout<<"SI"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}

}
```
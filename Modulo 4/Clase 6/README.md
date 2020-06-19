# Clase 6
### Ejercicio 1
Realizar una funcion con la siguiente cabecera, que pueda obtener el resultado de elevar el primer número al segundo.
```cpp
int potencia(int a, int b)
```
## Funciones Void
>Las funciones void son funciones que no devuelven nada, es decir su tipo de retorno es *vacio*.

Las funciones void son utilizadas cuando ya no se quiere reescribir una tarea repetitiva, como por ejemplo imprimir un arreglo o una matriz, sabemos que siempre son los mismos fors y solo cambian los límites, entonces podemos encerrarlos en una función y de ese modo no volver a escribir los mismos fors para la impresión.

Como se dijo anteriormente, un buen ejemplo de las funciones void se da cuando queremos imprimir un arreglo, sabemos que esta tarea es repetitiva, asi que podemos simplificarla con una funcion, como se muestra en el código a continuación.


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

### Ejercicio 2
Realice una función que sea capaz de dados la edad y el nombre de una persona lo salude de forma adecuada. Si la edad es mayor o igual a 18 saludar "Buena Tarde Juan", si es menor a 18 saludar "Hola Juan".

Para ayuadarte puedes usar la siguiente cabecera para iniciar tu función. 

``` cpp
void saludo(string nombre, int edad)
```

## Variables Globales
Ahora que ya sabes usar funciones debes tomar en cuenta que las variables viven en el lugar donde han sido declaradas y solo pueden ser *accesadas* desde el lugar donde fueron declarados un ejemplo se muestra en el siguiente código:

```cpp
#include <iostream>

using namespace std;

float pi = 3.141592; // Esta es una variable global existe en todo el programa y puede ser accesado desde cualquier función.

int suma10(int x) {
    cout<< a << endl; // Esta linea tendra error ya que la variable a no existe en este contexto. 
    cout<<"pi en la funcion "<< pi << endl;
    return x + 10;
}

int main() {
    int a = 10;

    for(int i=0; i<10; i++) {
        cout<<a<<endl;
    }
    cout<< i << endl; // Esta linea tendra error ya que la variable i no existe en este contexto

    cout<< x << endl; // Esta linea tendra erro ya que la variable x no existe en este contexto

    cout<<"pi en main "<< pi << endl; 
}
```
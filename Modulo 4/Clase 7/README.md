# Clase 7
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

## Paso de Parámetros por Referencia
Hasta ahora hemos pasado parámetros por **valor**, esto quiere decir que cuando enviamos un parámetro **solamente enviamos su valor**. Sin embargo existen circunstancias en las que necesitamos enviar toda la variable, es decir que los cambios que hagamos en la variable dentro de la función tambien ocurriran en la variable que mandamos, cuando mandamos parámetros de este modo lo llamamos **paso de parámetros por referencia**.

A continuación se muestra un ejemplo de como esto es necesario, la función a continuación intercambia el valor entre dos variables.

### Ejemplo 1
```cpp
#include <iostream>
using namespace std;

// Para mandar parámetros por referencia debemos colocar un &a al lado de la variable

void cambio(int &a,int &b) {
    int aux = a;
    a = b;
    b = aux;
}

int main() {
    int a=8;
    int b=17;
    cout<<"Valores al inicio" << endl;
    cout<<"a=" << a << endl;
    cout<<"b=" << b << endl;
    cambio(a,b);
    cout<<"Valores despues del cambio" << endl;
    cout<<"a=" << a << endl;
    cout<<"b=" << b << endl;
    return 0;
}
```
### Ejercicio 1
En el siguiente ejercicio debes realizar una función que realice el aumento de un minuto en una hora.

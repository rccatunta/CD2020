//ENTRADA
//Conjunto de N notas de estudiantes entre 0 y 100
//SALIDA
//Imprimir el promedio de esas N notas
#include <iostream>
using namespace std;
int main()
{
    int N;//Creando la variable N de tipo entero
    float nota;//Creando la variable nota de tipo flotante
    float acum_notas=0;//Creando la variable acum_notas de tipo flotante
    //Iniciada en 0, acum_notas guardara la suma de todas las notas
    float promedio;//promedio guarda el promedio de notas
    cin>>N;//Pidiendo N
    //Pidiendo las N notas
    for(int i=0;i<N;i++){//Ciclo que hace N repeticiones
        cin>>nota;//Pidiendo la nota
        acum_notas=acum_notas+nota;//Proceso de acumulacion
    }
    promedio=acum_notas/N;
    cout<<promedio<<endl;
    return 0;
}


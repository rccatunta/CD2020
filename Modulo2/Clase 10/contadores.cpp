//CONTADORES
//Nos sirven para contar ciertas carateristicas de
//un conjunto de datos
//EJERCICIO
//Este codigo contara cuantos estudiantes aprobaron
//de una lista de N notas
#include <iostream>
using namespace std;
int main(){
    int N;//Definiendo el tamaño de la lista de datos
    int nota_estudiante;//Declarar la variable nota_estudiante
    int nro_aprobados=0;//Creando un contador
    //Los contadores siempre empiezan en 0
    cin>>N;//Pidiendo N
    for(int i=0;i<N;i++){ //0, 1, 2, 3, ..., N-1 realiza N ciclos
        cin>>nota_estudiante;//Pidiendo la nota
        if(nota_estudiante > 50){//Preguntar si la nota es de aprobacion
            //Si la nota es de aprobacion
            nro_aprobados++;//Incrementar el contador
        }
    }
    cout<<"Aprobaron "<<nro_aprobados<<" estudiante(s)"<<endl;

}

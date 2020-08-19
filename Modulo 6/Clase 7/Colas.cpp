#include <iostream>
#include <queue>// Libreria para usar colas
using namespace std;

int main(){
    queue<int>q; // Declaración/Creación
    // push nos ayuda a insertar un elemento en la cola
    q.push(5);
    q.push(2);
    q.push(-1);
    q.push(3);
    // pop nos ayuda a borrar el primer elemento de la cola
    q.pop();
    // front obtiene el primer elemento de la cola
    int frente = q.front();
    cout<<frente<<endl; // Imprime 2
    // back obtiene el último elemento de la cola
    int ultimo = q.back();
    cout<<ultimo<<endl;// Imprime 3
    // size
    cout<<q.size()<<endl; // Imprimira 3 por que es el tamaño de la cola

    cout<<"********"<<endl;
    //Proceso para sacar todos los elementos de la cola
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}

#include <iostream>
#include <stack>// Libreria para usar pilas
using namespace std;

int main(){
    stack<int>p; // Declaración/Creación
    // push nos ayuda a insertar un elemento en la pila
    p.push(5);
    p.push(2);
    p.push(-1);
    p.push(3);
    // pop nos ayuda a borrar el elemento en la cima de la pila
    p.pop();
    // front obtiene el primer elemento de la cola
    int cima = p.top();
    cout<<cima<<endl; // Imprime -1

    // size
    cout<<p.size()<<endl; // Imprimira 3 por que es el tamaño de la pila

    cout<<"********"<<endl;
    //Proceso para sacar todos los elementos de la pila
    while(!p.empty()){
        cout<<p.top()<<endl;
        p.pop();
    }
    return 0;
}

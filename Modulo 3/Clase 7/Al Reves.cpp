#include <iostream>
using namespace std;
int main(){
    int N;// Creando la variable N
    cin>>N;// Pidiendo la variable N
    int a[N];// Creando el arreglo
    for(int i=0;i<N;i++){
        cin>>a[i]; // Pedir los elementos del arreglo
    }
    //Imprimir al reves
    for(int i=N-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}

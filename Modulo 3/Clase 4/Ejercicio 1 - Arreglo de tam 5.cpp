#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int num;
    cin>>num; // Pidiendo el numero
    arr[0]=num; // Poniendo el numero en la primera posicion
    //Llenar el resto del arreglo
    for(int i=1;i<5;i++){
        arr[i]=arr[i-1]*2;// Pone el doble del valor anterior.
    }
    //Imprimir el arreglo
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}

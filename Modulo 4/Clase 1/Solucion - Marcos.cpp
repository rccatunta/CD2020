#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N; // Pedimos N, esta N puede ser un numero entero
    int cuadro[N][N]; // Creamos la matriz de 2 dimensiones
    //Llenar la matriz de 1s
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cuadro[i][j]=1;
        }
    }
    //Llenar una parte de la matriz con 0s
    for(int i=1;i<=N-2;i++){
        for(int j=1;j<=N-2;j++){
            cuadro[i][j]=0;
        }
    }
    // Imprimir
    for(int i=0;i<N;i++){ // Imprime las filas
        for(int j=0;j<N;j++){// Imprime las columnas
            cout<<cuadro[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

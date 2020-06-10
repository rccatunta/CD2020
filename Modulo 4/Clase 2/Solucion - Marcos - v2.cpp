#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int cuadro[N][N]; // Creando una matriz de N filas y N columnas
    // Llenar 0s
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cuadro[i][j]=0;
        }
    }
    // Llenar la Fila 0 de 1s
    for(int i=0;i<N;i++){
        cuadro[0][i]=1;
    }
    // Llenar la Ultima Fila de 1s
    for(int i=0;i<N;i++){
        cuadro[N-1][i]=1;
    }
    // Llenar la Columna 0 de 1s
    for(int i=0;i<N;i++){
        cuadro[i][0]=1;
    }
    // Llenar la Ultima Columna de 1s
    for(int i=0;i<N;i++){
        cuadro[i][N-1]=1;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<cuadro[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int matriz[3][4];// Creacion de la matriz 3x4
    for(int i=0;i<3;i++){// Filas
        for(int j=0;j<4;j++){// Columnas
            matriz[i][j]=j;
        }
    }
    //Impresion de una matriz
    for(int i=0;i<3;i++){// Filas
        for(int j=0;j<4;j++){// Columnas
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

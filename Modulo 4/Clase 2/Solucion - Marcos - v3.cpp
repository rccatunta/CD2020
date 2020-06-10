#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int cuadro[N][N]; // Creando una matriz de N filas y N columnas
    // Llenar 0s
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==0 or i==N-1 or j==0 or j==N-1){
                cuadro[i][j]=1;
            }
            else{
                cuadro[i][j]=0;
            }
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<cuadro[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

#include <bits/stdc++.h> // Libreria que coloca todas las librerias
using namespace std;
int nodos,arcos;
int matriz_adj[1000][1000]; // Ponemos un valor GRANDE por defecto

int main(){
    int a,b;
    cin>>nodos>>arcos;
    // Creamos la matriz
    memset(matriz_adj,0,sizeof matriz_adj);
    for(int i=0;i<arcos;i++){
        cin>>a>>b;
        //Creando la conexion
        matriz_adj[a][b]=1;
        matriz_adj[b][a]=1;
    }
    for(int i=0;i<nodos;i++){
        for(int j=0;j<nodos;j++){
            cout<<matriz_adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

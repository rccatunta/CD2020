#include <bits/stdc++.h> // Libreria que pone todas las librerias

using namespace std;

int nodos,arcos;
vector< vector<int> > G;

int main(){
    int a,b;
    cin>>nodos>>arcos;
    G.assign(nodos,vector<int>());
    for(int i=0;i<arcos;i++){
        cin>>a>>b;
        //Creando la conexion
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for(int i=0;i<G.size();i++){
        cout<<"El nodo "<<i<<" esta conectado con los nodos ";
        for(int j=0;j<G[i].size();j++){
            cout<<G[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

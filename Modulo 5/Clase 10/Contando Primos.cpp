#include <bits/stdc++.h> // Esta libreria importa todas las librerias
using namespace std;

// Creamos la criba
const int N=10000010;
bool criba[N];

int main(){
    // 0 -> NO ES PRIMO
    // 1 -> ES PRIMO
    memset(criba,1,sizeof criba); // Llena el arreglo criba de 1
    criba[0]=0;
    criba[1]=0;
    for(int i=2;i*i<=N;i++){
        if(criba[i]==1){// Significa que no esta tachado
            for(int j=i*i;j<N;j=j+i){ // Recorremos todos los multiplos de i menores a N
                criba[j]=0; // Tachamos los que no son primos
            }
        }
    }
    int cp;
    cin>>cp;
    while(cp--){ // Hace cp vueltas
        int a,b;
        int cont=0;
        cin>>a>>b;
        for(int i=a;i<=b;i++){ // Vemos el rango
            if(criba[i]==1){
                cont=cont+1;
            }
        }
        cout<<cont<<endl;
    }
    return 0;
}


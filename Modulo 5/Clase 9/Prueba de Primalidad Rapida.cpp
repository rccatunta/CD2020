#include <iostream>

using namespace std;

bool es_primo(int n){
    if(n<=1){ // Si me dan 1 o 0 o un negativo devuelvo FALSO
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){ // Esto significa que i es divisor de n
            return false;
        }
    }
    // Si llega a esta linea significa que no ha encontrado
    // al tercer divisor
    return true;
}

int main(){
    int n;
    cin>>n;
    if(es_primo(n)){
        cout<<n<<" es primo"<<endl;
    }
    else{
        cout<<n<<" no es primo"<<endl;
    }
    return 0;
}

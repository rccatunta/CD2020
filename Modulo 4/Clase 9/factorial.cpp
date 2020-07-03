#include <iostream>
using namespace std;

int factorial(int n){
    cout<<"Preguntando por el factorial de "<<n<<endl;
    if(n==0){
        cout<<"El factorial de 0 es 1"<<endl;
        return 1;
    }
    else{
        cout<<"No se el factorial de "<<n<<" preguntando por el factorial de "<<n-1<<endl;
        int res=n*factorial(n-1);
        cout<<"Ya me respondio factorial de "<<n-1<<" ahora se que el factorial de "<<n<<" es "<<res<<endl;
        return res;
    }
}

int main(){
    cout<<factorial(7)<<endl;
    return 0;
}

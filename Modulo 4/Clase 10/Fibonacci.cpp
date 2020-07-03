#include <iostream>

using namespace std;

//Fibonacci Recursivo
long long fibo(long long n){
    if(n==1LL or n==2LL){ // Casos Base
        return 1LL;
    }
    return fibo(n-1LL)+fibo(n-2LL);
}

int main(){
    cout<<fibo(100LL)<<endl;
    return 0;
}

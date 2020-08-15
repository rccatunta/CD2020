#include <iostream>

using namespace std;

long long factorial(long long n){
    long long fact=1;
    for(long long i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    for(long long i=0;i<=20;i++){
        cout<<"Factorial de "<<i<<" es igual a "<<factorial(i)<<endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main(){
    long long factorial[21];
    factorial[0]=1;
    for(int i=1;i<=20;i++){
        factorial[i]=i*factorial[i-1];
    }
    for(int i=0;i<21;i++){
        cout<<"Factorial de "<<i<<" es "<<factorial[i]<<endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int potencia_10(int n){
    int c=1;
    while(n>0){
        c*=10;
        n=n/10;
    }
    c/=10;
    return c;
}

int invertir(int num){
    if(num==0){ // Caso base
        return 0;
    }
    int dig=num%10;
    return dig*potencia_10(num)+invertir(num/10); // Funcion recursiva
}
int main(){
    int x;
    cin>>x;
    cout<<invertir(4321)<<endl;
    return 0;
}

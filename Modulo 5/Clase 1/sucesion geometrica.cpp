#include <iostream>

using namespace std;

int main(){
    long long a=2;// Primer termino
    int n;// n representa cuantos terminos quiero obtener
    cin>>n;
    // Generando la sucesion
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        a=a*2LL;
    }
    return 0;
}

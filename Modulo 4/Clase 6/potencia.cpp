#include <iostream>

using namespace std;

int potencia(int a, int b){
    int pot=1;
    for(int i=0;i<b;i++){ // haces una repeticion de b ciclos
        pot=pot*a;
    }
    return pot;
}

int main() {
    int a,b;
    cin>>a>>b;
    cout<<potencia(a,b)<<endl;
    return 0;
}

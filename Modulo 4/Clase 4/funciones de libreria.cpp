#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y;
    int menor=min(x,y);
    int mayor=max(x,y);
    cout<<"El menor es "<<menor<<endl;// min, obtiene el menor de dos valores
    cout<<"El mayor es "<<mayor<<endl;// max, obtiene el mayor de dos valores
    double a,b;
    cin>>a;
    cout<<"La raiz es "<<sqrt(a)<<endl;// sqrt saca la raiz cuadrada
    cout<<"El valor absoluto "<<abs(a)<<endl;// abs saca el valor absoluto
    cin>>a>>b;
    cout<<a<<" elevado a "<<b<<" es "<<pow(a,b)<<endl; // pow exponencia a a b
    return 0;
}

#include <iostream>

using namespace std;

int main(){
    int k;
    long long n,t=8,aumento,aux1=1,aux2=-1;
    // n es el numero que me da el estudiante
    // k en la que cree que esta el numero n en la serie
    cin>>n>>k;
    // Calculamos el termino que esta en la posicion k
    for(int pos=1;pos<=k;pos++){
        aumento=aux1+aux2;
        t=t+aumento;
        //cout<<t<<endl;
        aux2=aux1;
        aux1=aumento;
    }
    if(t==n){
        cout<<"AC"<<endl;
    }
    else{
        cout<<"WA"<<endl;
    }
    return 0;
}

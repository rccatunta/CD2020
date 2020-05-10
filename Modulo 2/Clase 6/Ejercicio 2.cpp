//Este programa sacara el menor de 4 numeros
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,menor;
    cin>>a>>b>>c>>d;
    menor = a;
    if(b<menor){
        menor=b;
    }
    if(c<menor){
        menor=c;
    }
    if(d<menor){
        menor=d;
    }
    cout<<menor<<endl;
    return 0;
}

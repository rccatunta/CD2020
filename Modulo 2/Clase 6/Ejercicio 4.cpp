//Programa que nos indica si un numero a divide a b
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    //Modulo
    if(b%a==0){//Pregunta si a divide a b; Pregunta si b es multiplo de
        cout<<"SI"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

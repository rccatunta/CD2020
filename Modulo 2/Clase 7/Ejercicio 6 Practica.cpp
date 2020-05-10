//Comparacion con strings
#include <iostream>
using namespace std;
int main(){
    int peso;
    cin>>peso;//Pidiendo el peso
    if(peso%2 == 1){//Preguntando si el peso es impar
        cout<<"NO"<<endl;
    }
    else{
        //Es par
        if(peso == 2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"SI"<<endl;
        }
    }
    return 0;
}

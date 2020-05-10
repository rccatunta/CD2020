#include <iostream>
using namespace std;
int main(){
    /*int contador=0;
    while(contador<=10){//mientras se cumpla la condicion
        cout<<contador<<endl;
        contador++;
    }*/
    int num;
    cin>>num;
    while(num>0){
        cout<<num%10<<" ";
        num = num/10;
    }
    return 0;
}

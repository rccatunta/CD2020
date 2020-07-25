#include <iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    // Caso especial cuando num es 0
    if(num==0){
        cout<<0<<endl;
    }
    // Algoritmo
    while(num>0){
        cout<<num%2;
        num=num/2;
    }
    cout<<endl;
    return 0;
}

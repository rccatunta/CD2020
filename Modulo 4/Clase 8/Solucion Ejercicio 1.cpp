#include <iostream>

using namespace std;

int minimo(int num1, int num2){
    int menor;
    if(num1<=num2){
        menor=num1;
    }
    else{
        menor=num2;
    }
    return menor;
}

int main(){
    cout<<minimo(6,5)<<endl;
    return 0;
}

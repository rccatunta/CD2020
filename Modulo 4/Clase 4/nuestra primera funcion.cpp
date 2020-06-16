#include <iostream>
using namespace std;

int numero_magico=7; // VARIABLE GLOBAL

int suma1(int k){
    int n=k;
    n=n+1;
    cout<<numero_magico<<endl;
    return n;
}

int main(){
    int num;
    cin>>num;
    cout<<suma1(num)<<endl;
    cout<<numero_magico<<endl;
    return 0;
}

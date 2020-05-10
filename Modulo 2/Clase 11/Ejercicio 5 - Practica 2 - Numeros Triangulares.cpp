#include <iostream>
using namespace std;
int main(){
    int num;
    int acum=0;
    cin>>num;//Pidiendo el num
    for(int i=1;i<=num;i++){//1, 2, 3, ..., num
       acum=acum+i;//Suma el valor de i a acum
    }
    cout<<acum<<endl;//Imprimiendo el resultado
    return 0;
}

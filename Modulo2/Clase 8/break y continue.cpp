#include <iostream>
using namespace std;
int main(){
    //break rompe un ciclo
    for(int i=1;i<=10;i++){
        cout<<i<<endl;
        if(i==7){
            break;
        }
    }
    cout<<"Acabo el ciclo"<<endl;
    //continue se salta la iteracion (ignora una iteracion)
    for(int i=1;i<=10;i++){
        if(i==7 or i==9){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}

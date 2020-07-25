#include <iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    int flag=0;
    for(int i=30;i>=0;i--){
        // Imprimir el estado de cada bit
        if(num&(1<<i)){
            flag=1;
            if(flag==1){
                cout<<1;
            }
        }
        else{
            if(flag==1){
                cout<<0;
            }
        }
    }
    cout<<endl;
    return 0;
}

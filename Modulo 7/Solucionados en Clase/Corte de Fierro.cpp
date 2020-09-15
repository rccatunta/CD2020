#include <iostream>

using namespace std;

int main(){
    int n,p;
    while(cin>>n>>p){
        int suma=0;
        for(int i=1;i<=p;i++){
            suma=suma+i;
        }
        if(n>=suma){
            cout<<"posible"<<endl;
        }
        else{
            cout<<"imposible"<<endl;
        }
    }
    return 0;
}

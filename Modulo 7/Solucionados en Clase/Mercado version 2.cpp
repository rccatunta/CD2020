#include <iostream>
using namespace std;
int main(){
    int k,T;
    while(cin>>k>>T){
        int div=T/k;
        div=div+1;
        int cont=0;
        while(div>1){
            cont++;
            div=div/2;
        }
        cout<<cont<<endl;
    }
    return 0;
}

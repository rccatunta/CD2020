#include <iostream>
using namespace std;

int main(){
    int N,cant_unos_total=0;
    cin>>N;
    int monedas[N];
    //Pidiendo los datos de las monedas
    for(int i=0;i<N;i++){
        cin>>monedas[i];
        if(monedas[i]==1){
            cant_unos_total++;
        }
    }
    int gan=0;
    int max_gan=-1;
    for(int i=0;i<N;i++){
        if(monedas[i]==1){
            gan--;
        }
        if(monedas[i]==0){
            gan++;
        }
        if(gan<0){
            gan=0;
        }
        max_gan=max(max_gan,gan);
    }
    if(cant_unos_total==N){
        cout<<N-1<<endl;
    }
    else{
        cout<<max_gan+cant_unos_total<<endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main(){
    int k,q,p;
    while(cin>>k>>q>>p){
        bool respuesta=0;
        for(int i=1;i*k<p;i++){
            if((p-k*i)%q==0){
                respuesta=1;
                break;
            }
        }
        if(respuesta){
            cout<<"SI"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

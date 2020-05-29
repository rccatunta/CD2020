#include <iostream>
using namespace std;
int main(){
    int N;
    int buscado;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    cin>>buscado;
    bool encontrado=false;
    for(int i=0;i<N;i++){
        if(buscado==a[i]){
            encontrado=true;
            break;
        }
    }
    if(encontrado==true){
        cout<<"SI"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

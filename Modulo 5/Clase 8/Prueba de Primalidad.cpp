#include <iostream>

using namespace std;

bool es_primo(int n){
    int cd=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            int complemento = n/i;
            if(i!=complemento){
                cd=cd+2;
            }
            else{
                cd=cd+1;
            }
        }
    }
    if(cd==2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    if(es_primo(n)){
        cout<<n<<" ES PRIMO"<<endl;
    }
    else{
        cout<<n<<" NO ES PRIMO"<<endl;1
    }
    //cout<<"El numero "<<n<<" tiene "<<cd<<" divisores"<<endl;
    return 0;
}


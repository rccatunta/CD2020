#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int cd=0;
    for(int i=1;i*i<=n;i++){
        if(n%i == 0){
            int complemento = n/i;
            if(i!=complemento){
                cd=cd+2;
            }
            else{
                cd=cd+1;
            }
        }
    }
    cout<<cd<<endl;
    //cout<<"El numero "<<n<<" tiene "<<cd<<" divisores"<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int cd=0;
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            cd=cd+1;
        }
    }
    cout<<"El numero "<<n<<" tiene "<<cd<<" divisores"<<endl;
    return 0;
}

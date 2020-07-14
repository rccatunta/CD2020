#include <iostream>

using namespace std;

int main(){
    int n,cp;
    int m;
    cin>>cp;
    for(int i=0;i<cp;i++){
        cin>>n>>m;
        int a=-1,b=1,f;
        for(int j=0;j<=n;j++){
            f=((a%m)+(b%m))%m;
            a=b%m;
            b=f%m;
        }
        f=f%m;
        cout<<f<<endl;
    }
    return 0;
}

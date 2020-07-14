#include <iostream>

using namespace std;

int main(){
    long long fibo;
    long long a=1,b=0;
    int n; // numero de terminos
    cin>>n;
    for(int i=1;i<=n;i++){
        fibo=a+b;
        cout<<fibo<<" ";
        a=b;
        b=fibo;
    }
    return 0;
}

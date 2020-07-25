#include <iostream>
#include <algorithm> // Libreria necesaria para usar __gcd
using namespace std;

int mcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return mcd(b,a%b);
    }
}
int mcm(int a,int b){
    return (a*b)/mcd(a,b);
}
int main(){
    int a,b;
    while(cin>>a>>b){
        cout<<mcd(a,b)<<endl;
        //cout<<__gcd(a,b)<<endl;
        cout<<mcm(a,b)<<endl;
    }
    return 0;
}

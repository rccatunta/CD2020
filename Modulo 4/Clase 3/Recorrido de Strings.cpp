#include <iostream>
using namespace std;
int main(){
    string palabra;
    cin>>palabra;
    for(int i=0;i<palabra.size();i++){
        cout<<"Letra "<<i<<" es "<<palabra[i]<<endl;
    }
    return 0;
}

#include <iostream>

using namespace std;
//Programa que ve si B es divisible entre A
int main(){
    int A,B;
    cin>>B>>A;
    if(B%A == 0){
        cout<<A<<" divide a "<<B<<endl;
    }
    else{
        cout<<A<<" NO divide a "<<B<<endl;
    }
    return 0;
}

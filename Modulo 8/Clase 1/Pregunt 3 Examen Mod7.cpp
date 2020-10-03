#include <iostream>

using namespace std;

int main(){
    int n=12;
    for(int i=0;i<100;i++){
        cout<<n<<" ";
        if(n%2==0){
            n=n/2;
        }
        else{
            n=(n*3)+1;
        }
    }
    return 0;
}

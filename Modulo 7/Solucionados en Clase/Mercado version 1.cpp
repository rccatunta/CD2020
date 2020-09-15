#include <iostream>
using namespace std;
int main(){
    int k,T;
    while(cin>>k>>T){
        int precio=k;
        int cantidad=0;
        int acum=0;
        while(acum<T){
            cantidad++;//estoy comprando un durazno
            acum+=k;//estoy pagando por ese durazno
            k=k*2;//actualizando el precio de ese durazno
        }
        cout<<cantidad<<endl;
    }
    return 0;
}

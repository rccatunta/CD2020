#include <iostream>

using namespace std;
void binario(int n){
     for(int i=32;i>=0;i--){
        if(n&(1<<i)){
            cout<<1;
        }
        else{
            cout<<0;
        }
    }
    cout<<endl;
}
int main(){
    //NOT
    int n=100;
    cout<<"NOT"<<endl;
    cout<<n<<endl;
    binario(n);
    cout<<~n<<endl;
    binario(~n);
    //AND
    int a=21,b=11;
    cout<<"AND"<<endl;
    cout<<a<<endl;
    binario(a);
    cout<<b<<endl;
    binario(b);
    cout<<(a&b)<<endl;
    binario(a&b);
    //OR
    a=100; b=9;
    cout<<"OR"<<endl;
    cout<<a<<endl;
    binario(a);
    cout<<b<<endl;
    binario(b);
    cout<<(a|b)<<endl;
    binario(a|b);
    //XOR
    a=5; b=9;
    cout<<"XOR"<<endl;
    cout<<a<<endl;
    binario(a);
    cout<<b<<endl;
    binario(b);
    cout<<(a^b)<<endl;
    binario(a^b);
    // LEFT SHIFT - DESPLAZAMIENTO A LA IZQUIERDA
    a=43;
    cout<<"Desp Izq"<<endl;
    cout<<a<<endl;
    binario(a);
    b=a<<2;
    cout<<b<<endl;
    binario(b);
    // RIGHT SHIFT - DESPLAZAMIENTO A LA DERECHA
    a=43;
    cout<<"Desp Der"<<endl;
    cout<<a<<endl;
    binario(a);
    b=a>>2;
    cout<<b<<endl;
    binario(b);
    return 0;
}

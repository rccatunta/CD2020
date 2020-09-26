#include <iostream>
#include <stack>
using namespace std;

int main(){
    string comandos;
    while(cin>>comandos){
        stack<int> pila;
        int a,b,suma,mult;
        for(int i=0;i<comandos.size();i++){
            if(comandos[i]=='+'){
                a=pila.top(); // Saber quien es el elemento en la cima
                pila.pop(); // Sacan el elemento de la cima
                b=pila.top();
                pila.pop();
                suma=a+b;
                pila.push(suma);
            }
            else{
                if(comandos[i]=='*'){
                    a=pila.top(); // Saber quien es el elemento en la cima
                    pila.pop(); // Sacan el elemento de la cima
                    b=pila.top();
                    pila.pop();
                    mult=a*b;
                    pila.push(mult);
                }
                else{
                    // Es un numero
                    // int(comandos[i]) obtiene el ascii del
                    pila.push(int(comandos[i])-48);
                }
            }
        }
        cout<<pila.top()<<endl;
    }
    return 0;
}

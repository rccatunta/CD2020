#include <iostream>

using namespace std;

// Esta funcion da la vuelta a un numero
int dar_vuelta(int num){
    int nuevo_num = 0;
    while(num>0){
        int dig=num%10;
        nuevo_num=nuevo_num*10+dig;
        num=num/10;
    }
    return nuevo_num;
}

int main(){
    int N,num;
    cin>>N;
    for(int i=0;i<N;i++){ // Ciclo que hace N vueltas
        cin>>num;
        int num_volcado = dar_vuelta(num);
        if(num == num_volcado){
            cout<<"SI"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

#include <iostream>

using namespace std;

void conteo_atras(int n){
    cout<<n<<endl;
    if(n==0){ // Caso Base
       return;
    }
    return conteo_atras(n-1); // Paso recursivo
}

int main(){
    conteo_atras(10);
    return 0;
}

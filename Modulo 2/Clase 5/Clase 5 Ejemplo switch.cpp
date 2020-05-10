//Ver si una letra es Vocal o Constante
#include <iostream>
using namespace std;
int main(){
    char letra;
    cin>>letra;
    switch(letra){//Dentro del switch se pone la variable que se quiere evaluar
        case 'a':
            cout<<"Vocal"<<endl;
            break;
        case 'e':
            cout<<"Vocal"<<endl;
            break;
        case 'i':
            cout<<"Vocal"<<endl;
            break;
        case 'o':
            cout<<"Vocal"<<endl;
            break;
        case 'u':
            cout<<"Vocal"<<endl;
            break;
        default:
            cout<<"Consonante"<<endl;
            break;
    }

    return 0;
}

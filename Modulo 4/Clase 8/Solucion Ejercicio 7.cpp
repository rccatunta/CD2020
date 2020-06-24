#include <iostream>
#include <ctype.h> // Libreria para usar tolower y toupper
using namespace std;

void minusculas(string &palabra){
    for(int i=0;i<palabra.size();i++){
        palabra[i] = tolower(palabra[i]);
    }
}

int main(){
    string pal;
    cin>>pal;
    minusculas(pal);// Invoco a la funcion
    cout<<pal<<endl;
    return 0;
}

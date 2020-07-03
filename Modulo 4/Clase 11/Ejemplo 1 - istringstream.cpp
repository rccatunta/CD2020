#include <iostream>
#include <sstream>// Libreria necesaria para usar istringstream
using namespace std;

int main(){
    string entrada="3.14 21 Rodolfo";
    float pi;
    int edad;
    string nombre;
    istringstream S(entrada);
    S>>pi>>edad>>nombre;
    cout<<"pi="<<pi<<endl;
    cout<<"edad="<<edad<<endl;
    cout<<"nombre="<<nombre<<endl;
    return 0;
}

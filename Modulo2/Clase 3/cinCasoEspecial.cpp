//Existe un caso especial para cuando se quiere 
//introducir un dato que tiene espacios
//como el nombre completo de una persona
#include <iostream>
using namespace std;
int main(){
	string nombreCompleto;
	//Para pedir una linea completa se usa getline
	cout<<"Introduzca su nombre completo"<<endl;
	getline(cin,nombreCompleto);
	cout<<"Su nombre completo es "<<nombreCompleto<<endl;
	return 0;
}
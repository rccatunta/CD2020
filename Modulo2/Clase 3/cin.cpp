#include <iostream>
using namespace std;
int main(){
	//Los datos que se pediran deben estar previamente
	//declarados para que la peticion sea correcta
	string nombre;
	int edad;
	cout<<"Hola, como te llamas?"<<endl;
	getline(cin,nombre);//getline se utiliza para pedir una linea completa
	cout<<"Cual es tu edad?"<<endl;
	cin>>edad;//cin se utiliza para pedir un solo dato hasta presionar
	//un ENTER o un ESPACIO
	cout<<"Hola "<<nombre<<" tienes "<<edad<<" anios"<<endl;
	return 0;

}

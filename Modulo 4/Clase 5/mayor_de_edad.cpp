#include <iostream>

using namespace std;

bool mayor_edad(int edad){
	if(edad>=18){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int edad;
	cout<<"Ingrese su edad"<<endl;
	cin>>edad;
	if(mayor_edad(edad)){
		cout<<"Usted es mayor de edad"<<endl;
	}
	else{
		cout<<"Usted no es mayor de edad"<<endl;
	}
}

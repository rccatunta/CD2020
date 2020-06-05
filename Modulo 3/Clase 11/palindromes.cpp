#include <iostream>
using namespace std;
int main(){
    string palabra;
	while(cin>>palabra){
		string al_reves = ""; // En esta variable guardaremos la palabra al reves
		// Recorremos la palabra desde el final hasta el inicio
		for(int i=palabra.size()-1;i>=0;i--){
			// Proceso para poner la palabra al reves
			al_reves = al_reves + palabra[i];
		}
		if(palabra == al_reves){
            cout<<"SI"<<endl;
		}
		else{
            cout<<"NO"<<endl;
		}
	}
	return 0;
}

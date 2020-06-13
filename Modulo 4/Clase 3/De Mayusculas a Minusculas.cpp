#include <iostream>
using namespace std;
int main(){
	string palabra;
	cin>>palabra;
	// Recorrer la palabra, caracter por caracter
	for(int i=0;i<palabra.size();i++){
		// Obtener el código ASCII de cada letra
		// Castear -> Cambiar de tipo de dato
		int ascii = int(palabra[i]); // Convertimos de letra a numero ASCII
		int minuscula = ascii+32; // Obtuvimos la letra en minuscula
		char letra_minuscula = char(minuscula);// Convertimos de numero ASCII a letra
		palabra[i] = letra_minuscula;
	}
	cout<<palabra<<endl;
}

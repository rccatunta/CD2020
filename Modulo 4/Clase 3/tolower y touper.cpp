// tolower -> minusculas
// toupper -> MAYUSCULAS
#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
	string palabra;
	cin>>palabra;
	// Conversion a minuscula
	for(int i=0;i<palabra.size();i++){
        palabra[i] = tolower(palabra[i]);
	}
	cout<<palabra<<endl;
	// Conversion a mayuscula
	for(int i=0;i<palabra.size();i++){
        palabra[i] = toupper(palabra[i]);
	}
	cout<<palabra<<endl;
}

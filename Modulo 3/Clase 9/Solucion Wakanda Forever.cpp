#include <iostream>
using namespace std;

int main(){
	int num_filas, num_columnas;
	cin>>num_filas>>num_columnas; // Pedimos el numero de filas y columnas.
	char mapa[num_filas][num_columnas]; // Creamos la matriz de caracteres

	// Peticion de los caracteres que tendra la matriz
	for(int i=0;i<num_filas;i++){// Filas
		for(int j=0;j<num_columnas;j++){// Columnas
			cin>>mapa[i][j];
		}
	}

    for(int i=0;i<num_filas;i++){
        for(int j=0;j<num_columnas;j++){
            // Buscando las minas
            if(mapa[i][j]=='*'){
                cout<<i<<","<<j<<endl;
            }
        }
    }
	return 0;
}

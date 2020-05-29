#include <iostream>
using namespace std;
int main(){
    int ma[3][3] = {{2,3,4},{1,8,3},{5,3,0}};
    int matriz[4][8]; // 4 filas y 8 columnas
	//Recorremos la matriz
	for(int i=0;i<4;i++){//Primer ciclo recorre las filas
		for(int j=0;j<8;j++){//Segundo ciclo recorre las columnas
			matriz[i][j]=0;
		}
	}
	cout<<ma<<endl;
    return 0;
}

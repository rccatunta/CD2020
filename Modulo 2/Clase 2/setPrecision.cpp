//Existe un caso especial de la impresion
//Cuando se quiere imprimir un flotante con cierta cantidad
//de decimales.
#include <iostream>
#include <iomanip>//Libreria necesaria para el caso, se debe colocar
using namespace std;
int main(){
	float pi=3.141592;
	cout<<"Valor de pi normal "<<pi<<endl;
	//Uso de setprecision
	cout<<fixed<<setprecision(1);
	cout<<"Valor de pi con 1 decimal "<<pi<<endl;
	cout<<fixed<<setprecision(2);
	cout<<"Valor de pi con 2 decimales "<<pi<<endl;
	cout<<fixed<<setprecision(3);
	cout<<"Valor de pi con 3 decimales "<<pi<<endl;
	cout<<fixed<<setprecision(4);
	cout<<"Valor de pi con 4 decimales "<<pi<<endl;
	cout<<fixed<<setprecision(5);
	cout<<"Valor de pi con 5 decimales "<<pi<<endl;
	cout<<fixed<<setprecision(6);
	cout<<"Valor de pi con 6 decimales "<<pi<<endl;
	cout<<fixed<<setprecision(7);
	cout<<"Valor de pi con 7 decimales "<<pi<<endl;
	//al imprimir con ciertos decimales estos se redondean
	cout<<"Valor de pi normal "<<pi<<endl;
	return 0;
}

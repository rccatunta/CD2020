#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	// Creamos el arreglo
	int arr[10] = {3,5,1,0,8,9,2,6,4,7};
	cout<<"ARREGLO SIN ORDENAR"<<endl;
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	sort(arr,arr+10);
	cout<<"ARREGLO ORDENADO"<<endl;
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}

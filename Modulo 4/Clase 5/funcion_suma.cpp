#include <iostream>

using namespace std;

int suma(int a, int b){
	int s=a+b;
	return s;
}
int resta(int a,int b){
    int r=a-b;
    return r;
}
int multiplicacion(int a,int b){
    int m=a*b;
    return m;
}
int division(int a,int b){
    int d=a/b;
    return d;
}
int main(){
	int x,y;
	cin>>x>>y;
	cout<<suma(x,y)<<endl;
	cout<<resta(x,y)<<endl;
	cout<<multiplicacion(x,y)<<endl;
	cout<<division(x,y)<<endl;
}

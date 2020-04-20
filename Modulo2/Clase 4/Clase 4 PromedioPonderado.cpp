//Recibira dos numeros de punto flotante de doble precision
//y calculara el promedio ponderado
#include <iostream>
#include <iomanip>//Libreria para imprimir con cierta cantidad de decimales
using namespace std;
int main(){
    double peso_nota_a = 3.5;
    double peso_nota_b = 7.5;
    double nota_a, nota_b;
    double suma_pesos = peso_nota_a + peso_nota_b;
    double promedio;
    cin>>nota_a>>nota_b;
    promedio = (nota_a * peso_nota_a + nota_b * peso_nota_b)/suma_pesos;
    cout<<fixed<<setprecision(5);
    cout<<"MEDIA = "<<promedio<<endl;
    return 0;
}

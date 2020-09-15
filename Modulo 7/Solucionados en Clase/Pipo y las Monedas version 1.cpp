#include <iostream>
using namespace std;

int main(){
    int N,cant_unos_total=0;
    cin>>N;
    int monedas[N];
    //Pidiendo los datos de las monedas
    for(int i=0;i<N;i++){
        cin>>monedas[i];
        if(monedas[i]==1){
            cant_unos_total++;
        }
    }
    int ganancia_max=-1;
    //Generar Rangos
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            // Calcular cuanto gano y cuanto pierdo
            int cant_unos=0;
            int cant_ceros=0;
            for(int k=i;k<=j;k++){
                if(monedas[k]==1){
                    cant_unos++;
                }
                else{
                    cant_ceros++;
                }
            }
            int ganancia = cant_ceros - cant_unos;
            ganancia_max = max(ganancia_max,ganancia);
        }
    }
    cout<<ganancia_max+cant_unos_total<<endl;
    return 0;
}

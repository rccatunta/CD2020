//Sacar la diferencia entre dos horas
#include <iostream>
using namespace std;
int main(){
    int ini,fin,duracion;
    cin>>ini>>fin;//ini es la hora de inicio, fin es la hora de final
    if(fin>ini){//Veo si fin es mayor a ini
        duracion=fin-ini;
    }
    else{
        duracion=fin+24-ini;
    }
    cout<<"EL CONCIERTO DURO "<<duracion<<" HORA(S)"<<endl;
    return 0;
}

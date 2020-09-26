#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,pelota;
    vector<int> luigi,peter;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>pelota;
        if(pelota%2==0){
            luigi.push_back(pelota);
        }
        else{
            peter.push_back(pelota);
        }
    }
    //cout<<*max_element(luigi.begin(),luigi.end())<<endl;


    //Luigi en orden ascedente
    sort(luigi.begin(),luigi.end());
    //Peter en orden descendente
    sort(peter.rbegin(),peter.rend());

    //Imprimir el vector de Luigi
    for(int i=0;i<luigi.size();i++){
        cout<<luigi[i]<<endl;
    }
    //Imprimir el vector de Luigi
    for(int i=0;i<peter.size();i++){
        cout<<peter[i]<<endl;
    }
    return 0;
}

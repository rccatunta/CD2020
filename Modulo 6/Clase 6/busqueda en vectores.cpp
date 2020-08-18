#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int x;
    vector<int>v;
    v.push_back(8);
    v.push_back(-1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(3);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //Busqueda Binaria
    sort(v.begin(),v.end());// Requisito que el vector este ordenando
    cin>>x;
    if( binary_search(v.begin(),v.end(),x) ){
        cout<<"El numero "<<x<<" esta en el vector"<<endl;
    }
    else{
        cout<<"El numero "<<x<<" no esta en el vector"<<endl;
    }
    return 0;
}

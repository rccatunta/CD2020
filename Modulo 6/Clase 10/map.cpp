#include <iostream>
#include <map>
using namespace std;
int main(){
    map<string,int> dias_mes;
    dias_mes["enero"] = 31;
    dias_mes["febrero"] = 28;
    dias_mes["marzo"] = 31;
    dias_mes["abril"] = 30;
    dias_mes["mayo"] = 31;
    dias_mes["junio"] = 30;
    dias_mes["julio"] = 31;
    dias_mes["agosto"] = 31;
    dias_mes["septiembre"] = 30;
    dias_mes["octubre"] = 31;
    dias_mes["noviembre"] = 30;
    dias_mes["diciembre"] = 31;
    if(dias_mes.find("febreros")!=dias_mes.end()){
        cout<<dias_mes["febreros"]<<endl;
    }
    cout<<"********"<<endl;
    map<string,int>::iterator it;
    for(it=dias_mes.begin();it!=dias_mes.end();it++){
        cout<<it->first<<" tiene "<<it->second<<" dias"<<endl;
    }
    return 0;
}

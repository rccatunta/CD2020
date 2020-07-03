#include <iostream>
#include <sstream>// libreria para usar ostringstream
using namespace std;

int main(){
    float num;
    cin>>num;
    ostringstream O;// creamos el buffer
    O<<num;// El buffer contiene al float
    string s=O.str();
    int pos_punto=s.find('.');
    s[pos_punto]=',';
    cout<<s<<endl;
    return 0;
}

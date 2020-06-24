#include <iostream>

using namespace std;

void aumentar_minuto(int &h, int &m){
    m=m+1;
    if(m==60){
        m=0;
        h=h+1;
    }
    if(h==24){
        h=0;
    }
}

int main(){
    int h,m;
    cin>>h>>m;
    aumentar_minuto(h,m);
    cout<<h<<" "<<m<<endl;
    return 0;
}

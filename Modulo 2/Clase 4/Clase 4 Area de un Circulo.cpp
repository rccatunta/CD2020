#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double radio;
    const double PI=3.14159;
    double area;
    cin>>radio;
    area=PI*radio*radio;
    cout<<fixed<<setprecision(4);
    cout<<"A="<<area<<endl;
    return 0;
}

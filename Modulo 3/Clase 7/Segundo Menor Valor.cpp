#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N;
    int buscado;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    sort(a,a+N);
    cout<<a[1]<<endl;
    return 0;
}

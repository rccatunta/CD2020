#include <iostream>
#include <deque>// Cola Doble
using namespace std;

int main(){
    deque<int>d;
    d.push_back(5);
    d.push_back(8);
    d.push_back(10);
    d.push_front(1);
    d.push_front(2);
    d.push_front(30);
    d.pop_front();
    d.pop_back();
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    return 0;
}

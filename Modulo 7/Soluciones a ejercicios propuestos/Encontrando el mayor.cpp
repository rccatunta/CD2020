#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int>v;
	int n,x;
	cin>>n;
	while(n--){
		cin>>x;
		v.push_back(x);
	}
	for(int i=0;i<=v.size()-4;i++){
		cout<<max(v[i],max(v[i+1],max(v[i+2],v[i+3])))<<endl;
	}
	return 0;
}
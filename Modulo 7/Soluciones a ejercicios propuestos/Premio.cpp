#include <iostream>
using namespace std;
int main(){
	int cp;
	cin>>cp;
	while(cp--){
		int n,a,b;
		cin>>n>>a>>b;
		if(a==b){
			cout<<min(a,b)*n<<" "<<max(a,b)*n<<" "<<n+1<<endl;	
		}
		else{
			cout<<min(a,b)*n<<" "<<max(a,b)*n<<" "<<1<<endl;
		}
		
	}
	return 0;
}
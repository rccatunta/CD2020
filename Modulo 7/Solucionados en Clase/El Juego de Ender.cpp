#include <iostream>

using namespace std;

int main(){
    int cp;
    cin>>cp;// Leemos el numero de casos de prueba
    while(cp--){
        int render,rpetra,rbonzo;
        cin>>render>>rpetra>>rbonzo;
        if(render%2==1){
            render=0;

        }
        if(rpetra%2==1){
            rpetra=0;
        }
        if(rbonzo%2==1){
            rbonzo=0;
        }
        int maxr = max(render,max(rpetra,rbonzo));
        //cout<<maxr<<endl;
        int ender=0,petra=0,bonzo=0;
        if(maxr==render){
            ender=1;
        }
        if(maxr==rpetra){
            petra=1;
        }
        if(maxr==rbonzo){
            bonzo=1;
        }
        if(ender+petra+bonzo==1 and maxr!=0){
            if(ender==1){
                cout<<"Ender"<<endl;
            }
            if(petra==1){
                cout<<"Petra"<<endl;
            }
            if(bonzo==1){
                cout<<"Bonzo"<<endl;
            }
        }
        else{
            cout<<"NADIE"<<endl;
        }

    }
    return 0;
}

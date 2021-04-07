#include<iostream>
using namespace std;

int main(){
    int T,x,y,n;
    cin>>T;
    for(int i=1;i<=T;i++){
        cin>>x>>y>>n;
        for(int j=n;j>=0;j--){
            if(j%x==y){
                cout<<j<<endl;
                break;
            }
        }
    }
}
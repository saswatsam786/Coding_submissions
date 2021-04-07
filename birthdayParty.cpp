#include<iostream>
using namespace std;

int main(){
	int T;
	cin>>T;
	int a,b;
	for(int i=0;i<T;i++){
		cin>>a>>b;
		if(b%a==0){
			cout<<"Yes"<<endl;;
		}
		else{
			cout<<"No"<<endl;;
		}
	}
}
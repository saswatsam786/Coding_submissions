#include<iostream>
using namespace std;

int main(){
	int N,x;
	cin>>N;
	cin>>x;
	int arr[N];

	for(int i=0;i<N;i++){
		cin>>arr[i];
	}

	for(int i=0;i<N;i++){
		if(arr[i]>=x){
			cout<<"YES"<<endl;;
		}
		else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}
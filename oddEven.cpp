#include<iostream>
using namespace std;

int oddEven(int arr[],int n){
    int count;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
            count++;
        }
    }
    if(count%2!=0){
        return arr[i];
    }

    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<oddEven(arr,n);

    return 0;

}
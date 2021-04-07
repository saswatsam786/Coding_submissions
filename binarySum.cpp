    #include<iostream>
    #include<algorithm>
    using namespace std;

    bool sum(int arr[],int n,int k){
        int s=0;
        int e=n-1;
        while(s<e){
            if(arr[s]+arr[e]==k){
                return true;
            }
            else if(arr[s]+arr[e]>k){
                e--;
            }
            else{
                s++;
            }
        }
        return false;
    }

    int main(){
        int n,k;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>k;
        sort(arr,arr+n);

        cout<<sum(arr,n,k);
    }
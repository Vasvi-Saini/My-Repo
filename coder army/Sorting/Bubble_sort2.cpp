#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=n-2; i>=0; i--){
        for(int j=0; j<=i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(auto i: arr){
       cout<<i<<" ";
    }
    
   return 0;
}
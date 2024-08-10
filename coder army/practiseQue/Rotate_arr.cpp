#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: "<<endl;
    cin>>n;

    int *arr = new int[n];

    cout<<"enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     
     int temp = arr[n-1];        //array ka last element

     for(int i=n-2; i>=0; i--){
         arr[i+1] = arr[i];
     }
     
     arr[0] = temp;
     
     cout<<"array after rotation: ";
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
     }
        return 0;
}
// Take 20 elements from user input and find its sum with the help of an array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[20] ;
     int sum = 0;
     
      cout<<"enter the elements";
        
      
    for(int i=0; i<20; i++){
         cin>>arr[i];
        sum += arr[i];
    }
    cout<<sum;
    
}
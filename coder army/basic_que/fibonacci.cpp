#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int last =0;
    int prev =1;
    int current =1;

    // if(n==1){
    //  cout<<last;
    //  return 0;
    // }
    // for(int i=3; i<=n; i++){
    //     current = prev + last;
    //     prev = current;
    //     last = prev;
    // }
    // cout<<current;
   
   
   cout<<last<<" "<<prev<<" ";
   for(int i=2;i<=n;i++){
    current = prev + last;
    
    last = prev;
    prev = current;
   
   cout<<current<<" ";
   }
    return 0;
}
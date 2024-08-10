#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number you want to check: ";
    cin>>n;
    if(n<2){
        cout<<"not a prime number";
        return 0;
    }
    else{
        for(int i=2; i<n; i++){
            if(n%i==0) {cout<<"not a prime number ";
            return 0;
            }
            
        }
    
         cout<<"Prime Number";
            return 0;
    }
    return 0;
}
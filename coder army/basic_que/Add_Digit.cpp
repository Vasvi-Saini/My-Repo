#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"enter the number : ";
    cin>>num;
    while(num>9){
    int rem;
    int ans=0;
    
    while(num){
        rem = num % 10;
        // ans += rem; any step can be first written
        num /= 10;
         ans += rem;
    }
    num = ans; 
    }                
    cout<<num;
    return 0;
    
}
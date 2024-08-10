#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    
    if(n==1) {        // 2 ki power 0 k liy
        cout<<"true";
        return 0;
    }
    else if(n%2==1 && n!=1){    // odd k liy check
        cout<<"false";
        return 0;
    }
    long long num = 1;
    while(num <= n){
    num *= 2;
    if(num == n){
       cout<<"true";
       return 0;
     }
    }
    cout<<"false";
    return 0;
}
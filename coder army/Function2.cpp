#include<bits/stdc++.h>
using namespace std;
bool prime(int m){
    if(m<2) 
    return 0;

    for(int i=2;i<m;i++){
        if(m%i==0) 
        return 0;
    }

    return 1;
}
int sum(int n,int m){ // multiple parameter(mtlb 1 s zada)
       cout<<m+n;
}
int fact(int n=3) {    // default parameter (if n is given no value then n will be equal to 3)
    int ans=1;
    for(int i=1; i<=n; i++){
        ans*=i;
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"enter the  number : ";
    cin>>a>>b;
   cout<<fact();
    // a is prime or not
   cout<<prime(a)<<endl;
    // a ka factorial
    cout<<fact(a)<<endl;
    // b is prime or not
    cout<<prime(b)<<endl;
    // b ka factorial
    cout<<fact(b)<<endl;
    // b-a is prime or not
    cout<<prime(b-a)<<endl;
    //  b-a ka factorial
    cout<<fact(b-a)<<endl;
    return 0;
}
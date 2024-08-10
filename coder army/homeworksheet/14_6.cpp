// Given two numbers n, r. Find nCr (Combination). Use Function here.
// factorial
// combimation nCr
#include<bits/stdc++.h>
using namespace std;
long long factorial(int num){
    long long fact = 1;
    for(int i=1; i<=num; i++){
       fact *= i;
    }
    return fact;
}
long long nCr(int n,int r){
    if(r>n) return 0;
    
    int numerator = factorial(n);
    int denominator = factorial(r)*factorial(n-r);
    return numerator/denominator;
}
int main(){
    int n,r;
    cout<<"enter the values: ";
    cin>>n>>r;
   long long result = nCr(n,r);
   cout<<"The nCr of "<<n<<" , "<<r<<" is "<<result;
       return 0;
}
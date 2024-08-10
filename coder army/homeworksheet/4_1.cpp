//Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the first number: ";
    cin>>a;
    cout<<"enter the second number: ";
    cin>>b;
    if(a==b){
        cout<<"both are equal";
        return 0;
    }
    else if(a>b){
        cout<<a<<" is greater";
    }
    else cout<<b<<" is greater";
    return 0;
}
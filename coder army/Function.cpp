#include<bits/stdc++.h>
using namespace std;
int sum(int m, int n){    // function declare
    return m+n;           // function define
} 
int mul(int m, int n){
    return m*n;
}
void fun(){
    cout<<"helooo\n";
}
int main(){
    int a,b;
    cout<<"enter the numbers: ";
    cin>>a>>b;
    cout<<sum(a,b);      //function call
    cout<<endl;
    cout<<mul(a,b);
    cout<<endl;
    fun();
    return 0;
}
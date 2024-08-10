#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,d;
    // cout<<"Enter the length: ";
    // cin>>a>>b;
    // cout<<"enter the breadth: ";
    // cin>>c>>d;
    cin>>a>>b>>c>>d;
    if(((a==b) && (c==d)) || ((a==c) && (b==d)) || ((a==d) && (b==c))) cout<<"It is a rectangle";
    else cout<<"NOt a rectangle: ";
    return 0;
}
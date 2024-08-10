#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the year: ";
    cin>>n;
    if(n%400==0) cout<<"Leap Year"<<endl; 
    else if(n%4==0 && n%100!=0) cout<<"Leap Year"<<endl;
    else cout<<"Not a leap year"<<endl; 

    // if(n%400==0 && n%4==0 && n%100!=0) cout<<"leap year";
    // else cout<<"not a leap year"<<endl;  condition not satisfied


    return 0;
}
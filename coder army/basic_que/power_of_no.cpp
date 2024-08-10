#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,pow,i,num;
     cout<<"Enter the number: ";
     cin>>n;
     cout<<"Enter the pow: ";
     cin>>pow;
     num = n;
     for(i=1;i<pow;i++){
        num = num * n;
     }
     cout<<num;
    return 0; 
    }
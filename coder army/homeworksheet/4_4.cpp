#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"enter your age : ";
    cin>>age;
    if(age<12 || age>65) cout<<" yes eligible for discount";
    else cout<<"No not eligible for discount";
    return 0;
}
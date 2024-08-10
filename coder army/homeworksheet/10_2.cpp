//Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    if(n>0 && n%2==0) cout<<"even";
    else cout<<"odd";
    return 0;
}
// Given n, the number of stones in the heap, return true if you can win the game assuming both you and your friend play optimally, otherwise return false.

 
#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cout<<"Enter the number of stones: ";
     cin>>n;
     if(n%4==0) cout<<"You have lost the game....";
     else cout<<"Congrats... You win...";
    return 0;
}
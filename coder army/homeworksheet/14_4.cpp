// Swap 2 numbers a, b without using extra variables. Range of -10000<=a,b<=100000.
// The XOR (^) bitwise operation has a property that allows you to swap values without using a temporary variable

#include<bits/stdc++.h>
using namespace std;
    void swap(int &a,int &b){
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
int main(){
    int c,d;
    cout<<"enter two numbers: ";
    cin>>c>>d;
    swap(c,d);
    cout<<"the swapped numbers are: "<<c<<" "<<d;
      return 0;
}
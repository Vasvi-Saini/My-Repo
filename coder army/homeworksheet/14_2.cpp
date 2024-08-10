//  Reverse a number n using Function, Constraints: -5000<=n<=5000

#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int rem,ans=0;
    bool negative = (n<0);      //-1234
        n = abs(n);           // makes n positive taaki hum reverse kr ske
    
    while(n){
        rem = n % 10;
        n /= 10;            
        ans = ans * 10 + rem;
    }
    if(negative){    // n was -1234 toh ans bhi -4321 ana chiy pr 4321 aega kyuki hmne rev krne k liy +ive krdiya tha
        ans = -ans;    // now ans is -4321
    }
    return ans;    
}
int main(){
    double a;
    cout<<"Enter the number you want to reverse: ";
    cin>>a;
    int result = reverse(a);
    cout<<"The reverse of a number "<<a<<" is "<<result; 
    return 0;
}


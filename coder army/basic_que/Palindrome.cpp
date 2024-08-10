#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    int ans = 0;
    int x = num;
    while(x){
        int rem = x % 10;
        x /= 10;
        if(ans<INT_MIN/10 || ans>INT_MAX/10){
            return 0;
        }
        ans = ans * 10 + rem;
    }
    if(ans == num) cout<<"Palindrome";
    else cout<<"Not a Palindrome";
    return 0;
}
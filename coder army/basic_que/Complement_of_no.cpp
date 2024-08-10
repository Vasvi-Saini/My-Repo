#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
      int ans = 0;
      int mul = 1;
      while(num){
        int rem = num % 2;
        rem = rem ^ 1;
        num /= 2;
       ans = ans + rem * mul;
       mul *= 2;
      }
      cout<<ans;
    return 0;
}
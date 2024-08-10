#include<bits/stdc++.h>
using namespace std;
int CountDigit(int n){
    int count = 0;
    while(n){
        int ans = n%10;
        count++;
        n /= 10;
    }
    return count;
}
bool Armstrong(int num, int digit){
     int n=num,ans=0,rem;
     while(n){
        rem = n%10;
        n /= 10;
        ans = ans + pow(rem,digit);
     }
     if(ans==num) return 1;
     else return 0;
}
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    CountDigit(num);
    int digit = CountDigit(num);  // count digit
    Armstrong(num,digit);   // armstrong number
    cout<<Armstrong(num,digit);

    return 0;
}
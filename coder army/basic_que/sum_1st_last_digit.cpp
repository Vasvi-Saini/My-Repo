#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first_digit,last_digit;
    last_digit = n%10;

    while(n>=10){
        n /= 10;
    }
    first_digit = n;
    cout<<first_digit<<" "<<last_digit<<endl;

    return 0;
}
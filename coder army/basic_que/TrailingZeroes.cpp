#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int num = n;
    int count = 0;
    while(num>=5){
        count += num/5;
        num /= 5;
    }
    cout<<"the number of zeroes in "<<n<<" is "<<count;
    return 0;
}
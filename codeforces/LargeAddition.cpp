#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,ans=0;
        cin>>x;
        int duplicate = x;

        while(x){
        int digit=x%10;
        ans+=digit;
        x /= 10;
        }
    if(sizeof(ans)==sizeof(duplicate)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    }
    return 0;
}
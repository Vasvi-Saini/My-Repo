#include<bits/stdc++.h>
using namespace std;
int main(){
    string a , b;
    cin>>a>>b;
    int count1 = 0 ,count2 = 0;
    for(int i = 0 ; i<a.size(); i++){
        if(a[i]>=97) count1 += a[i]-'a';
       else count1 += a[i]-'A';
        if(b[i]>=97) count2 += b[i]-'a';
       else count2 += b[i]-'A';
    }
    if(count1 == count2) cout<<0;
    else if(count1<count2) cout<<-1;
    else cout<<1;
    return 0;
}
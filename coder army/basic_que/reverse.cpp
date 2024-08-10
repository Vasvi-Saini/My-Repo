#include<bits/stdc++.h>

using namespace std;
int main(){
    int num;
    cout<<"enter the number: "<<endl;
    cin>>num;
    int x = num;          // x m num ko daldo taki x m modification krr ske
    int ans = 0;          // ans ko bahr hi initialize kro 

    while(x!=0){
        int rem;
        rem = x%10;
        if(ans>LLONG_MAX/10 || ans<LLONG_MIN/10){
            return 0;
        }
        ans = ans*10 + rem;
        x /=10;
    }
        //   num = ans;    // cout ans or
         cout<<ans;    // or simply cout num
  
     return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    
    long long left =0,right = n,mid,ans;
    if(n<0){
       cout<<"Not valid...";
       return 0;
    } 
    while( left <= right){
       mid = left + (right-left)/2;
       if(mid*mid == n){
        ans = mid;
        break;
       }
        else if(mid*mid < n){
            ans = mid;
            left = mid +1;
           
        }
        else right = mid - 1;
    }

    cout<<ans;
    return 0;

}
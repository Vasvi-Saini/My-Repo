#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int ans = 0;
    int left = 1;
    int right = n/2;
    if(n==0 || n==1) {
         cout<<n;
        return 0;
    }
    while(left<=right){
        int mid = left + (right-left)/2;
        if(mid<=n/mid) {          // mid*mid<=n
           ans = mid;
           left = mid + 1;  
        }
        right = mid - 1;
    }
    cout<<ans;
    return 0;

}
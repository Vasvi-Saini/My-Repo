#include<bits/stdc++.h>
using namespace std;
void fun(int a[], int n){
    for(int i=0; i<n; i++){
        // cout<<sizeof(a)<<endl;
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    cout<<sizeof(arr)<<endl;
    fun(arr,5);
    return 0;
}
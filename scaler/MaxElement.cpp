#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr[5]={-1,3,7,15,-65};
    int mx = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>mx){
            mx = arr[i];
        }
    }
    cout <<"the greatest element in the array is = "<<mx<<endl;
    return 0;
}
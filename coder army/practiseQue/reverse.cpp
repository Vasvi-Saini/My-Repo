#include<bits/stdc++.h>
using namespace std;;
int main(){                           
    int arr[6] = { 2, 3, 4, 5, 1, 6};
    int start = 0, end = 5;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    };
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
        return 0;
}
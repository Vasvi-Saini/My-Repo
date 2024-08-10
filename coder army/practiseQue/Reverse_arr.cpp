#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6] = { 1, 5, 7, 2, 11, 9};
    int temp[6];
    int i = 5;
    int j = 0;
    while(i>=0){
        temp[j] = arr[i];
       j++;
       i--;
    }
    for(int k=0; k<6; k++){
    cout<<temp[k]<<" ";
    }
    return 0;
}
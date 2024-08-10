// if number is found return its index else return -1 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6] = { 1, 5, 7, 2, 11, 9};
    int index = -1;
    int x = 11;
    for(int i=0; i<=5; i++){
           if(arr[i] == x){
            index = i;
            break;
           }
    }
    cout<<index;
    
    return 0;
}
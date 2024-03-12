#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5]={4,5,8,9,1};
    int b[5];
    int j=0;              // initializing index for b array
    for(int i=4;i>=0;i--){
        b[j]=a[i];       
        j++;
    }
    for(int i=0;i<5;i++){
        cout<<b[i]<<" ";
    }
   
   return 0; 
} 
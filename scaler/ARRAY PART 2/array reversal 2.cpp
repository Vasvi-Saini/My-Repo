#include <bits/stdc++.h>
using namespace std;
int main(){ 
    
    int a[5] ={2,4,6,8,0};
   
    int l=0;
    int r=4;
     
    while(l<r){
        //swap a[l] and a[r]
        int temp = a[r];
        a[r] = a[l];
        a[l] = temp;

        l++;
        r--;
    }
    for (int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;  
}

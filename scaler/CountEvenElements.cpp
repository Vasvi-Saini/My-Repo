#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5]={3,-6,7,9,8};
    int count=0;
    for(int i=0;i<5;i++){
       if(a[i]%2==0){
        count++;
       }
    }
    cout<<"The number of even elements are= "<<count<<endl;
    return 0;
}
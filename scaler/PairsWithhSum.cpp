#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5]={1,4,2,6,0};
    int value = 7;
    
    int count =0;

    //pick the first element of the pair
    for(int i=0;i<5;i++){
       for(int j=i+1;j<5;j++){     //to pick the 2nd element of the pair along with a[i]
        if(a[i] + a[j]==value){
            count = count + 1;
        }
       }
    }
    cout<<"Count of pairs having sum as "<<value<< " is = " <<count <<endl;
    return 0;
}

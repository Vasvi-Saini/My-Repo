#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    
     cout<<"enter the size of array: ";
     cin>> size;

    int *array = new int[size];    // initialize the array with given size

    cout<<"enter the elements of array : "<<endl;

   for(int i=0; i<size; i++){       // input elements acc to given size of array
       cin>>array[i];
   }   
     
    int ans = INT_MIN;

    for(int i=0; i<size; i++){
        if(array[i]>ans){
            ans = array[i];
        }
    }

    int second = -1;
    for(int i=0; i<size; i++){
        if(array[i]!= ans){
            second = max(array[i],second);
        }
    }
    cout<< second;
    return 0;
}
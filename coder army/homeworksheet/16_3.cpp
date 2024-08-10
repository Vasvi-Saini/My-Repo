// Find the index of a specific element in an array, if the element is not present, print -1. Ask the size of the array from the user and then implement it.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[]={ };

    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements : ";
   
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   
    int x;
    cout<<"enter the number you want to search: ";
    cin>>x;

    int index = -1;
    for(int j=0; j<n; j++){
        if(arr[j]==x){
            index = j;
            break;
        }
        
     }
    cout << index;
    return 0;
}
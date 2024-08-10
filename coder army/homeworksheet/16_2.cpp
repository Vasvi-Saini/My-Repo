//Calculate the average of elements in an array of size 18.
//Average = Sum/Count


#include<bits/stdc++.h>
using namespace std;
int main(){


int arr[18];
int sum = 0;
cout<<"Enter the elements : ";
for(int i=0; i<18; i++){
    cin>>arr[i];
    sum += arr[i];
    
}
int ans = sum /  18;
    cout<<" THE AVERAGE OF NUMBERS IS: "<< ans;
    return 0;
}
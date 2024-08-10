#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;               
    cout<<"Enter the given largest number  of array: ";
    cin>>n;

    int *array = new int[n-1];           // this code is valid for single missing number only means not more than one
 // n-1 is the size of array since array is of largest element - 1 size 

    cout<<"enter the elements of array: ";
    for(int i=0; i<n-1; i++){            
        cin>>array[i];              //ex max_element is 6 then size of array is 5 & indexing i is upto 4 so n-1, n is size;
    }
    
    int sum = 0;
    for(int i=0; i<n-1; i++){
        sum += array[i];
    }
      int ans = n*(n+1)/2;

      cout<<ans - sum;
    return 0;
}
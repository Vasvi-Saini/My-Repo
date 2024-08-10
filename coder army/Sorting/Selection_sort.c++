#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6] = {10, 8, 2, 3, 1, 4};
    //             0  1  2  3  4  5
    for(int i=0; i<6-1; i++){    // total round 4
        int index = i;
      for(int j=i+1; j<6; j++){

        if(arr[j]<arr[index]){ index = j;
        }
         
    }
      swap(arr[i],arr[index]);
    }
      for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
      }
  
      return 0;
}
    




















    // for(int i=0; i<5; i++){    // total round n-1
    //    int index = i;
    //    for(int j=i+1; j<6; j++){   // smallest element dhundo
    //         if(arr[j] < arr[index]){
    //             index = j;
    //         }
            
    //    }
    //    swap(arr[i], arr[index]);
       
    // }
    // for(int i=0; i<6; i++){
    //     cout<<arr[i]<<" ";
    // }
    // return 0;

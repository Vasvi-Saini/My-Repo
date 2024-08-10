#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int drinks[n];
    for(int i =0; i<n; i++){
        cin>>drinks[i];
    }
    double total = 0;
    for(int i = 0; i<n; i++){
         total += drinks[i];
    }
    cout<<total/n;
    return 0;
}

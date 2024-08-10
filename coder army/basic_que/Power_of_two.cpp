#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;

    int x = n;
    if(x<1) {
        cout<<"false";
        return 0;
    }
        while(x!=1){
            if(x%2==1){
                 cout<<"false";
                 return 0;
            }
            else {
                x/=2;
            }
        
        }
        cout<<"true";
        
        return 0;
}

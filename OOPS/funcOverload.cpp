#include<bits/stdc++.h>
using namespace std;
class operation{
     int a,b,c;
public: 
      int add(int x,int y){
       return  x+y;
      } 
       int add(int x,int y,int z){
       return x+y+z;
      }  
       
};

int main(){
     int x,y,z;
     cout<<"Enter the values"<<endl;
     cin>>x>>y>>z;
    operation* obj1 = new operation();
    cout<<obj1->add(x,y)<<endl;
    cout<<obj1->add(x,y,z)<<endl;
    return 0;
}
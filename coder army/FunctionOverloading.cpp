#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
   int c;
   c=a;
   a=b;
   b=c;
}
void swap(float &c, float &d)   //functoin overloading (function name same argument different)
{
    float e;
    e = c;
    c = d;
    d = e;

}
// also swap function is an inbuilt function 

int main(){
     int a,b;
     cin>>a>>b;
     swap(a,b);
     cout<<a<<" "<<b<<" "<<endl;
    float f1= 4.8, f2=4.5;
    swap(f1,f2);
    cout<<f1<<" "<<f2;
    return 0;
}
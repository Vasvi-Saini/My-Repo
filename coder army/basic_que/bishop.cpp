#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the position : ";
    cin>>a>>b;
    int count = 0;
    count += min(a-1,b-1);    // left upward
    count += min(8-a,b-1);     // left downward
    count += min(a-1,8-b);
    count += min(8-a,8-b);
    cout<<"The total number of steps bishop can move is: "<<count;
    return 0;
}
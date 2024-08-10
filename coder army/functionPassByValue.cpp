#include<bits/stdc++.h>
using namespace std;
void swap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
}
int nain(){
    int p,q;
    cin>>p>>q;
    swap(p,q);
    cout<<p<<" "<<q;
    return 0;
}
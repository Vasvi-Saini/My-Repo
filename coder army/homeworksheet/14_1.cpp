//Find the cube of a number using Function. 
#include<bits/stdc++.h>
using namespace std;
double cube(double n){
    return n * n * n;
}
int main(){
    int a;
    cout<<"enter the number: ";
    cin>>a;
    double result = cube(a);
    cout<<"the cube of a number "<<a<<" is: "<<result;
    return 0;

}
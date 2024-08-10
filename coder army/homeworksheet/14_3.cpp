// There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.

#include<bits/stdc++.h>
using namespace std;
void exchange (double &a, double &b, double &c){
    double temp = a;     // save the value of a into temp
    a = c;               // assign the value of c to a
   c = b;                // assign the value of b to c
   b = temp;             // assign the value of a(temp) to b
    // In C++, we can't return multiple values directly from a function . Instead, you can use : 1. references to modify the values directly 2. use a tuple to return multiple values
}
int main(){
    double m,n,o;
    cout<<"enter the numbers: ";
    cin>>m>>n>>o;
   exchange (m,n,o);
   cout<<"the exchange of m,n,o is : " << m << n <<o;
    return 0;
}
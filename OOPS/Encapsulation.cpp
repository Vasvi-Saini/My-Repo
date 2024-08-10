#include<bits/stdc++.h>
using namespace std;
class temp{      // by default private
     int a;
     int b;
  public:
  int solve(int input){      // function or method to access a and b
    a=input;
    b=input/2;
    return b;
  }
};
 
int main() {
  int n;
  cin>>n;
  temp half;    // object of parent class temp created
  int ans;
  ans =half.solve(n);
  cout<<ans<<endl; 
}
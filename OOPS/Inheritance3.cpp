#include<bits/stdc++.h>
using namespace std;
class human{
    public :      // if private then nothing helps
   string name;
   int age,weight;
};
class student : private human{
     int roll_no , fees;

    //  protected :   // since parent is public & child class is protected (protected > public) result is protected
    //  string name;   // can consider like this
    //  int age,weight;

     public:
     void fun(string n, int a, int w)
     {
         name = n;    // within the class  protected accesible
         age = a;
         weight = w;
     }

     void display()
     {
        cout<<name<<" "<<age<<" "<<weight;
     }
};
int main(){
    student A;
    A.fun("vasvi",20, 45);   // accessible
    A.display();             // can access even the protected members using function
    return 0;
}
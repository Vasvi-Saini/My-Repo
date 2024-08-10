#include<bits/stdc++.h>
using namespace std;
class human{          // parent class
    string name;    
    int age,weight;      // by default is it private
};

class student : public human{     // child class 
     int roll_number , fees;
};

int main(){
    student A;    // child class object
    A.name = "vasvi";    // not accesible since parent class  is private
    return 0;
}
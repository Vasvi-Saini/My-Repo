#include<bits/stdc++.h>
using namespace std;
class human{             // parent class
    protected:           
    string name;    
    int age,weight;      // now make it protected claas
};

class student : public human{     // child class or deriveed class
    private:
    int roll_number , fees;    
    //  protected:        
    // string name;    
    // int age,weight;  
};

int main(){                //external code
    student A;            // child class object
    A.name = "vasvi";    // not accesible since parent class  is protected 
    return 0;
}
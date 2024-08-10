// why use public protected private?

#include<bits/stdc++.h>
using namespace std;
class human{
    string Religion,color;    //not neccessary information of student has been privated 
    protected:               // this part can be inherited but above private part does not , hold encapsulation property , can help derived class
    string name;
    int age,weight;
};
class Student : private human{
    private:
    int roll_no, fees;
    public:
    Student(string name,int age, int weight, int roll_no, int fees){
     this->name = name;
     this->age = age;
     this->weight = weight;
     this->roll_no = roll_no;
     this->fees = fees;
    }

    void display(){
        cout<<name<<" age is "<<age<<" , weight is "<<weight<<" ,roll_number is "<<roll_no<<" and fees is "<<fees<<endl;
    }
};
int main(){
    human s;
    // s.Religion = " ";   not accessible
    // s.name =" ";       not accessible  
   Student A("vasvi",30,40,40,40);
   A.display();
    }
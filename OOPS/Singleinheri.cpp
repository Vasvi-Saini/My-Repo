#include<bits/stdc++.h>
using namespace std;
class Parent{   // private
public:
    string name;
    int age, weight;
    void use(string name,int age,int weight){
        this->name = name;
        this->age = age;
        this->weight = weight;
        // cout<<name<<" "<<age<<" "<<weight<<endl;
        // cout<<this->name<<name;     // (this) pointer is an object of class that is created by default dynamically whenever a class is created and it can only be used inside its class.
    }
   
};
class Child : public Parent{
    public:
        void Display(){
        cout<<name<<" "<<age<<" "<<weight<<endl;
        }
};
int main(){
    Parent p;
    Child v;
   v.use("Prince",20,50);
   p.use("vasvi",29,72);
cout<<p.name<<" "<<p.age<<" "<<p.weight<<endl;
   v.Display();

    return 0;
}
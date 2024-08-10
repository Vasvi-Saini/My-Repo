#include<bits/stdc++.h>
using namespace std;

class  Human {
    string name;       // encapsulation of object or methods name
    public:
    Human(){    
       cout<<"to access name  from this class call insert function"<<endl;
    }
  private: 
    void insert(string name){      // abstraction of object name
        this->name = name;
        cout<<"Your name is: "<<name<<endl;
    }
    public:
   void deletename(string name){
    if(name==""){
    insert(name);
    }
    this->name = "";
    cout<<"name is deleted : "<<name<<endl;
   }
};

class employee: public Human{
    public:
    int salary;
};

int main(){
  Human h;
  h.deletename("prince");
}
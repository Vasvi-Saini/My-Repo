#include<bits/stdc++.h>
using namespace std;
class operation{
   
     string name;
     int age;
     int id;

      public:
    operation(string name , int age , int id){     //parameterised const
        this->name=name;  //this is an object which is created by default in a class and can be accessible only in the method or constructor of that class.
        this->age=age;
        this->id=id;
    }  
    
    operation(){  //default const
    name="";
    age=0;
    id=0;
    }

    //  operation(int x,int y){ //parameterised constructor
        
    //      a = x;
    //      b = y;
    //  }
    //  operation(int x,int y,int z){
        
    //      a = x;
    //      b = y;
    //      c= z;
    //  }
     
    //   int add(){
    //    return a+b;
    //   } 
    //    int add(){
    //    return a+b+c;
    //   } 
    void print(){     // function or method
        
        cout<<name<<" "<<age<<" "<<id;
        
    }

    ~operation(){
        this->name="vasvi";
        cout<<"i am called"<<endl;
        this->print();
    }
    
      
};

int main(){
     string name;
     int age;
     int id;
     cout<<"Enter the value"<<endl;
     cin>>name>>age>>id;
    operation* obj1 = new operation(name,age,id);
    // obj1->print();
    delete(obj1);
    return 0;
}
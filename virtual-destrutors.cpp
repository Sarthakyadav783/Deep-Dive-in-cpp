#include <iostream>
using namespace std;
//Virtual constructors are useful when you are using a 
//base class pointer and derived class object so as to destruct the derived class object as well
class Base{
    public:
    Base(){
        cout<<"Constructor of Base"<<endl;
    };
    virtual ~Base(){
        cout<<"Desturctor of Base"<<endl;
    }
};
class Derived: public Base{

    public:
    Derived(){
        cout<<"Constructor of Derived"<<endl;
    };
    ~Derived(){
        cout<<"Desturctor of Derived"<<endl;
    }
};
int main(){
    //Derived d;
    Base *ptr=new Derived();
    delete ptr;
}
#include <iostream>
using namespace std;
//Example of Runtime Polymorphim
class Base{
    public:
    virtual void fun(){
        cout<<"fun of Base"<<endl;

    }
};
class Derived : public Base{
    public :
    void fun(){// Overridied functiond
        cout<<"fun of Derived"<<endl;

    }
};
int main(){
    Base *ptr = new Derived;
    ptr->fun();// In Base class pointer derived class object fun of base class was being called but here fun of derived class will be called
    return 0;



}
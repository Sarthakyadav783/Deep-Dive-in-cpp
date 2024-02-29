#include <iostream>
using namespace std;
//Base class pointer derived class object
// It can only access Base class methods
class Base{
    public:
    void fun1(){
        cout<<"fun1 of Base"<<endl;

    }
};
class Derived : public Base{
    public:
    void fun2(){
        cout<<"fun2 of Derived"<<endl;

    }
};
class BasicCar{
    public:
    void start(){
        cout<<"Car started"<<endl;
    }
};
class AdvnaceCar: public BasicCar{
    public:
    void playMusic(){
        cout<<"Music is playing"<<endl;

    }
};
int main(){
    Derived d;
    d.fun1();
    d.fun2();
    Base *ptr=&d;
    ptr->fun1();
    //ptr->fun2();Pointer of base class cannot point to object of derived class
    // think of example of Basic car model and Advnaced car model
    // Also pointer of derived class cannot point to the object of base class
    Derived *ptr1=&d;
    ptr1->fun2();
    ptr1->fun1();
    cout<<endl<<endl;
    AdvnaceCar a;
    a.start();
    a.playMusic();
    BasicCar *ptr2=&a;
    ptr2->start();
    //ptr2->playMusic();



    return 0;


}
#include <iostream>
using namespace std;
class Base{
    public:
    void fun1(){//concrete function
        cout<<"fun1 from Base"<<endl;

    }
    virtual void fun2()=0;//abstract function
    // This base class has 2 reasons: reusability(inheritance) and  to acheive polymorphism

    };
class Derived : public Base{
    public :
    void fun2(){
        cout<<"fun2 of derived"<<endl;

    }

};
int main(){
    Derived d;
    d.fun1();
    d.fun2();
    return 0;
}

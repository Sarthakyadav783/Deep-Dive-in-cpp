#include <iostream>
using namespace std;
//Access specifiers: public,private,protected
class Parent{
    private: int a;
    public: int b;
    protected: int c;

    void funParent(){
        a=10;
        b=5;
        c=15;
    }
};
class Child : private Parent{
    public:
    void funChild(){
        //a=10;//a cannot be accessed(its private member)
        b=5;
        c=15;
    };
}; 
class GrandChild : public Child{
    public:
    void funGrandChild(){
        //a=10;//private memmber
        b=5;
        c=20;
    }
};
int main(){
    //Child c1;
    //c1.a=10;
    //c1.b=5;
    //c1.c=15;
}

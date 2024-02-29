#include <iostream>
using namespace std;
// Function overriding

class Parent{
    public:
    void display(){
        cout<<"Display of parent"<<endl;

    }
    void display2(){
        cout<<"Display 2 in parent class"<<endl;
    }
};
class Child: public Parent{
    public:
    void display()// redifing a function of parent class in child class
    {
        cout<<"Display of child"<<endl;

    }
    void display2(int x){//function overloading not overriding as function signature is not same
        cout<<"Not function overriding"<<endl;

    }
};
int main(){
    Parent p;
    p.display();
    p.display2();
    Child c;
    c.display();
    c.Parent::display2();//scope resolution
    c.display2(10);

    return 0;
}
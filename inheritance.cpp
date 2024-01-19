#include <iostream>
using namespace std;
class Base {
    public:
    int x;
    void show(){
        cout<<x<<endl;
    };
    Base(){
        cout<<"Default constructor of Base"<<endl;

    };
    Base(int x){
        cout<<"Parameterised constructor of Base"<<endl;
    };
};
class Derived : public Base{
    public:
    int y;
    void Display(){
        cout<<x<<" "<<y<<endl;
    };
    Derived(){
        cout<<"Default constructor of Derived"<<endl;

    };
    Derived(int x){
        cout<<"Parameterised constructor of Derived"<<endl;

};
};
int main(){
    Base b;
    b.x=25;
    b.show();
    Derived d;
    d.y=50;;d.x=30;
    d.show();
    d.Display();
    Derived d1;//Default of base is executed first then defualt of derived
    return 0;
}

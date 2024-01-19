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
        cout<<"Parameterised constructor of Base "<<x<<endl;
    };
};
class Derived : public Base{
    public:
    int y;
    void Display(){
        cout<<x<<" "<<y<<endl;
    };
    Derived(){
        cout<<"Default constructor of Derived" <<endl;

    };
    Derived(int x,int a): Base(x)
    {
        cout<<"Parameterised constructor of Derived "<<a<<endl;

};
};
int main(){
    //calling is from derived to base but execution is from base to derived
    Base b;
    b.x=25;
    b.show();
    Derived d;//Default of base is called first then default of derived
    d.y=50;;d.x=30;
    d.show();
    d.Display();
    Derived d1(10,5);//Param of base is called first then param of derived
    return 0;
}

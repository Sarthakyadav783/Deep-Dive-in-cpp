#include <iostream>
using namespace std;
/*The basic difference between C++ classes and structures
is that by default in Class values are private whereas in strucutre they
are public */
struct Demo
{
    int x;
    int y;
    void Display(){
        cout<<x<<" "<<y<<endl;
    }
};

int main(){
    Demo d;
    d.x=10;
    d.y=20;
    d.Display();
}
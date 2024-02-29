#include <iostream>
using namespace std;
// friend functions can access all the memebers of the class
//friend class can acces members of objects of other classes
class Test{
    private: int a;
    protected: int b;
    public: int c;
    friend void fun();

};
void  fun(){
    Test t;//can access members of object of class
    t.a=10;
    t.b=5;
    t.c=7;

};
class Your;
class My{
    private: int a;
    protected: int b;
    public: int c;
    friend Your;

};
class Your{
    My m;
    void fun(){
        m.a=10;
        m.b=5;
        m.c=7;

    }

};
int main(){};
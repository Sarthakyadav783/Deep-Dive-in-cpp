#include <iostream>
using namespace std;
//  const qualifier is used to declare constants
// or to indicate that a variable should not be modified.
class Demo{
    public:
    int x=10;
    int y=20;
    void Display()const {
       // x++;cannot modify the data members of class as it is a const function
        cout<<x<<" "<<y<<endl;


    }
};
int main(){
    Demo d;
    d.Display();
    //read from the right
    const int x=10;
    const int *ptr1=&x;
    //++*ptr1;(cannot modify x as it is const)
    int y=20;
    const int *ptr2=&y;
    //++*ptr2;(Not possible as pointer to const it will not modify values at wherever it is pointing)
    ptr1=&y;
    //++*ptr1;
    int z=30;
    int * const ptr3=&z;//Here pointer is const and it is bound with one variable only
    ++*ptr3;
    cout<<*ptr3<<endl;
    int w=40;
    const int * const ptr4=&w;//const pointer to const variable. The const pointer cannot modify value to which it is pointing
    //++*ptr4;
    ++w;
    cout<<*ptr4<<endl;
    //ptr3=&y;


}
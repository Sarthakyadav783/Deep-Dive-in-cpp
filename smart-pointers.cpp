#include <iostream>
#include <memory>
using namespace std;
//smart pointers handle memory allocation and deallocation 
// in a safer and more efficient way compared to raw poitners
//3 types of smart pointers: unique,shared,weak ptr
//Smart pointers dont cause memory leak
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l,int b){
        length=l;
        breadth=b;

    };
    int area(){
        return length*breadth;

    };

};
int main(){
    unique_ptr<Rectangle> ptr(new Rectangle(10,5));
    cout<<ptr->area()<<endl;
    unique_ptr<Rectangle> ptr2;
    ptr2=move(ptr);//only 1 pointer can point to the Rectangle object
    cout<<ptr2->area()<<endl;
    //cout<<ptr->area()<<endl; 
    shared_ptr<Rectangle> ptr3(new Rectangle(7,2));
    cout<<ptr3->area()<<endl;
    shared_ptr<Rectangle>ptr4;
    ptr4=ptr3;//More than 1 one pointer can point to the same object
    cout<<ptr3->area()<<endl;
     cout<<ptr4->area()<<endl;
     cout<<ptr3.use_count()<<endl;


}
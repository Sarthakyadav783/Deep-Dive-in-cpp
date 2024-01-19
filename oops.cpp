#include <iostream>
using namespace std;
//Classes can be used to create user defiend data type 
 class Rectangle{
    public:
        int length;
        int breadth;

        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);

        }
    };
int main(){
    /*Rectangle r1,r2; // objects(instances) of class Rectangle
   r1.length=10;
   r1.breadth=5;
   cout<<r1.area()<<endl;*/

   // Pointer to object
   Rectangle r;
   Rectangle *p;
   p=&r;
   r.length=10;
   p->length=10;//accesing object using pointer
   p->breadth=5;// -> acts like a derefrencing operator
   cout<<p->area()<<endl;
   cout<<p->perimeter()<<endl;

   //creating object in Heap memory(Dynamic object )
   Rectangle *q=new Rectangle;
   q->length=17;
   q->breadth=15;
   cout<<q->area()<<endl;
   cout<<q->perimeter()<<endl;



}
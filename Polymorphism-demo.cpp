#include <iostream>
using namespace std;
/*Polymorphism is a concept that allows objects of different types to be treated
as objects of a common base type. 
It enables a single interface to represent different types of objects and  the 
approporiate implementation is determined at runtime
It is achieved through two main  mechanism: Function Overloading and Virutal Functions
*/
//polymorphism describes the concept that you can access objects of different types through the same interface. 
class Shape{
    public:

    virtual float area()=0;
    virtual float perimeter()=0;

};
class Rectangle: public Shape{
    private:
    float length;
    float breadth;
    public:
    Rectangle(int l=1,int b=1){
        length=l;
        breadth=b;
    }
    float area(){
        return length*breadth;

    };
    float perimeter(){
        return 2*(length+ breadth);
    };
    
    
};
class Circle: public Shape{
    private:
    float radius;
    public:
    Circle(int r=1){
        radius=r;
    };
    float area(){
        return radius*radius*3.14;

    };
    float perimeter(){
        return 2*3.14*radius;
    };
    
    
};
int main(){
    Shape *shape=new Rectangle(4,6);
    cout<<shape->area()<<endl;
    cout<<shape->perimeter()<<endl;
    shape=new Circle(7);
   cout<<shape->area()<<endl;
    cout<<shape->perimeter()<<endl;
    // same base pointer can call both the area and perimeter of the derived classes
    
}


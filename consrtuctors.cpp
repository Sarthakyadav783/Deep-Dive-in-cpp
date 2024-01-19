#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    public:
    void setlength(int l){
            if (l>=0){
            length=l;
            }
            else {
                length=0;
            }
        
        }
        void setbreadth(int b){//mutators
            if (b>=0){
            breadth=b;
            }
            else {
                breadth=0;
            }
        }
        int getlength(){//accessors
            return length;
        }
        int getbreadth(){
            return breadth;
        }

        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);

        }

    Rectangle()//default constructor : to avoid garbage values
    {//non parameterised
        length=1;
        breadth=1;

    }
    Rectangle(int l,int b)//parameterised constructor
    {
        setlength(l);
        setbreadth(b);
    }
    Rectangle(Rectangle &rect){//copy constructor
        length=rect.length;
        breadth=rect.breadth;
    }
  

};
int main(){
    Rectangle r;
    cout<<r.getlength()<<endl<<r.getbreadth()<<endl<<r.area()<<endl;
    Rectangle r1(10,5);
    cout<<r1.getlength()<<endl<<r1.getbreadth()<<endl<<r1.area()<<endl;
    Rectangle r2(r1);
    cout<<r2.getlength()<<endl<<r2.getbreadth()<<endl<<r2.area()<<endl;
   int a=5;
    int  *b=&a;
   cout<<b<<endl;
   cout<<&a<<endl;


}
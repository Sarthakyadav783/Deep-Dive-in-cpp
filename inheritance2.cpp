#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
     Rectangle(int l=0,int b=0 ){
        length=l;
        breadth=b;
    }
        void setlength(int l){
            if (l>=0){
            length=l;
            }
            else {
                length=0;
            }
        
        }
        void setbreadth(int b){
            if (b>=0){
            breadth=b;
            }
            else {
                breadth=0;
            }
        }
        int getlength(){
            return length;
        }
        int getbreadth(){
            return breadth;
        }

        int area(){//facilitators
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);

        }
    };

class Cuboid : public Rectangle{
    private:
    int height;
    public:
    Cuboid(int l=0,int b=0,int h=0){
        height=h;
        setlength(l);
        setbreadth(b);

    };
    int getheight(){
        return height;
    };
     void setheight(int h){
            if (h >=0){
            height=h;
            }
            else {
                height=0;
            }
} ;
int volume(){
    return getlength()*getbreadth()*getheight();
}

};
int main(){
    Cuboid c(10,5,2);
    cout<<c.getlength()<<endl;
    cout<<c.getbreadth()<<endl;
    cout<<c.getheight()<<endl;
    cout<<c.volume()<<endl;
    cout<<c.area()<<endl;
    return 0;
}
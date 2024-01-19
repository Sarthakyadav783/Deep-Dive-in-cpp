#include <iostream>
using namespace std;
//Operator overloading allows us to define how operators workd on 
//user-defined(custom) data types. It basically lets you give
//special meaning to the opertator when they are used with objects of your own class

class Complex{
    public:
    int real;
    int img;
    public:
    Complex(int r=0,int i=0){// default argument constructor: works as poth paramterised and non-parameterised constructor
    real=r;
    img=i;
    }
   Complex operator+(Complex x){//return type is COmplex(Custom data type)
    Complex temp;
    temp.real=real+x.real;
    temp.img=img+x.img;//real and img belong to the object on which the function is called
    return temp;}

   //operator overloading using friend functions
   friend Complex operator-(Complex x,Complex y);
   //insertion operator '<<' overloading
  friend ostream& operator<<(ostream &o,Complex &c1);//pass by reference


};
Complex operator-(Complex x,Complex y){
    Complex temp;
    temp.real=x.real-y.real;
    temp.img=x.img-y.img;
    return temp;

};


ostream& operator<<(ostream&output,Complex &c1){
    output<<c1.real<<"+"<<c1.img<<"i"<<endl;
    return output;
};


int main(){
    Complex c1(3,4);
    Complex c2(5,7);
    Complex c3;
    //c3=c1.add(c2)c2's value is passed as parameter and fn is called on c1
    c3=c2+c1;//using operator overloading
     cout<<c1.real<<" "<<c1.img<<"i"<<endl;
    cout<<endl;
     cout<<c2.real<<" "<<c2.img<<"i"<<endl;
    cout<<endl;

    cout<<c3.real<<" "<<c3.img<<"i"<<endl;
    cout<<endl;
    Complex t=c1-c2;
     cout<<t.real<<" "<<t.img<<"i"<<endl;
    cout<<endl;
     t=c3-c2;
     cout<<t.real<<" "<<t.img<<"i"<<endl;
     cout<<"Using operator overloading of insertion operator <<"<<endl;
     cout<<c1;//both cout and c operators are pased to <<
     operator<<(cout,c1);//same thing
     cout<<c2;
     cout<<c3;
   

   

}
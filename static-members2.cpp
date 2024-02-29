#include <iostream>
using namespace std;
//staic members examples
class Innova{
    public:
    static int price;
    static int getPrice(){
        return price;
    }
};
int Innova::price=40;


class Student{
    public:
    int roll;
    string name;
    static int addno;
    Student(string n){
        addno++;
        roll=addno;
        name=n;
   };
    void  display(){
        cout<<"Name: "<<name<<endl<<"Rollno: "<<roll<<endl;
    }


};
int Student::addno=0;

int main(){
    Innova i1,i2,i3;
    cout<<i1.price<<endl;
    cout<<i2.price<<endl;
    cout<<i3.price<<endl;
    cout<<endl<<endl;
    Student s1("A");
    Student s2("B");
    Student s3("C");
    s1.display();
    s2.display();
    s3.display();
    cout<<"Total Number of Admissions: "<<Student::addno<<endl;

    return 0;
}

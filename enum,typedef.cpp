#include<iostream>
using namespace std;
// enum is user defined data type
//type def makes program more readable
typedef int marks;
enum day {mon=1,tue,wed,thu,fri,sat,sun};// data type day .Enum is used to define  a set of constants under one name
int main(){
    day d;
    d=mon;
    cout<<d<<endl;
    cout<<fri<<endl;

    marks m1,m2;
    m1=50;m2=90;
    cout<<m1<<m2;

    
}

